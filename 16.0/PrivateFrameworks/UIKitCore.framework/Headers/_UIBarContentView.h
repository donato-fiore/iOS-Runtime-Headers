// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBARCONTENTVIEW_H
#define _UIBARCONTENTVIEW_H

@class NSString;
@protocol _UIButtonBarAppearanceDelegate;


#import "UIView.h"
#import "_UIBarButtonItemAppearanceStorage.h"
#import "UIImage.h"
#import "UIImageSymbolConfiguration.h"
#import "UIColor.h"

@interface _UIBarContentView : UIView <_UIButtonBarAppearanceDelegate>



@property (retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // ivar: _appearanceGuideClass
@property (readonly, nonatomic) _UIBarButtonItemAppearanceStorage *appearanceStorage; // ivar: _appearanceStorage
@property (readonly, nonatomic) CGFloat backButtonMargin;
@property (readonly, nonatomic) CGFloat backButtonMaximumWidth;
@property (retain, nonatomic) UIImage *backIndicatorImage;
@property (retain, nonatomic) UIImage *backIndicatorMaskImage; // ivar: _backIndicatorMaskImage
@property (readonly, nonatomic) NSInteger barType;
@property (readonly, nonatomic) CGRect bounds;
@property (nonatomic) BOOL centerTextButtons; // ivar: _centerTextButtons
@property (readonly, nonatomic) BOOL compactMetrics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat defaultEdgeSpacing;
@property (readonly, nonatomic) CGFloat defaultTextPadding;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (readonly, nonatomic) BOOL isRTL;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *tintColor;


-(CGFloat)absorptionForItem:(id)arg0 ;
-(NSUInteger)_edgesPropagatingSafeAreaInsetsToSubviews;
-(NSUInteger)edgesPaddingBarButtonItem:(id)arg0 ;
-(id)_titleTextAttributesForState:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset )arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 style:(NSInteger)arg2 barMetrics:(NSInteger)arg3 ;
-(void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset )arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_appearanceChanged;
-(void)_setBackButtonBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_setBackButtonTitlePositionAdjustment:(struct UIOffset )arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)_setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 style:(NSInteger)arg2 barMetrics:(NSInteger)arg3 ;
-(void)_setBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_setTitlePositionAdjustment:(struct UIOffset )arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_setTitleTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;


@end


#endif