// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIFEATHEREDBLURVIEW_H
#define SEARCHUIFEATHEREDBLURVIEW_H

@class UIView, MTMaterialView;



@interface SearchUIFeatheredBlurView : UIView

@property (nonatomic) CGRect frameForGradient; // ivar: _frameForGradient
@property (retain) UIView *gradientView; // ivar: _gradientView
@property (retain) MTMaterialView *materialView; // ivar: _materialView


-(id)init;
-(void)layoutSubviews;


@end


#endif