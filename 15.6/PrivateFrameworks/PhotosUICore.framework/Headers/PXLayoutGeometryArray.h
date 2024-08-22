// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXLAYOUTGEOMETRYARRAY_H
#define PXLAYOUTGEOMETRYARRAY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXLayoutGeometryArray : NSObject <NSCopying>

 {
    *_PXLayoutGeometry _geometries;
    NSInteger _count;
}


@property (readonly, nonatomic) NSUInteger count;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithGeometries:(struct _PXLayoutGeometry *)arg0 count:(NSUInteger)arg1 ;
-(struct _PXLayoutGeometry )geometryAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif