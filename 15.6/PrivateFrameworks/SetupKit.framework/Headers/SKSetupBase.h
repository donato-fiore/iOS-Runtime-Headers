// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKSETUPBASE_H
#define SKSETUPBASE_H

@class NSMutableDictionary, NSMutableArray, NSString, NSData;
@protocol CULabelable, CUMessaging, SKStepable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SKConnection.h"
#import "SKDevice.h"

@interface SKSetupBase : NSObject <CULabelable, CUMessaging>

 {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_registeredEvents;
    NSMutableDictionary *_registeredRequests;
    int _runState;
    SKConnection *_skCnx;
    NSMutableArray *_stepArray;
    NSObject<SKStepable> *_stepCurrent;
    *LogCategory _ucat;
    *LogCategory _ucatBase;
}


@property (nonatomic) unsigned int controlFlags; // ivar: _controlFlags
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (nonatomic) int passwordType; // ivar: _passwordType
@property (retain, nonatomic) SKDevice *peerDevice; // ivar: _peerDevice
@property (copy, nonatomic) NSData *pskData; // ivar: _pskData
@property (copy, nonatomic) id *sendDataHandler; // ivar: _sendDataHandler
@property (nonatomic) int setupType; // ivar: _setupType
@property (readonly) Class superclass;


-(?)initWithLogCategory;
-(BOOL)_runSteps;
-(id)descriptionWithLevel:(int)arg0 ;
-(void)_activate;
-(void)_addStep:(id)arg0 ;
-(void)_completeWithError:(id)arg0 ;
-(void)_completedStep:(id)arg0 error:(id)arg1 ;
-(void)_connectionEnded:(id)arg0 ;
-(void)_connectionStartWithSKConnection:(id)arg0 clientMode:(BOOL)arg1 completeOnFailure:(BOOL)arg2 completion:(id)arg3 ;
-(void)_invalidate;
-(void)_invalidateSteps;
-(void)_invalidated;
-(void)_postEvent:(id)arg0 ;
-(void)_receivedEventID:(id)arg0 event:(id)arg1 options:(id)arg2 ;
-(void)_receivedRequestID:(id)arg0 request:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 ;
-(void)_reportEvent:(id)arg0 ;
-(void)_reportEventType:(int)arg0 ;
-(void)_run;
-(void)activate;
-(void)addStep:(id)arg0 ;
-(void)dealloc;
-(void)deregisterEventID:(id)arg0 completionHandler:(id)arg1 ;
-(void)deregisterRequestID:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidate;
-(void)postEvent:(id)arg0 ;
-(void)postEventType:(int)arg0 ;
-(void)receivedData:(id)arg0 ;
// -(void)registerEventID:(id)arg0 options:(id)arg1 eventHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(void)registerRequestID:(id)arg0 options:(id)arg1 requestHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)reportEvent:(id)arg0 ;
-(void)reportEventType:(int)arg0 ;
-(void)sendEventID:(id)arg0 eventMessage:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(void)sendRequestID:(id)arg0 requestMessage:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 ;


@end


#endif