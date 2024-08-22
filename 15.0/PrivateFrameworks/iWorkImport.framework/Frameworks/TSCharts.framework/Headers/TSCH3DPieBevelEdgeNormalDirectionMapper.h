// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DPIEBEVELEDGENORMALDIRECTIONMAPPER_H
#define TSCH3DPIEBEVELEDGENORMALDIRECTIONMAPPER_H



#import "TSCH3DNormalDirectionMapper.h"

@interface TSCH3DPieBevelEdgeNormalDirectionMapper : TSCH3DNormalDirectionMapper {
    NSInteger _topMeshOffset;
    NSInteger _angleSteps;
    NSInteger _radiusSteps;
    NSInteger _angleLimit;
    NSInteger _radiusLimit;
}




-(id)initWithTopMeshOffset:(NSInteger)arg0 angleSteps:(NSInteger)arg1 radiusSteps:(NSInteger)arg2 angleLimit:(NSInteger)arg3 radiusLimit:(NSInteger)arg4 ;
-(void)mapFromVertexArray:(*void)arg0 normalArray:(*void)arg1 normalMatrix:(*void)arg2 numVertices:(NSInteger)arg3 destination:(*void)arg4 ;


@end


#endif