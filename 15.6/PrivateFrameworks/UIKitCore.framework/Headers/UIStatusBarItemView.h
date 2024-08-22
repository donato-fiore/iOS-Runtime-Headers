// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISTATUSBARITEMVIEW_H
#define UISTATUSBARITEMVIEW_H

@class NSString;


#import "UIView.h"
#import "_UILegibilityView.h"
#import "_UILegibilityImageSet.h"
#import "UIStatusBarForegroundStyleAttributes.h"
#import "UIStatusBarItem.h"
#import "UIStatusBarLayoutManager.h"

@interface UIStatusBarItemView : UIView {
    CGFloat _currentOverlap;
    *CGContext _imageContext;
    CGFloat _imageContextScale;
    _UILegibilityView *_legibilityView;
    _UILegibilityImageSet *_lastGeneratedTextImage;
    CGFloat _lastGeneratedTextImageLetterSpacing;
    NSString *_lastGeneratedTextImageText;
}


@property (nonatomic) BOOL allowsUpdates; // ivar: _allowsUpdates
@property (readonly, nonatomic) UIStatusBarForegroundStyleAttributes *foregroundStyle; // ivar: _foregroundStyle
@property (readonly, nonatomic) UIStatusBarItem *item; // ivar: _item
@property (weak, nonatomic) UIStatusBarLayoutManager *layoutManager; // ivar: _layoutManager
@property (readonly, nonatomic) BOOL shouldTintContentImage; // ivar: _shouldTintContentImage
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


+(id)createViewForItem:(id)arg0 withData:(id)arg1 actions:(int)arg2 foregroundStyle:(id)arg3 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)_shouldReverseLayoutDirection;
-(BOOL)allowsUserInteraction;
-(BOOL)animatesDataChange;
-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(CGFloat)addContentOverlap:(CGFloat)arg0 ;
-(CGFloat)adjustFrameToNewSize:(CGFloat)arg0 ;
-(CGFloat)currentLeftOverlap;
-(CGFloat)currentOverlap;
-(CGFloat)currentRightOverlap;
-(CGFloat)extraLeftPadding;
-(CGFloat)extraRightPadding;
-(CGFloat)legibilityStrength;
-(CGFloat)maximumOverlap;
-(CGFloat)neededSizeForImageSet:(id)arg0 ;
-(CGFloat)resetContentOverlap;
-(CGFloat)setStatusBarData:(id)arg0 actions:(int)arg1 ;
-(CGFloat)shadowPadding;
-(CGFloat)standardPadding;
-(CGFloat)updateContentsAndWidth;
-(NSInteger)legibilityStyle;
-(NSInteger)textAlignment;
-(NSInteger)textStyle;
-(id)accessibilityHUDRepresentation;
-(id)cachedImageWithText:(id)arg0 truncatedWithEllipsesAtMaxWidth:(CGFloat)arg1 letterSpacing:(CGFloat)arg2 ;
-(id)contentsIOSurface;
-(id)contentsImage;
-(id)description;
-(id)foregroundView;
-(id)imageFromImageContextClippedToWidth:(CGFloat)arg0 ;
-(id)imageWithShadowNamed:(id)arg0 ;
-(id)imageWithText:(id)arg0 ;
-(id)imageWithText:(id)arg0 shouldCache:(BOOL)arg1 ;
-(id)initWithItem:(id)arg0 data:(id)arg1 actions:(int)arg2 style:(id)arg3 ;
-(id)textFont;
-(void)_tintContentLayerIfNeeded;
-(void)beginDisablingRasterization;
-(void)beginImageContextWithMinimumWidth:(CGFloat)arg0 ;
-(void)clearCachedTextImage;
-(void)dealloc;
-(void)endDisablingRasterization;
-(void)endImageContext;
-(void)performPendedActions;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)setCurrentOverlap:(CGFloat)arg0 ;
-(void)setLayerContentsImage:(id)arg0 ;
-(void)setPersistentAnimationsEnabled:(BOOL)arg0 ;
-(void)updateForNewStyle:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif