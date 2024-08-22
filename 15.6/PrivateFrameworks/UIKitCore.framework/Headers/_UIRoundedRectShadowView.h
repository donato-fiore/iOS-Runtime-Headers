// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIROUNDEDRECTSHADOWVIEW_H
#define _UIROUNDEDRECTSHADOWVIEW_H



#import "UIShadowView.h"

@interface _UIRoundedRectShadowView : UIShadowView {
    UIEdgeInsets _shadowOutsets;
}


@property (readonly, nonatomic) CGFloat maskCornerRadius; // ivar: _maskCornerRadius


+(BOOL)_shouldCutoutShadow;
+(struct UIEdgeInsets )_expansionInsetForShadowImage;
-(id)initWithCornerRadius:(CGFloat)arg0 ;
-(struct CGRect )frameWithContentWithFrame:(struct CGRect )arg0 ;
-(void)_loadImageIfNecessary;
-(void)_updateShadowOutsetsIfNecessary;
-(void)layoutSubviews;


@end


#endif