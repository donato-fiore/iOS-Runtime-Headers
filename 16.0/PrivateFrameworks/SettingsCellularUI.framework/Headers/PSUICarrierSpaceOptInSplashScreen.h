// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUICARRIERSPACEOPTINSPLASHSCREEN_H
#define PSUICARRIERSPACEOPTINSPLASHSCREEN_H

@class OBWelcomeController, OBBoldTrayButton, PSListController;



@interface PSUICarrierSpaceOptInSplashScreen : OBWelcomeController

@property (retain, nonatomic) OBBoldTrayButton *continueButton; // ivar: _continueButton
@property (copy, nonatomic) id *continueButtonAction; // ivar: _continueButtonAction
@property (weak, nonatomic) PSListController *listController; // ivar: _listController


-(id)getLogger;
-(id)initWithParent:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif