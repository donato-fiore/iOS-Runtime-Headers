// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STABILIZATIONSUCCESSCLASSIFIER_H
#define STABILIZATIONSUCCESSCLASSIFIER_H


#import <Foundation/Foundation.h>


@interface StabilizationSuccessClassifier : NSObject

@property int classifierMode; // ivar: classifierMode
@property (readonly) float lastClassifierScore; // ivar: lastClassifierScore
@property NSUInteger subsegmentLength; // ivar: subsegmentLength
@property NSUInteger subsegmentStep; // ivar: subsegmentStep


-(BOOL)testForHomographies:(*void)arg0 movieSize:(struct Int32Size )arg1 firstIndex:(int)arg2 lastIndex:(int)arg3 scoreThreshold:(float)arg4 errorOut:(*id)arg5 verbose:(BOOL)arg6 ;
-(float)calcLogisticForStats:(id)arg0 paramsForStats:(id)arg1 error:(*id)arg2 ;
-(id)applyClassifierToOverlappedSegments:(*void)arg0 withCoefficientsDict:(id)arg1 movieSize:(struct Int32Size )arg2 firstIndex:(int)arg3 lastIndex:(int)arg4 stride:(int)arg5 length:(int)arg6 result:(*float)arg7 verbose:(BOOL)arg8 minThreshold:(float)arg9 ;
-(id)calcStatsDictForArray:(id)arg0 withKey:(id)arg1 firstIndex:(int)arg2 lastIndex:(int)arg3 usingTempStorage:(*void)arg4 outErr:(*id)arg5 ;
-(id)classifySequentialAnalysisSuccess:(*void)arg0 movieSize:(struct Int32Size )arg1 precalcedFeatures:(id)arg2 result:(*float)arg3 ;
-(id)getDefaultParamDict;
-(id)getSequentialAnalysisCoeffsDict;
-(id)getSequentialParamDict;
-(id)getTripodCorrectionParamDict;
-(id)init;
-(id)statsDictFromFrameArray:(id)arg0 firstIndex:(int)arg1 lastIndex:(int)arg2 errorOut:(*id)arg3 ;
-(void)AddStats:(struct StabStatsRecord *)arg0 toDict:(id)arg1 withBaseName:(id)arg2 ;


@end


#endif