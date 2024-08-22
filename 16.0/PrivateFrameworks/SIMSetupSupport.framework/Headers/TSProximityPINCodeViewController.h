// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPROXIMITYPINCODEVIEWCONTROLLER_H
#define TSPROXIMITYPINCODEVIEWCONTROLLER_H

@class NSString, UILabel;
@protocol TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBWelcomeController.h"

@interface TSProximityPINCodeViewController : TSOBWelcomeController <TSSetupFlowItem>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isIdleTimerDisabled; // ivar: _isIdleTimerDisabled
@property (retain) NSString *pin; // ivar: _pin
@property (retain, nonatomic) UILabel *pinCodeLabel; // ivar: _pinCodeLabel
@property (readonly) Class superclass;


-(id)initWithPIN:(id)arg0 ;
-(void)updatePIN:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif