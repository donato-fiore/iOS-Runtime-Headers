// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SMUFLOATINGCONTENTVIEW_H
#define _SMUFLOATINGCONTENTVIEW_H

@class UIFloatingContentView, UIView, NSString, UIImage;
@protocol SMUFloatingContentView, SMUFocusAnimationConfiguration;



@interface _SMUFloatingContentView : UIFloatingContentView <SMUFloatingContentView>



@property (nonatomic) BOOL _disableOutsetShadowPath;
@property (nonatomic) CGSize asymmetricFocusedSizeIncrease;
@property (nonatomic) CGSize asymmetricScaleFactor;
@property (nonatomic) CGRect bounds;
@property (nonatomic) BOOL clipsContentToBounds;
@property (nonatomic, getter=isContentOpaque) BOOL contentOpaque;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic, getter=isContinuousCornerEnabled) BOOL continuousCornerEnabled;
@property (nonatomic) NSUInteger controlState;
@property (nonatomic) NSString *cornerCurve;
@property (nonatomic) CGFloat cornerRadius;
@property (copy, nonatomic) NSObject<SMUFocusAnimationConfiguration> *focusAnimationConfiguration;
@property (nonatomic) CGPoint focusScaleAnchorPoint;
@property (nonatomic) CGFloat focusedSizeIncrease;
@property (nonatomic) CGRect frame;
@property (nonatomic) NSInteger highlightStyle;
@property (nonatomic) BOOL roundContentWhenDeselected;
@property (nonatomic) CGFloat scaleFactor;
@property (nonatomic) BOOL scalesBackwards;
@property (nonatomic) CGRect shadowContentsCenter;
@property (nonatomic, getter=isShadowEnabled) BOOL shadowEnabled;
@property (nonatomic) CGSize shadowExpansion;
@property (retain, nonatomic) UIImage *shadowImage;
@property (nonatomic) CGFloat shadowOpacity;
@property (nonatomic) CGFloat shadowRadius;
@property (nonatomic) CGSize shadowSize;
@property (nonatomic) CGFloat shadowVerticalOffset;
@property (nonatomic) BOOL showsHighContrastFocusIndicator;
@property (nonatomic) CGSize unfocusedShadowExpansion;
@property (nonatomic) CGFloat unfocusedShadowOpacity;
@property (nonatomic) CGFloat unfocusedShadowRadius;
@property (nonatomic) CGFloat unfocusedShadowVerticalOffset;
@property (nonatomic) BOOL useShadowImage;
@property (readonly, nonatomic) UIView *visualEffectContainerView;
@property (nonatomic) CGFloat visualEffectContainerViewScaleFactor;




@end


#endif