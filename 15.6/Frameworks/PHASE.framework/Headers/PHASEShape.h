// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASESHAPE_H
#define PHASESHAPE_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PHASEEngine.h"

@interface PHASEShape : NSObject <NSCopying>

 {
    PHASEEngine *_engine;
    MdlMeshAsset _meshAsset;
    map<Class, Phase::Handle64, std::less<Class>, std::allocator<std::pair<const Class, Phase::Handle64>>> _optimizedGeoShapeHandles;
    NSUInteger _flags;
    BOOL _isReal;
    int _voxelDensity;
}


@property (readonly, copy, nonatomic) NSArray *elements; // ivar: _elements


+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithEngine:(id)arg0 mesh:(id)arg1 ;
-(id)initWithEngine:(id)arg0 mesh:(id)arg1 materials:(id)arg2 ;
-(id)initWithEngine:(id)arg0 mesh:(id)arg1 materials:(id)arg2 options:(id)arg3 ;
-(id)initWithEngine:(id)arg0 mesh:(id)arg1 options:(id)arg2 ;
-(id)initWithShape:(id)arg0 ;
-(struct Handle64 )geoShapeForObjectClass:(Class)arg0 ;
-(void)applyOptions:(id)arg0 ;
-(void)createOptimizedGeoShapeForObjectClass:(Class)arg0 ;
-(void)dealloc;
-(void)updateMaterialForElement:(id)arg0 ;
-(void)updateMaterialForShape:(struct Handle64 )arg0 fromElementIndex:(NSUInteger)arg1 ;


@end


#endif