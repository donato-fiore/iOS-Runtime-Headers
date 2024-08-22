// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI23AUTHORIZATIONFOOTERVIEW_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI23AUTHORIZATIONFOOTERVIEW_H

@class UIView;



@interface _TtC28HealthExposureNotificationUI23AuthorizationFooterView : UIView {
    ? delegate;
    ? primaryButton;
    ? secondaryButton;
    ? footerLabel;
    ? visualEffectView;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTapPrimaryButton;
-(void)didTapSecondaryButton;


@end


#endif