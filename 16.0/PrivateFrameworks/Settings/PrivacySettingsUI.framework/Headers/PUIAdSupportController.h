// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUIADSUPPORTCONTROLLER_H
#define PUIADSUPPORTCONTROLLER_H

@class PSListController, ADTrackingTransparency, NSString, UserTransparencyViewController;
@protocol UserTransparencyViewControllerDelegate;



@interface PUIAdSupportController : PSListController <UserTransparencyViewControllerDelegate>



@property (retain, nonatomic) ADTrackingTransparency *adTrackingTransparency; // ivar: _adTrackingTransparency
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UserTransparencyViewController *userTransparencyController; // ivar: _userTransparencyController


-(BOOL)personalizedAdsAvailable;
-(id)personalizedAdsEnabled:(id)arg0 ;
-(id)personalizedAdsSwitchEnabled;
-(id)specifiers;
-(void)setPersonalizedAdsEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)userDidTapAdPreferences:(id)arg0 ;
-(void)userDidTapDoneButton:(id)arg0 ;
-(void)userDidTapLearnMoreLink:(id)arg0 ;
-(void)userTransparencyViewController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)userTransparencyViewControllerDidDismiss:(id)arg0 ;
-(void)userTransparencyViewControllerDidLoad:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif