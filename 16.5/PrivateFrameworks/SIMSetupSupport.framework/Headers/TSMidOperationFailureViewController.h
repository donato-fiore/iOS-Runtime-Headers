// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSMIDOPERATIONFAILUREVIEWCONTROLLER_H
#define TSMIDOPERATIONFAILUREVIEWCONTROLLER_H

@class CoreTelephonyClient, CTCellularPlanItem, NSError, NSString, NSDictionary;
@protocol UINavigationControllerDelegate, TSSIMSetupDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBWelcomeController.h"

@interface TSMidOperationFailureViewController : TSOBWelcomeController <UINavigationControllerDelegate, TSSIMSetupDelegate, TSSetupFlowItem>

 {
    BOOL _withBackButton;
    CoreTelephonyClient *_client;
    CTCellularPlanItem *_updatePlanItem;
    NSError *_planItemError;
    NSString *_carrierName;
    NSDictionary *_errorHeaderDetail;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isContinueByUser; // ivar: _isContinueByUser
@property (readonly) Class superclass;


-(BOOL)isStartOverRequiredOnBackButtonTapped;
-(id)initWithPlanItemError:(id)arg0 updatePlanItem:(id)arg1 withBackButton:(BOOL)arg2 forCarrier:(id)arg3 ;
-(void)_buttonAction;
-(void)_disableMismatchedPlan;
-(void)_doneButtonTapped;
-(void)viewDidLoad;


@end


#endif