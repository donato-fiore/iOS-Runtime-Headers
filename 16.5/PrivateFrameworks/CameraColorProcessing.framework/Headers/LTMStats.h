// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LTMSTATS_H
#define LTMSTATS_H

@class FigMetalContext;
@protocol LTMAlgorithmBase;

#import <Foundation/Foundation.h>

#import "LTMStatsCompute.h"

@interface LTMStats : NSObject <LTMAlgorithmBase>

 {
    FigMetalContext *_metalContext;
    LTMStatsCompute *_computeLTMStats;
}




-(id)initWithMetalContext:(id)arg0 ;
-(int)allocateResources;
-(int)calculateHITHStatistics:(id)arg0 ltmGeometry:(id)arg1 inputDriverMetadata:(struct sRefDriverInputs *)arg2 outputProcHITHStat:(struct sCLRProcHITHStat *)arg3 optimized:(BOOL)arg4 calcGlobalHistOnROI:(BOOL)arg5 ;
-(int)prewarmShaders;
-(int)purgeResources;
-(void)fillProcHITHStat:(struct sCLRProcHITHStat *)arg0 with:(struct ? )arg1 ;


@end


#endif