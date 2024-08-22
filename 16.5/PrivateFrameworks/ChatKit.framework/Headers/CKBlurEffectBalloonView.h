// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKBLUREFFECTBALLOONVIEW_H
#define CKBLUREFFECTBALLOONVIEW_H

@class UIVisualEffectView, UIView;


#import "CKImageBalloonView.h"

@interface CKBlurEffectBalloonView : CKImageBalloonView

@property (retain, nonatomic) UIVisualEffectView *blurEffectView; // ivar: _blurEffectView
@property (retain, nonatomic) UIView *commSafetyBadgeView; // ivar: _commSafetyBadgeView


-(id)description;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif