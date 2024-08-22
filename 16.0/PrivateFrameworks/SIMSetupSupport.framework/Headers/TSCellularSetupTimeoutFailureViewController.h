// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCELLULARSETUPTIMEOUTFAILUREVIEWCONTROLLER_H
#define TSCELLULARSETUPTIMEOUTFAILUREVIEWCONTROLLER_H

@class OBBoldTrayButton, NSString;
@protocol TSSIMSetupDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBTableWelcomeController.h"

@interface TSCellularSetupTimeoutFailureViewController : TSOBTableWelcomeController <TSSIMSetupDelegate, TSSetupFlowItem>

 {
    OBBoldTrayButton *_continueButton;
    id *viewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_continueButtonTapped;
-(void)viewDidLoad;


@end


#endif