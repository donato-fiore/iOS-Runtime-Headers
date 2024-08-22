// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ASCABLEQRCODEBADGEVIEW_H
#define _ASCABLEQRCODEBADGEVIEW_H

@class UIView, UIImageView, NSLayoutConstraint;



@interface _ASCABLEQRCodeBadgeView : UIView {
    UIView *_platterView;
    UIImageView *_iconView;
    NSLayoutConstraint *_iconOffsetXConstraint;
    NSLayoutConstraint *_iconOffsetYConstraint;
}




-(id)_passkeyIcon;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateLayoutMetricsWithFrameSize:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif