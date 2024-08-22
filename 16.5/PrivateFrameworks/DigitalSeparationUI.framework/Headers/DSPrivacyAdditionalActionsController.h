// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSPRIVACYADDITIONALACTIONSCONTROLLER_H
#define DSPRIVACYADDITIONALACTIONSCONTROLLER_H

@class OBBoldTrayButton, NSString;
@protocol DSController, DSNavigationDelegate;


#import "DSOBWelcomeController.h"

@interface DSPrivacyAdditionalActionsController : DSOBWelcomeController <DSController>



@property (retain, nonatomic) OBBoldTrayButton *boldButton; // ivar: _boldButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DSNavigationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)back;
-(void)pushNextPane;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif