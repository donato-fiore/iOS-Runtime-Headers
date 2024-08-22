// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDLVOLUMEGRID_H
#define MDLVOLUMEGRID_H


#import <Foundation/Foundation.h>


@interface MDLVolumeGrid : NSObject {
    unique_ptr<ModelIO::SCNOctree, std::default_delete<ModelIO::SCNOctree>> _octree;
}




-(*NSUInteger)trianglesIntersectingRayWithOrigin:(*NSUInteger)arg0 directioncount;
-(id)initWithAsset:(id)arg0 divisions:(int)arg1 ;
-(id)initWithAsset:(id)arg0 divisions:(int)arg1 interiorWidth:(float)arg2 exteriorWidth:(float)arg3 patchRadius:(float)arg4 ;
-(id)initWithObject:(id)arg0 divisions:(int)arg1 ;
-(id)meshWithStyle:(NSUInteger)arg0 ;


@end


#endif