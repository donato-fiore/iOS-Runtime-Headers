// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UINAVIGATIONBARLARGETITLEVIEWLAYOUT_H
#define _UINAVIGATIONBARLARGETITLEVIEWLAYOUT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "_UINavigationBarLargeTitleView.h"
#import "UILabel.h"

@interface _UINavigationBarLargeTitleViewLayout : NSObject {
    NSMutableDictionary *_titleHeightCache;
    NSMutableDictionary *_restingHeightCache;
    CGFloat _cachedRestingHeight;
}


@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (nonatomic) NSUInteger accessoryViewHorizontalAlignment; // ivar: _accessoryViewHorizontalAlignment
@property (nonatomic) BOOL alignAccessoryViewToTitleBaseline; // ivar: _alignAccessoryViewToTitleBaseline
@property (readonly, nonatomic) _UINavigationBarLargeTitleView *contentView; // ivar: _contentView
@property (nonatomic) NSDirectionalEdgeInsets layoutMargins; // ivar: _layoutMargins
@property (nonatomic) BOOL providesExtraSpaceForExcessiveLineHeights; // ivar: _providesExtraSpaceForExcessiveLineHeights
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic) CGFloat titleRestingHeight; // ivar: _titleRestingHeight
@property (nonatomic) NSInteger titleType; // ivar: _titleType
@property (nonatomic) NSUInteger twoLineMode; // ivar: _twoLineMode


-(CGFloat)_textHeightForSize:(struct CGSize )arg0 titleType:(NSInteger)arg1 ;
-(id)description;
-(id)initWithContentView:(id)arg0 ;
-(struct CGRect )_contentLayoutBounds;
-(struct CGRect )_contentLayoutBoundsUsingRestingTitleHeight:(BOOL)arg0 ;
-(struct CGSize )_cachedTitleHeightSizeAndUpdateRestingSizeForWidth:(CGFloat)arg0 ;
-(struct CGSize )_cachedTitleHeightSizeAndUpdateRestingSizeForWidthSupportingMultiLineShrinkToFit:(CGFloat)arg0 ;
-(struct CGSize )sizeFittingSize:(struct CGSize )arg0 titleType:(NSInteger)arg1 ;
-(void)_enforceLayoutOrdering;
-(void)_invalidateTitleHeightCache;
-(void)cleanupAfterLayoutTransitionCompleted;
-(void)layoutViews;
-(void)layoutViewsWithOffset:(struct UIOffset )arg0 useRestingTitleHeight:(BOOL)arg1 ;
-(void)layoutViewsWithOffsetSupportingMultiLineShrinkToFit:(struct UIOffset )arg0 useRestingTitleHeight:(BOOL)arg1 ;
-(void)removeContent;
-(void)setContentAlpha:(CGFloat)arg0 ;
-(void)setContentHidden:(BOOL)arg0 ;
-(void)updateRestingTitleHeight;


@end


#endif