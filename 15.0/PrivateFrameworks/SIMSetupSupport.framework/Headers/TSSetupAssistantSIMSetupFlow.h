// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSSETUPASSISTANTSIMSETUPFLOW_H
#define TSSETUPASSISTANTSIMSETUPFLOW_H

@class NSMutableArray, NSString, UIBarButtonItem;
@protocol TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate;


#import "TSSIMSetupFlow.h"

@interface TSSetupAssistantSIMSetupFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate>

 {
    BOOL _showAddPlan;
    NSMutableArray *_danglingPlanItems;
    NSString *_iccid;
    UIBarButtonItem *_cancelButton;
}


@property (retain) NSMutableArray *currentItemsForIMessage; // ivar: _currentItemsForIMessage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL inBuddy; // ivar: _inBuddy
@property (readonly) Class superclass;


+(void)needsToRun:(id)arg0 ;
-(id)firstViewController;
-(id)init;
-(id)initWithIccid:(id)arg0 showAddPlan:(BOOL)arg1 allowDismiss:(BOOL)arg2 ;
-(id)nextViewControllerFrom:(id)arg0 ;
-(void)setDefaultNavigationItems:(id)arg0 ;
-(void)viewControllerDidComplete:(id)arg0 ;


@end


#endif