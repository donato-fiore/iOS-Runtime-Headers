// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSADDCELLULARPLANVIEWCONTROLLER_H
#define TSADDCELLULARPLANVIEWCONTROLLER_H

@class NSString;
@protocol UINavigationControllerDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBWelcomeController.h"

@interface TSAddCellularPlanViewController : TSOBWelcomeController <UINavigationControllerDelegate, TSSetupFlowItem>

 {
    BOOL _allowDismiss;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithType:(NSUInteger)arg0 allowDismiss:(BOOL)arg1 ;
-(void)_cancelButtonTapped;
-(void)_doneButtonTapped;
-(void)viewDidLoad;


@end


#endif