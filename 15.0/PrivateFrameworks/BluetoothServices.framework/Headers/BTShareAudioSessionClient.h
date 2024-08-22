// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BTSHAREAUDIOSESSIONCLIENT_H
#define BTSHAREAUDIOSESSIONCLIENT_H

@class NSXPCConnection, NSXPCListenerEndpoint;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BTShareAudioSessionClient : NSObject <NSSecureCoding>

 {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) int mode; // ivar: _mode
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint; // ivar: _testListenerEndpoint


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_activate:(BOOL)arg0 ;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidated;
-(void)activate;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)shareAudioProgressEvent:(int)arg0 info:(id)arg1 ;
-(void)userConfirmed:(BOOL)arg0 ;


@end


#endif