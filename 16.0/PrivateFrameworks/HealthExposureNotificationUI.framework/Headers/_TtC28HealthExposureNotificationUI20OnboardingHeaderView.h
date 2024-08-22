// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI20ONBOARDINGHEADERVIEW_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI20ONBOARDINGHEADERVIEW_H

@class UIView, UIImageView;


#import "_TtC28HealthExposureNotificationUI22ENUIPublicHealthHeader.h"

@interface _TtC28HealthExposureNotificationUI20OnboardingHeaderView : UIView {
    ? insets;
    ? proxyDisabled;
    ? imageViewWidthConstraint;
    ? labelContainerLeadingConstraint;
    ? imageWidthConstraint;
    ? imageHeightConstraint;
}


@property (nonatomic, readonly) _TtC28HealthExposureNotificationUI22ENUIPublicHealthHeader *header; // ivar: header
@property (nonatomic, readonly) UIImageView *imageView; // ivar: imageView


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithHeader:(id)arg0 insets:(struct UIEdgeInsets )arg1 proxyDisabled:(BOOL)arg2 corners:(NSUInteger)arg3 ;


@end


#endif