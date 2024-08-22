// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASEVOXELLEVELVIEW_H
#define PHASEVOXELLEVELVIEW_H


#import <Foundation/Foundation.h>

#import "PHASEEngine.h"

@interface PHASEVoxelLevelView : NSObject {
    ? _dimensions;
    ? _offset;
    ? _voxelSize;
}


@property ? dimensions;
@property (weak, nonatomic) PHASEEngine *engine; // ivar: _engine
@property (nonatomic) Handle64 geoShapeHandle; // ivar: _geoShapeHandle
@property (nonatomic) NSInteger levelIndex; // ivar: _levelIndex
@property ? offset;
@property (nonatomic) NSInteger subtreeIndex; // ivar: _subtreeIndex
@property ? voxelSize;


-(id)initWithEngine:(id)arg0 shapeHandle:(struct Handle64 )arg1 voxelTreeInfo:(*void)arg2 subtreeIndex:(NSInteger)arg3 levelIndex:(NSInteger)arg4 ;
-(void)getVoxelsWithCallback:(id)arg0 ;


@end


#endif