// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASESUBTREEVIEW_H
#define PHASESUBTREEVIEW_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PHASEEngine.h"

@interface PHASESubtreeView : NSObject

@property (weak, nonatomic) PHASEEngine *engine; // ivar: _engine
@property (nonatomic) Handle64 geoShapeHandle; // ivar: _geoShapeHandle
@property (readonly, nonatomic) NSArray *levels; // ivar: _levels
@property (nonatomic) NSInteger subtreeIndex; // ivar: _subtreeIndex


-(id)init;
-(id)initWithEngine:(id)arg0 shapeHandle:(struct Handle64 )arg1 voxelTreeInfo:(*void)arg2 subtreeIndex:(NSInteger)arg3 ;


@end


#endif