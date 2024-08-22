// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFLOWLAYOUTINFO_H
#define _UIFLOWLAYOUTINFO_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "UICollectionViewFlowLayout.h"

@interface _UIFlowLayoutInfo : NSObject {
    BOOL _useFloatingHeaderFooter;
    CGRect _visibleBounds;
    CGSize _layoutSize;
    BOOL _isValid;
    CGSize _computedEstimatedSum;
    NSInteger _computedEstimatedCount;
}


@property (readonly, nonatomic) CGSize computedEstimatedSize;
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (nonatomic) CGFloat dimension; // ivar: _dimension
@property (nonatomic) BOOL estimatesSizes; // ivar: _estimatesSizes
@property (nonatomic) BOOL horizontal; // ivar: _horizontal
@property (weak, nonatomic) UICollectionViewFlowLayout *layout; // ivar: _layout
@property (nonatomic) BOOL leftToRight; // ivar: _leftToRight
@property (nonatomic) ? rowAlignmentOptions; // ivar: _rowAlignmentOptions
@property (readonly, nonatomic) NSMutableArray *sections; // ivar: _sections
@property (nonatomic) BOOL usesFloatingHeaderFooter; // ivar: _usesFloatingHeaderFooter


-(id)addSection;
-(id)copy;
-(id)init;
-(id)invalidatedIndexPaths;
-(id)setSize:(struct CGSize )arg0 forItemAtIndexPath:(id)arg1 ;
-(id)snapshot;
-(id)specifiedItemSizes;
-(struct CGRect )frameForItemAtIndexPath:(id)arg0 ;
-(void)didUpdateSizeForSection:(NSInteger)arg0 withDelta:(CGFloat)arg1 ;
-(void)invalidate:(BOOL)arg0 ;
-(void)setSizes:(id)arg0 forItemsAtIndexPaths:(id)arg1 ;
-(void)updateEstimatedSizeForSize:(struct CGSize )arg0 ;


@end


#endif