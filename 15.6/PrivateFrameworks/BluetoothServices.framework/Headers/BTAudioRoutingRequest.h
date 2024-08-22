// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BTAUDIOROUTINGREQUEST_H
#define BTAUDIOROUTINGREQUEST_H

@class NSXPCConnection, NSString, NSXPCListenerEndpoint;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BTAudioRoutingRequest : NSObject <NSSecureCoding>

 {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}


@property (nonatomic) int audioScore; // ivar: _audioScore
@property (nonatomic) unsigned int clientID; // ivar: _clientID
@property (copy, nonatomic) NSString *deviceAddress; // ivar: _deviceAddress
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint; // ivar: _testListenerEndpoint


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_activate;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidated;
-(void)_reportError:(id)arg0 ;
-(void)activate;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif