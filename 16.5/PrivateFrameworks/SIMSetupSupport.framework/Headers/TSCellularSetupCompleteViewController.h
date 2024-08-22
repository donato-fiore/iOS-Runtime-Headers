// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCELLULARSETUPCOMPLETEVIEWCONTROLLER_H
#define TSCELLULARSETUPCOMPLETEVIEWCONTROLLER_H

@class OBBoldTrayButton, NSString;
@protocol TSSIMSetupDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBWelcomeController.h"

@interface TSCellularSetupCompleteViewController : TSOBWelcomeController <TSSIMSetupDelegate, TSSetupFlowItem>

 {
    OBBoldTrayButton *_continueButton;
    id *viewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPhoneNumber:(id)arg0 planName:(id)arg1 planActiveOnSource:(BOOL)arg2 ;
-(void)_continueButtonTapped;
-(void)viewDidLoad;


@end


#endif