// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCONTINUITYREMOTESESSION_H
#define SFCONTINUITYREMOTESESSION_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSession.h"
#import "SFDevice.h"

@interface SFContinuityRemoteSession : NSObject {
    BOOL _activateCalled;
    id *_activateHandler;
    BOOL _invalidateCalled;
    NSMutableArray *_messageQueue;
    BOOL _pairVerifyDone;
    BOOL _pairVerifyRunning;
    SFSession *_sfSession;
    BOOL _sfSessionActivated;
    BOOL _started;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) SFDevice *peerDevice; // ivar: _peerDevice


-(id)init;
-(void)_cleanup;
-(void)_run;
-(void)_sendCommand:(int)arg0 options:(id)arg1 ;
-(void)_sendQueuedMesssages;
-(void)_sfSessionStart;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)sendCommand:(int)arg0 ;
-(void)sendCommand:(int)arg0 options:(id)arg1 ;


@end


#endif