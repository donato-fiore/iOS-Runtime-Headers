// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITABLEVIEWINDEX_H
#define UITABLEVIEWINDEX_H

@class NSArray, UIFont, NSString;
@protocol UIAccessibilityHUDGestureDelegate;


#import "UIControl.h"
#import "UIColor.h"
#import "UIAccessibilityHUDGestureManager.h"

@interface UITableViewIndex : UIControl <UIAccessibilityHUDGestureDelegate>

 {
    NSArray *_titles;
    UIFont *_font;
    CGSize _cachedSize;
    CGSize _cachedSizeToFit;
    UIColor *_indexColor;
    UIColor *_indexBackgroundColor;
    UIColor *_indexTrackingBackgroundColor;
    CGFloat _topPadding;
    CGFloat _bottomPadding;
    CGFloat _verticalTextHeightEstimate;
    NSArray *_entries;
    NSInteger _idiom;
    UIAccessibilityHUDGestureManager *_axHUDGestureManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIEdgeInsets drawingInsets; // ivar: _drawingInsets
@property (retain, nonatomic) UIFont *font;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *indexBackgroundColor;
@property (retain, nonatomic) UIColor *indexColor;
@property (retain, nonatomic) UIColor *indexTrackingBackgroundColor;
@property (readonly, nonatomic) BOOL pastBottom; // ivar: _pastBottom
@property (readonly, nonatomic) BOOL pastTop; // ivar: _pastTop
@property (readonly, nonatomic) NSInteger selectedSection; // ivar: _selectedSection
@property (readonly, nonatomic) NSString *selectedSectionTitle;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *titles;


-(BOOL)_accessibilityHUDGestureManager:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)arg0 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)_updateSectionForTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(CGFloat)_minLineSpacingForIdiom:(NSInteger)arg0 ;
-(NSInteger)_idiom;
-(NSInteger)_indexForEntryAtPoint:(struct CGPoint )arg0 ;
-(NSUInteger)maximumNumberOfTitlesWithoutTruncationForHeight:(CGFloat)arg0 ;
-(id)_accessibilityHUDGestureManager:(id)arg0 HUDItemForPoint:(struct CGPoint )arg1 ;
-(id)_displayTitles;
-(id)_dotImage;
-(id)_externalDotImage;
-(id)_fontForIdiom:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_effectiveBounds;
-(struct CGRect )_visibleBoundsForRect:(struct CGRect )arg0 stride:(*CGFloat)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_accessibilityHUDGestureManager:(id)arg0 gestureLiftedAtPoint:(struct CGPoint )arg1 ;
-(void)_cacheAndMeasureTitles;
-(void)_largeContentViewerEnabledStatusDidChange:(id)arg0 ;
-(void)_setIdiom:(NSInteger)arg0 ;
-(void)_setupAXHUDGestureIfNecessary;
-(void)_willChangeToIdiom:(NSInteger)arg0 onScreen:(id)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)didMoveToWindow;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif