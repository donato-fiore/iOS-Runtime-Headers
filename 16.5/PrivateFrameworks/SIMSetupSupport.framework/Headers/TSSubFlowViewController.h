// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSSUBFLOWVIEWCONTROLLER_H
#define TSSUBFLOWVIEWCONTROLLER_H

@class NSString, UIViewController, UIView;
@protocol TSSIMSetupDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBWelcomeController.h"
#import "TSSIMSetupFlow.h"

@interface TSSubFlowViewController : TSOBWelcomeController <TSSIMSetupDelegate, TSSetupFlowItem>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) UIViewController *firstViewController; // ivar: _firstViewController
@property (readonly) NSUInteger hash;
@property BOOL isOfferFallbackFlow; // ivar: _isOfferFallbackFlow
@property BOOL isViewControllerPresented; // ivar: _isViewControllerPresented
@property BOOL isViewControllerPresenting; // ivar: _isViewControllerPresenting
@property (weak) UIViewController *prevViewController; // ivar: _prevViewController
@property (retain) UIView *snapshot; // ivar: _snapshot
@property (retain) TSSIMSetupFlow *subFlow; // ivar: _subFlow
@property NSUInteger subFlowType; // ivar: _subFlowType
@property (readonly) Class superclass;


-(NSInteger)backOption;
-(id)initWithOptions:(id)arg0 navigationController:(id)arg1 ;
-(void)_presentFirstViewController;
-(void)prepare:(id)arg0 ;
-(void)simSetupFlowCompleted:(NSUInteger)arg0 ;
-(void)takeScreenShot:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif