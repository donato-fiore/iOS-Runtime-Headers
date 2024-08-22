// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPASSASSOCIATEDINFOMANAGER_H
#define NPKPASSASSOCIATEDINFOMANAGER_H

@class NSMutableDictionary, NSString, NSHashTable, NSSet, PKPaymentService;
@protocol PKPaymentServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPKPassAssociatedInfoManager : NSObject <PKPaymentServiceDelegate>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_passAssociatedInfoModelsByPassUniqueID;
    int _pendingAddValueUpdatedNotifyToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (copy) NSSet *passes;
@property (readonly, nonatomic) PKPaymentService *paymentService; // ivar: _paymentService
@property (nonatomic) BOOL paymentServiceWasInterrupted; // ivar: _paymentServiceWasInterrupted
@property (readonly) Class superclass;


-(BOOL)_isPassEligible:(id)arg0 ;
-(BOOL)canPerformRKEActionsForPassWithUniqueID:(id)arg0 ;
-(NSUInteger)rangingSuspensionReasonForPassWithUniqueID:(id)arg0 ;
-(id)_transitPassBalanceModelWithPass:(id)arg0 currentModel:(id)arg1 ;
-(id)init;
-(id)initWithPaymentService:(id)arg0 ;
-(id)passInfoForPassWithUniqueID:(id)arg0 ;
-(void)_fetchMostRecentBalancesForPass:(id)arg0 ;
-(void)_fetchMostRecentInfoForPass:(id)arg0 ;
-(void)_fetchMostRecentRangingSuspensionReasonForPass:(id)arg0 ;
-(void)_fetchMostRecentTilesForPass:(id)arg0 ;
-(void)_fetchMostRecentTransitPropertiesAndAppletStateForPass:(id)arg0 ;
-(void)_internalQueue_regenerateAssociatedInfoModelForPass:(id)arg0 inModelsByID:(id)arg1 ;
-(void)_loadPassContentIfNeeded:(id)arg0 ;
-(void)_notifyObservers:(id)arg0 ;
-(void)_notifyObserversOfUpdatedTransitPassInfoForModel:(id)arg0 ;
-(void)_updateAllPassesItemsFieldsPendingUpdateStatus;
-(void)_updatePassTransitPassesInfoManagerForPassUniqueID:(id)arg0 updateBlock:(id)arg1 ;
-(void)addPass:(id)arg0 ;
-(void)credential:(id)arg0 forPaymentApplication:(id)arg1 didUpdateRangingSuspensionReasons:(NSUInteger)arg2 ;
-(void)passWithUniqueIdentifier:(id)arg0 didUpdateTiles:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceiveBalanceUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateWithTransitPassProperties:(id)arg1 ;
-(void)refreshAllPasses;
-(void)registerObserver:(id)arg0 ;
-(void)removePassWithUniqueID:(id)arg0 ;
-(void)setPendingAmount:(id)arg0 forBalanceField:(id)arg1 passWithUniqueID:(id)arg2 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif