// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPVIDEOCNNTASK_H
#define VCPVIDEOCNNTASK_H


#import <Foundation/Foundation.h>


@interface VCPVideoCNNTask : NSObject



-(id)results;
-(int)finishAnalysisPass:(struct ? )arg0 ;
-(int)run:(id)arg0 ;
-(int)run:(id)arg0 withPersons:(id)arg1 andRegionCrop:(struct CGRect )arg2 atTime:(struct ? )arg3 andDuration:(struct ? )arg4 ;


@end


#endif