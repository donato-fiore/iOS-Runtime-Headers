// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSPAYMENTCONFIRMATIONVIEW_H
#define PKPASSPAYMENTCONFIRMATIONVIEW_H

@class UIView<PKPaymentDashboardCellActionHandleable>, UIView, PKExpressTransactionState, NSDate, NSMutableDictionary, PKPaymentService, NSArray, PKTransitBalanceModel, NSString;
@protocol PKPassPaymentPayStateViewDelegate, PKPaymentServiceDelegate, OS_dispatch_source;


#import "PKPassFooterContentView.h"
#import "PKPassPaymentPayStateView.h"
#import "PKPassTileGroupView.h"

@interface PKPassPaymentConfirmationView : PKPassFooterContentView <PKPassPaymentPayStateViewDelegate, PKPaymentServiceDelegate>

 {
    PKPassPaymentPayStateView *_payStateView;
    UIView<PKPaymentDashboardCellActionHandleable> *_singleValueCellPrimary;
    UIView<PKPaymentDashboardCellActionHandleable> *_singleValueCellSecondary;
    UIView<PKPaymentDashboardCellActionHandleable> *_dualValueCellPrimary;
    PKPassTileGroupView *_tileGroupView;
    UIView *_displayedCellPrimary;
    BOOL _animated;
    PKExpressTransactionState *_expressState;
    BOOL _receivedTransaction;
    BOOL _receivedExit;
    BOOL _needsResolution;
    BOOL _showingResolution;
    BOOL _showingSuccessResolution;
    BOOL _animatingResolution;
    BOOL _showingAlert;
    BOOL _isStandaloneTransaction;
    NSInteger _transactionType;
    NSObject<OS_dispatch_source> *_activityResolutionTimer;
    NSUInteger _resolutionCounter;
    NSDate *_visibleDate;
    NSMutableDictionary *_registeredExpressObservers;
    PKPaymentService *_paymentService;
    NSArray *_tiles;
    PKTransitBalanceModel *_transitBalanceModel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canDisplaySecondaryView;
-(BOOL)_isExpressOutstanding;
-(BOOL)_isRegisteredForAllExpressTransactionNotifications;
-(BOOL)_isRegisteredForAnyExpressTransactionNotifications;
-(BOOL)_shouldDisplayPrimaryView;
-(BOOL)_shouldDisplaySecondaryView;
-(id)_expressNotificationNames;
-(id)_findOrCreatePrimaryAdjustableSingleCellView;
-(id)_findOrCreatePrimaryFusedDoubleCellView;
-(id)_findOrCreateSecondaryView;
-(id)initWithPass:(id)arg0 ;
-(id)initWithPass:(id)arg0 context:(id)arg1 ;
-(void)_beginResolution;
-(void)_disableActivityTimer;
-(void)_handleExpressNotification:(id)arg0 ;
-(void)_presentCheckmarkIfNecessary;
-(void)_registerForExpressTransactionNotifications:(BOOL)arg0 ;
-(void)_registerObserverForNotificationName:(id)arg0 center:(id)arg1 handler:(id)arg2 ;
-(void)_resolveActivityIfNecessary;
-(void)_resolveActivityIfNecessaryWithDelay;
-(void)_updateContentPrimaryView;
-(void)_updateContentSecondaryView;
-(void)dealloc;
-(void)didBecomeHiddenAnimated:(BOOL)arg0 ;
-(void)didBecomeVisibleAnimated:(BOOL)arg0 ;
-(void)layoutIfNeededAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)passWithUniqueIdentifier:(id)arg0 didUpdateTiles:(id)arg1 ;
-(void)payStateView:(id)arg0 revealingCheckmark:(BOOL)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceiveBalanceUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateWithTransitPassProperties:(id)arg1 ;
-(void)transactionSourceIdentifier:(id)arg0 didReceiveTransaction:(id)arg1 ;
-(void)willBecomeHiddenAnimated:(BOOL)arg0 ;
-(void)willBecomeVisibleAnimated:(BOOL)arg0 ;


@end


#endif