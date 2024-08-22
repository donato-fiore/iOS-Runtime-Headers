// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI25VERIFICATIONCHECKMARKCELL_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI25VERIFICATIONCHECKMARKCELL_H

@class TtC28HealthExposureNotificationUI16VerificationCell, UILabel;



@interface _TtC28HealthExposureNotificationUI25VerificationCheckmarkCell : TtC28HealthExposureNotificationUI16VerificationCell {
    ? accessoryImageView;
}


@property (nonatomic) BOOL isChecked; // ivar: isChecked
@property (nonatomic, readonly) UILabel *label; // ivar: label


-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif