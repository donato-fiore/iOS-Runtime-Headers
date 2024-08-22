// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPSIRIAUDIOSESSION_H
#define RPSIRIAUDIOSESSION_H

@class NSXPCConnection, NSString;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RPSiriAudioSession : NSObject <NSSecureCoding>

 {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    *LogCategory _ucat;
    NSXPCConnection *_xpcCnx;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *sessionID; // ivar: _sessionID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
// -(void)_activateWithCompletion:(id)arg0 reactivate:(unk)arg1  ;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidated;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)receivedSiriAudioEvent:(id)arg0 ;


@end


#endif