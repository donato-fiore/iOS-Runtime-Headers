// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPVIDEOCNNCAMERAMOTION_H
#define VCPVIDEOCNNCAMERAMOTION_H

@class NSMutableArray;


#import "VCPVideoCNNTask.h"
#import "VCPCNNModelEspresso.h"

@interface VCPVideoCNNCameraMotion : VCPVideoCNNTask {
    NSMutableArray *_results;
    VCPCNNModelEspresso *_motionTypeModel;
    VCPCNNModelEspresso *_motionScoreModel;
}




-(id)init;
-(id)results;
-(int)finishAnalysisPass:(struct ? )arg0 ;
-(int)run:(id)arg0 withPersons:(id)arg1 andRegionCrop:(struct CGRect )arg2 atTime:(struct ? )arg3 andDuration:(struct ? )arg4 ;


@end


#endif