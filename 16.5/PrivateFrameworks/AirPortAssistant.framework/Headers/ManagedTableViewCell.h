// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDTABLEVIEWCELL_H
#define MANAGEDTABLEVIEWCELL_H

@class UITableViewCell, NSMutableDictionary, NSIndexPath;


#import "TableViewManager.h"

@interface ManagedTableViewCell : UITableViewCell {
    CGFloat _cellXEdgeInset;
    CGRect _modifiedContentViewFrame;
}


@property (retain, nonatomic) NSMutableDictionary *cellDict; // ivar: _cellDict
@property (readonly, nonatomic) CGFloat computedRightmostEditTextInset; // ivar: _computedRightmostEditTextInset
@property (retain, nonatomic) NSIndexPath *currentIndexPath; // ivar: _currentIndexPath
@property (nonatomic) CGFloat forcedRightmostEditTextInset; // ivar: _forcedRightmostEditTextInset
@property (readonly, nonatomic) CGFloat neededContentHeight; // ivar: _neededContentHeight
@property (nonatomic) TableViewManager *parentTableManager; // ivar: _parentTableManager


-(CGFloat)calculateFrameSizeForView:(id)arg0 forItem:(id)arg1 atItemIndex:(NSUInteger)arg2 withRemainingContentWidth:(CGFloat)arg3 ;
-(CGFloat)edgeInsetValue:(id)arg0 ;
-(CGFloat)horizontalSpacingForView:(id)arg0 withItem:(id)arg1 ;
-(CGFloat)leftInsetForView:(id)arg0 withItem:(id)arg1 ;
-(CGFloat)rightInsetForView:(id)arg0 withItem:(id)arg1 ;
-(CGFloat)usableContentWidth;
-(CGFloat)usableContentWidthForItem:(id)arg0 withVerticalNeighborView:(id)arg1 ;
-(CGFloat)verticalInset;
-(CGFloat)verticalSpacingForView:(id)arg0 withItem:(id)arg1 ;
-(id)accessibilityValue;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)calculatePositionForView:(id)arg0 forItem:(id)arg1 atItemIndex:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)repositionView:(id)arg0 ifOverlapsPreviousView:(id)arg1 ;


@end


#endif