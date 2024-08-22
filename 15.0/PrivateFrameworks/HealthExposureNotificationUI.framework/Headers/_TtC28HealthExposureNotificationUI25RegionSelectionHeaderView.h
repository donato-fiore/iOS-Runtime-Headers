// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI25REGIONSELECTIONHEADERVIEW_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI25REGIONSELECTIONHEADERVIEW_H

@class UIView, UILabel;



@interface _TtC28HealthExposureNotificationUI25RegionSelectionHeaderView : UIView {
    ? imageDimension;
    ? iconTitlePadding;
    ? title;
    ? globeImageView;
}


@property (nonatomic, readonly) UILabel *titleLabel; // ivar: titleLabel


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif