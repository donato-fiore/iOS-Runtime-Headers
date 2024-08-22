// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGRIDLAYOUTGENERATOR_H
#define PXGRIDLAYOUTGENERATOR_H

@class NSIndexSet;


#import "PXLayoutGenerator.h"
#import "PXGridLayoutMetrics.h"

@interface PXGridLayoutGenerator : PXLayoutGenerator {
    NSInteger _numberOfItemsWide;
    NSIndexSet *_geometrySet;
}


@property (copy, nonatomic) PXGridLayoutMetrics *metrics;


-(NSUInteger)numberOfGeometriesWithKind:(NSInteger)arg0 ;
-(id)geometryKinds;
-(id)initWithMetrics:(id)arg0 ;
-(struct CGSize )estimatedSize;
-(struct CGSize )size;
-(void)_getAdditionalGeometries:(struct _PXLayoutGeometry *)arg0 inRange:(struct _NSRange )arg1 ;
-(void)_getContentGeometries:(struct _PXLayoutGeometry *)arg0 inRange:(struct _NSRange )arg1 ;
-(void)_getHeaderGeometries:(struct _PXLayoutGeometry *)arg0 inRange:(struct _NSRange )arg1 ;
-(void)getGeometries:(struct _PXLayoutGeometry *)arg0 inRange:(struct _NSRange )arg1 withKind:(NSInteger)arg2 ;
-(void)getGeometry:(struct _PXLayoutGeometry *)arg0 forItemAtIndex:(NSUInteger)arg1 ;


@end


#endif