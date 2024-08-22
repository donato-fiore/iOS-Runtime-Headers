// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BTAUDIOSESSION_H
#define BTAUDIOSESSION_H

@class NSXPCConnection, NSString, NSXPCListenerEndpoint;
@protocol NSSecureCoding, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BTAudioSession : NSObject <NSSecureCoding>

 {
    BOOL _activateCalled;
    id *_activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    *LogCategory _ucat;
    NSXPCConnection *_xpcCnx;
}


@property (nonatomic) int audioArbitrationResult; // ivar: _audioArbitrationResult
@property (nonatomic) int category; // ivar: _category
@property (nonatomic) unsigned int clientID; // ivar: _clientID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (nonatomic) BOOL inAppRouting; // ivar: _inAppRouting
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) int mode; // ivar: _mode
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint; // ivar: _testListenerEndpoint
@property (nonatomic) CGFloat timeoutSeconds; // ivar: _timeoutSeconds


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_activate;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidated;
-(void)_reportError:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif