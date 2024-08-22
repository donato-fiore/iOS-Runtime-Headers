// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXASPECTFITLAYOUTGENERATOR_H
#define PXASPECTFITLAYOUTGENERATOR_H



#import "PXLayoutGenerator.h"
#import "PXAspectFitLayoutMetrics.h"

@interface PXAspectFitLayoutGenerator : PXLayoutGenerator {
    *_PXLayoutGeometry _geometries;
    NSUInteger _geometriesCount;
    NSInteger _lastGeometryIndex;
    CGSize _contentSize;
    CGFloat _currentRowUnmodifiedHeight;
    CGFloat _currentRowFinalHeight;
}


@property (copy, nonatomic) PXAspectFitLayoutMetrics *metrics;


-(CGFloat)_rowHeightForItemsInRange:(struct _NSRange )arg0 ;
-(id)initWithMetrics:(id)arg0 ;
-(struct CGSize )estimatedSize;
-(struct CGSize )size;
-(struct _PXLayoutGeometry )_geometryForItemAtIndex:(NSUInteger)arg0 atPosition:(struct CGPoint )arg1 withHorizontalGap:(CGFloat)arg2 ;
-(struct _PXLayoutGeometry )_lastGeometry;
-(void)_computeGeometriesIfNeeded;
-(void)_fillRowFromIndex:(*NSInteger)arg0 withCount:(NSInteger)arg1 ;
-(void)_prepareGeometriesForCount:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)getGeometries:(struct _PXLayoutGeometry *)arg0 inRange:(struct _NSRange )arg1 withKind:(NSInteger)arg2 ;
-(void)invalidate;


@end


#endif