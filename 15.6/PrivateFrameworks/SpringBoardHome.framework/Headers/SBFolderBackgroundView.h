// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFOLDERBACKGROUNDVIEW_H
#define SBFOLDERBACKGROUNDVIEW_H

@class UIView, MTMaterialView;
@protocol SBFolderBackgroundViewDelegate;



@interface SBFolderBackgroundView : UIView {
    UIView *_tintView;
    MTMaterialView *_blurView;
    CGFloat _continuousCornerRadius;
}


@property (readonly, nonatomic) NSUInteger concreteEffect;
@property (nonatomic) NSUInteger currentEffect; // ivar: _currentEffect
@property (weak, nonatomic) NSObject<SBFolderBackgroundViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger effect; // ivar: _effect


+(CGFloat)cornerRadiusToInsetContent;
+(struct CGSize )folderBackgroundSize;
+(void)warmupIfNecessary;
-(BOOL)_hasLowQualityBackground;
-(id)_tintViewBackgroundColorAtFullAlpha;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_reduceTransparencyChanged;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_updateCurrentEffect;
-(void)layoutSubviews;
-(void)updateTintEffectColor;


@end


#endif