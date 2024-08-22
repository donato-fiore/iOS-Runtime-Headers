// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCGRADIENTVIEW_H
#define NCGRADIENTVIEW_H

@class UIView, CAGradientLayer;



@interface NCGradientView : UIView {
    CAGradientLayer *_gradient;
    BOOL _isVertical;
}




-(id)initWithHorizontalStartColor:(id)arg0 horizontalEndColor:(id)arg1 ;
-(id)initWithVerticalStartColor:(id)arg0 verticalEndColor:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif