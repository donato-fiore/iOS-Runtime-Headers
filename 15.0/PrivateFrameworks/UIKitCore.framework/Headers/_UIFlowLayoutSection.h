// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFLOWLAYOUTSECTION_H
#define _UIFLOWLAYOUTSECTION_H

@class NSMutableSet, NSArray, NSMutableArray;

#import <Foundation/Foundation.h>

#import "_UIFlowLayoutInfo.h"

@interface _UIFlowLayoutSection : NSObject {
    BOOL _isValid;
    CGRect _validRect;
    CGRect _rectToKeepValid;
    NSMutableSet *_invalidatedIndexPaths;
}


@property (readonly, nonatomic) CGFloat actualGap; // ivar: _actualGap
@property (readonly, nonatomic) CGFloat beginMargin; // ivar: _beginMargin
@property (readonly, nonatomic) CGRect effectiveFooterFrameWithSectionMarginsApplied;
@property (readonly, nonatomic) CGRect effectiveHeaderFrameWithSectionMarginsApplied;
@property (readonly, nonatomic) CGFloat endMargin; // ivar: _endMargin
@property (nonatomic) BOOL fixedItemSize; // ivar: _fixedItemSize
@property (readonly, nonatomic) CGFloat footerDimension; // ivar: _footerDimension
@property (nonatomic) CGRect footerFrame; // ivar: _footerFrame
@property (nonatomic) CGRect frame; // ivar: _frame
@property (readonly, nonatomic) CGFloat headerDimension; // ivar: _headerDimension
@property (nonatomic) CGRect headerFrame; // ivar: _headerFrame
@property (nonatomic) CGFloat horizontalInterstice; // ivar: _horizontalInterstice
@property (readonly, nonatomic) NSInteger indexOfIncompleteRow; // ivar: _indexOfIncompleteRow
@property (readonly, nonatomic) NSArray *invalidatedIndexPaths;
@property (nonatomic) CGSize itemSize; // ivar: _itemSize
@property (readonly, nonatomic) NSMutableArray *items; // ivar: _items
@property (readonly, nonatomic) NSInteger itemsByRowCount; // ivar: _itemsByRowCount
@property (nonatomic) NSInteger itemsCount; // ivar: _itemsCount
@property (readonly, nonatomic) CGFloat lastRowActualGap; // ivar: _lastRowActualGap
@property (readonly, nonatomic) CGFloat lastRowBeginMargin; // ivar: _lastRowBeginMargin
@property (readonly, nonatomic) CGFloat lastRowEndMargin; // ivar: _lastRowEndMargin
@property (readonly, nonatomic) BOOL lastRowIncomplete; // ivar: _lastRowIncomplete
@property (weak, nonatomic) _UIFlowLayoutInfo *layoutInfo; // ivar: _layoutInfo
@property (readonly, nonatomic) CGFloat otherMargin; // ivar: _otherMargin
@property (nonatomic) ? rowAlignmentOptions; // ivar: _rowAlignmentOptions
@property (readonly, nonatomic) NSMutableArray *rows; // ivar: _rows
@property (nonatomic) UIEdgeInsets sectionMargins; // ivar: _sectionMargins
@property (readonly, nonatomic) _NSRange validItemRange; // ivar: _validItemRange
@property (nonatomic) CGFloat verticalInterstice; // ivar: _verticalInterstice


-(NSInteger)estimatedIndexOfItemAtPoint:(struct CGPoint )arg0 ;
-(id)addItem;
-(id)addRowAtEnd:(BOOL)arg0 ;
-(id)copyFromLayoutInfo:(id)arg0 ;
-(id)init;
-(id)rowsInRect:(struct CGRect )arg0 ;
-(id)snapshot;
-(struct CGRect )frameForItemAtIndexPath:(id)arg0 ;
-(void)addInvalidatedIndexPath:(id)arg0 ;
-(void)computeLayout;
-(void)computeLayoutInRect:(struct CGRect )arg0 forSection:(NSInteger)arg1 invalidating:(BOOL)arg2 invalidationContext:(id)arg3 ;
-(void)computeLayoutValidatingForwardForIndexPath:(id)arg0 ;
-(void)invalidate;
-(void)logInvalidSizes;
-(void)logInvalidSizesForHorizontalDirection:(BOOL)arg0 warnAboutDelegateValues:(BOOL)arg1 ;
-(void)setEstimatedSize:(struct CGSize )arg0 forSection:(NSInteger)arg1 ;
-(void)setSize:(struct CGSize )arg0 forItemAtIndexPath:(id)arg1 invalidationContext:(id)arg2 ;
-(void)sizeChangedForItem:(id)arg0 atIndexPath:(id)arg1 inRow:(id)arg2 ;
-(void)updateEstimatedSizeForSection:(NSInteger)arg0 ;
-(void)updateSize:(struct CGSize )arg0 forItemAtIndexPath:(id)arg1 ;


@end


#endif