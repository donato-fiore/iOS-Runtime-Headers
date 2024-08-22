// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMEMORIESFEEDENTRYLAYOUTGENERATOR_H
#define PXMEMORIESFEEDENTRYLAYOUTGENERATOR_H

@class NSIndexSet, NSDictionary;


#import "PXMemoriesFeedLayoutGenerator.h"
#import "PXMemoriesSpec.h"

@interface PXMemoriesFeedEntryLayoutGenerator : PXMemoriesFeedLayoutGenerator {
    CGSize _size;
    PXMemoriesSpec *_spec;
    NSIndexSet *_geometryKinds;
    CGRect _sectionHeaderRect;
    NSDictionary *_rectsByIndexByKind;
    BOOL _isPrepared;
}


@property (nonatomic) NSInteger layoutAxis; // ivar: _layoutAxis


-(NSUInteger)numberOfGeometriesWithKind:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)geometryKinds;
-(id)initWithMetrics:(id)arg0 ;
-(struct CGSize )estimatedSize;
-(struct CGSize )size;
-(void)_prepareLayoutIfNeeded;
-(void)getGeometries:(struct _PXLayoutGeometry *)arg0 inRange:(struct _NSRange )arg1 withKind:(NSInteger)arg2 ;
-(void)invalidate;


@end


#endif