// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGSTACKEDSUBLAYOUTCOMPOSITION_H
#define PXGSTACKEDSUBLAYOUTCOMPOSITION_H



#import "PXGSublayoutComposition.h"

@interface PXGStackedSublayoutComposition : PXGSublayoutComposition

@property (nonatomic) NSInteger axis; // ivar: _axis
@property (nonatomic) CGFloat interlayoutSpacing; // ivar: _interlayoutSpacing
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding


-(id)init;
-(struct CGRect )contentBounds;
-(void)referenceSizeDidChange;
-(void)updateEstimatedSublayoutGeometries;
-(void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(NSInteger)arg0 usingSublayoutUpdateBlock:(id)arg1 ;


@end


#endif