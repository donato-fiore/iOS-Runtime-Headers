// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXEDITORIALLAYOUTGENERATOR_H
#define PXEDITORIALLAYOUTGENERATOR_H

@class NSIndexSet;


#import "PXLayoutGenerator.h"
#import "PXMagazineLayoutTileMaker.h"
#import "PXEditorialLayoutMetrics.h"

@interface PXEditorialLayoutGenerator : PXLayoutGenerator {
    BOOL _isPrepared;
    PXMagazineLayoutTileMaker *_tileMaker;
    CGSize _actualSize;
    *_PXLayoutGeometry _geometries;
    *CGRect _rects;
    NSUInteger _geometriesCount;
    NSIndexSet *_geometrySet;
}


@property (copy, nonatomic) PXEditorialLayoutMetrics *metrics;


-(NSUInteger)numberOfGeometriesWithKind:(NSInteger)arg0 ;
-(id)geometryKinds;
-(id)initWithMetrics:(id)arg0 ;
-(struct CGSize )estimatedSize;
-(struct CGSize )size;
-(struct _PXLayoutGeometry )_geometryFromFrame:(struct CGRect )arg0 index:(NSUInteger)arg1 ;
-(void)_getContentGeometries:(struct _PXLayoutGeometry *)arg0 inRange:(struct _NSRange )arg1 ;
-(void)_getHeaderGeometries:(struct _PXLayoutGeometry *)arg0 inRange:(struct _NSRange )arg1 ;
-(void)_prepareBuffersForCount:(NSUInteger)arg0 ;
-(void)_prepareIfNeeded;
-(void)dealloc;
-(void)getGeometries:(struct _PXLayoutGeometry *)arg0 inRange:(struct _NSRange )arg1 withKind:(NSInteger)arg2 ;
-(void)invalidate;


@end


#endif