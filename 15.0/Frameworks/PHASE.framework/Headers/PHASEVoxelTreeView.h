// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASEVOXELTREEVIEW_H
#define PHASEVOXELTREEVIEW_H

@class NSArray;


#import "PHASEGeometryView.h"

@interface PHASEVoxelTreeView : PHASEGeometryView

@property (readonly, copy, nonatomic) NSArray *subtrees; // ivar: _subtrees


-(id)getLevelViewWithIndex:(NSUInteger)arg0 inLevelIndex:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithEngine:(id)arg0 shapeHandle:(struct Handle64 )arg1 voxelTreeInfo:(*void)arg2 ;
-(id)levelViewWithIndex:(NSUInteger)arg0 inLevelIndex:(NSUInteger)arg1 ;


@end


#endif