// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTRANSFERREDVIEWCONTROLLER_H
#define TSTRANSFERREDVIEWCONTROLLER_H

@class NSString;
@protocol UINavigationControllerDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBWelcomeController.h"

@interface TSTransferredViewController : TSOBWelcomeController <UINavigationControllerDelegate, TSSetupFlowItem>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTransferredPlan:(id)arg0 ;
-(void)_doneButtonTapped;
-(void)_skipButtonTapped;
-(void)viewDidLoad;


@end


#endif