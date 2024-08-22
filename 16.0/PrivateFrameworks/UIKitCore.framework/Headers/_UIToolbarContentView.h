// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITOOLBARCONTENTVIEW_H
#define _UITOOLBARCONTENTVIEW_H

@class UIBarContentView, NSLayoutConstraint, NSMapTable;


#import "_UIButtonBar.h"
#import "_UIPointerInteractionAssistant.h"
#import "_UIBarButtonItemData.h"

@interface _UIToolbarContentView : UIBarContentView {
    _UIButtonBar *_buttonBar;
    _UIPointerInteractionAssistant *_assistant;
    NSLayoutConstraint *_buttonBarLeadingConstraint;
    NSLayoutConstraint *_buttonBarTrailingConstraint;
    NSMapTable *_absorptionTable;
    CGFloat _standardEdgeSpacing;
}


@property (nonatomic) BOOL compactMetrics; // ivar: _compactMetrics
@property (copy, nonatomic) _UIBarButtonItemData *doneItemAppearance; // ivar: _doneItemAppearance
@property (nonatomic) NSInteger itemDistribution; // ivar: _itemDistribution
@property (nonatomic) NSDirectionalEdgeInsets padding; // ivar: _padding
@property (copy, nonatomic) _UIBarButtonItemData *plainItemAppearance; // ivar: _plainItemAppearance


-(CGFloat)absorptionForItem:(id)arg0 ;
-(CGFloat)defaultEdgeSpacing;
-(CGFloat)defaultTextPadding;
-(NSInteger)barType;
-(NSUInteger)edgesPaddingBarButtonItem:(id)arg0 ;
-(id)_computeEdgeAbsorptionForItems:(id)arg0 ;
-(struct NSDirectionalEdgeInsets )_directionalSafeArea;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset )arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_appearanceChanged;
-(void)_ensureButtonBar;
-(void)_setBackButtonBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_setBackButtonTitlePositionAdjustment:(struct UIOffset )arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_setButtonBarLeadingInset:(CGFloat)arg0 trailingInset:(CGFloat)arg1 ;
-(void)_updateThreeUpFlagsForItems:(id)arg0 ;
-(void)layoutMarginsDidChange;
-(void)reloadWithItems:(id)arg0 ;
-(void)tintColorDidChange;
-(void)updateConstraints;
-(void)updateContent;
-(void)updateWithItems:(id)arg0 fromOldItems:(id)arg1 animate:(BOOL)arg2 ;


@end


#endif