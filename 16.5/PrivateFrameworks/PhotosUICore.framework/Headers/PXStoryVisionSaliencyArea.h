// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYVISIONSALIENCYAREA_H
#define PXSTORYVISIONSALIENCYAREA_H



#import "PXStoryConcreteSaliencyArea.h"

@interface PXStoryVisionSaliencyArea : PXStoryConcreteSaliencyArea

@property (readonly, nonatomic) CGRect sourceRegionOfInterest; // ivar: _sourceRegionOfInterest
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithContentsRect:(struct CGRect )arg0 confidence:(float)arg1 ;
-(id)initWithContentsRect:(struct CGRect )arg0 confidence:(float)arg1 type:(NSInteger)arg2 sourceRegionOfInterest:(struct CGRect )arg3 ;


@end


#endif