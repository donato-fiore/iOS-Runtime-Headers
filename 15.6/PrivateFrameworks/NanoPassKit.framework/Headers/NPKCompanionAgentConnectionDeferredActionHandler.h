// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKCOMPANIONAGENTCONNECTIONDEFERREDACTIONHANDLER_H
#define NPKCOMPANIONAGENTCONNECTIONDEFERREDACTIONHANDLER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPKCompanionAgentConnectionDeferredActionHandler : NSObject

@property (retain, nonatomic) NSMutableDictionary *deferredActions; // ivar: _deferredActions
@property (retain, nonatomic) NSMutableDictionary *deferredAddedPaymentPasses; // ivar: _deferredAddedPaymentPasses
@property (retain, nonatomic) NSMutableDictionary *deferredSharedPaymentWebServiceContexts; // ivar: _deferredSharedPaymentWebServiceContexts
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue


+(id)sharedDeferredActionHandler;
-(id)deferredPaymentPassUniqueIDsForDevice:(id)arg0 excludingDeactivated:(BOOL)arg1 ;
-(id)deferredPaymentPassWithUniqueID:(id)arg0 forDevice:(id)arg1 ;
-(id)deferredPaymentPassesForDevice:(id)arg0 ;
-(id)deferredSharedPaymentWebServiceContextForDevice:(id)arg0 ;
-(id)init;
-(void)_cleanUpDeferredDataForPairingID:(id)arg0 ;
-(void)_handleCompanionAgentStarted;
-(void)_handleDeviceBecameActive:(id)arg0 ;
-(void)_handleDevicePaired:(id)arg0 ;
-(void)_handleDevicePairingFailure:(id)arg0 ;
-(void)_handleDeviceUnpaired:(id)arg0 ;
-(void)_performDeferredActions;
-(void)addDeferredPaymentPass:(id)arg0 forDevice:(id)arg1 ;
-(void)dealloc;
// -(void)performActionWhenCompanionAgentIsAvailable:(id)arg0 forDevice:(unk)arg1  ;
-(void)setDeferredSharedPaymentWebServiceContext:(id)arg0 forDevice:(id)arg1 ;


@end


#endif