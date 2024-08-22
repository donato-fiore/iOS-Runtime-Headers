// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNFREGSPLASHSCREENCONTROLLER_H
#define CNFREGSPLASHSCREENCONTROLLER_H

@class PSViewController, UIButton, UIBarButtonItem, NSString;
@protocol CNFRegFirstRunExperience, CNFRegFirstRunDelegate;


#import "CNFRegController.h"

@interface CNFRegSplashScreenController : PSViewController <CNFRegFirstRunExperience>

 {
    UIButton *_learnMoreButton;
}


@property (readonly, nonatomic) NSInteger currentAppearanceStyle;
@property (retain, nonatomic) UIBarButtonItem *customLeftButton;
@property (retain, nonatomic) UIBarButtonItem *customRightButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CNFRegFirstRunDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNFRegController *regController; // ivar: _regController
@property (readonly) Class superclass;


-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(id)init;
-(id)initWithRegController:(id)arg0 account:(id)arg1 ;
-(id)userInteractionColor;
-(void)_getStartedPressed:(id)arg0 ;
-(void)_learnMorePressed:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willBecomeActive;


@end


#endif