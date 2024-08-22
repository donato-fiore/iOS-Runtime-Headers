// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKEXPRESSPASSESVIEWCONTROLLER_H
#define PKEXPRESSPASSESVIEWCONTROLLER_H

@class NSMutableArray, PKExpressPassController, NSArray, NSMutableDictionary, NSString, LAContext;
@protocol PKPaymentDataProviderDelegate, PKPaymentPreferenceCardCellAccessoryViewDelegate, PKPaymentDataProvider;


#import "PKSectionTableViewController.h"
#import "PKPassSnapshotter.h"

@interface PKExpressPassesViewController : PKSectionTableViewController <PKPaymentDataProviderDelegate, PKPaymentPreferenceCardCellAccessoryViewDelegate>

 {
    NSMutableArray *_transitPasses;
    NSMutableArray *_selectedTransitPassIndices;
    PKExpressPassController *_expressPassController;
    NSMutableArray *_paymentPasses;
    NSArray *_allPasses;
    id<PKPaymentDataProvider> *_paymentDataProvider;
    NSInteger _style;
    NSMutableDictionary *_passUniqueIDToCell;
    NSMutableDictionary *_passUniqueIDToTransitBalanceModels;
    NSInteger _selectedPaymentPassIndex;
    NSString *_selectedPaymentPassDisclosureString;
    BOOL _selectedPaymentPassIsInPendingState;
    BOOL _supressHandlingPassUpdates;
    unsigned int _supressHandlingPassUpdateCounter;
    BOOL _isUserInteractionsEnabled;
    BOOL _userAutomaticExpressModeText;
    BOOL _useOldAppearance;
    PKPassSnapshotter *_passSnapshotter;
    LAContext *_LAContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *passes; // ivar: _passes
@property (readonly) Class superclass;


-(BOOL)_isTransitExpressRowEnabledForIndex:(NSUInteger)arg0 ;
-(BOOL)_shouldShowSelectionDisclosureForPass:(id)arg0 ;
-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)_heightForRowAtIndexPath:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_sectionForPass:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_additionalContextStringForPass:(id)arg0 ;
-(id)_conflictingPassesForPass:(id)arg0 useCaseWithPasses:(id)arg1 ;
-(id)_passWithUniqueIdentifier:(id)arg0 ;
-(id)_paymentCardCellForRow:(NSInteger)arg0 ;
-(id)_paymentPassForIndex:(NSUInteger)arg0 ;
-(id)_preferenceCardCellForIdentifier:(id)arg0 ;
-(id)_reportingSubject;
-(id)_transformState:(id)arg0 ;
-(id)_transitCardCellForRow:(NSInteger)arg0 ;
-(id)_transitPassForIndex:(NSUInteger)arg0 ;
-(id)initWithPaymentDataProvider:(id)arg0 controller:(id)arg1 style:(NSInteger)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(unsigned int)_beginPassUpdateSuppression;
-(void)_acquireUserAuthForPass:(id)arg0 withCompletion:(id)arg1 ;
-(void)_beginReporting;
-(void)_configureAccessoryViewForPaymentCardCell:(id)arg0 row:(NSInteger)arg1 ;
-(void)_disableExpressModeForPass:(id)arg0 withCompletion:(id)arg1 ;
-(void)_enableExpressModeForPass:(id)arg0 withCompletion:(id)arg1 ;
-(void)_endPassUpdateSuppressionWithToken:(unsigned int)arg0 delay:(CGFloat)arg1 ;
-(void)_endReporting;
-(void)_fetchBalancesAndTransitPassPropertiesForPass:(id)arg0 completion:(id)arg1 ;
-(void)_invalidateUserAuth;
-(void)_promptUserAboutConflicts:(id)arg0 forPass:(id)arg1 completion:(id)arg2 ;
-(void)_reloadLocalPassStores;
-(void)_reportExpressModeDisable:(id)arg0 ;
-(void)_reportExpressModeEnable:(id)arg0 ;
-(void)_reportExpressModeEnableFailed:(id)arg0 ;
-(void)_reportExpressModeEvent:(id)arg0 forPass:(id)arg1 ;
-(void)_sendExpressPassDidChangeNotification;
-(void)_setUserInteractionsEnabled:(BOOL)arg0 ;
-(void)_transitUpdateWithState:(id)arg0 ;
-(void)_updateBalancesWithServerBalances:(id)arg0 transitPassProperties:(id)arg1 forPass:(id)arg2 ;
-(void)_updateBalancesWithServerBalances:(id)arg0 transitPassProperties:(id)arg1 forPassWithUniqueIdentifier:(id)arg2 ;
-(void)_updateExpressState:(id)arg0 ;
-(void)_updatePaymentCardCellWithIndex:(NSInteger)arg0 statusString:(id)arg1 ;
-(void)_updateUIWithExpressState;
-(void)_upgradeExpressModeForPass:(id)arg0 withCompletion:(id)arg1 ;
-(void)_userChangedExpressSettingForPaymentPassAtIndexPath:(id)arg0 ;
-(void)_userChangedExpressTransitToNone;
-(void)_userSetExpressTransitCardToEnabled:(BOOL)arg0 cell:(id)arg1 ;
-(void)dealloc;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceiveBalanceUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateWithTransitPassProperties:(id)arg1 ;
-(void)paymentPreferenceCardCell:(id)arg0 didChangeSwitchState:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif