// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCELLULARSETUPACTIVATINGVIEWCONTROLLER_H
#define TSCELLULARSETUPACTIVATINGVIEWCONTROLLER_H

@class NSString, UILabel, UIActivityIndicatorView;
@protocol TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBTableWelcomeController.h"

@interface TSCellularSetupActivatingViewController : TSOBTableWelcomeController <TSSetupFlowItem>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;


-(id)init;
-(void)_setUpLabel;
-(void)_setUpSpinner;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif