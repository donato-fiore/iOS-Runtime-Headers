// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC5TEAUI32PERSONALIZEDADSWELCOMECONTROLLER_H
#define _TTC5TEAUI32PERSONALIZEDADSWELCOMECONTROLLER_H

@class OBWelcomeController;



@interface _TtC5TeaUI32PersonalizedAdsWelcomeController : OBWelcomeController {
    ? adPrivacyHeaderIconView;
    ? buttonStyle;
    ? turnOnCallback;
    ? turnOffCallback;
    ? onboardingFlowDelegate;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif