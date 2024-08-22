// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIAUTOLOOPANALYSISJOB_H
#define PIAUTOLOOPANALYSISJOB_H

@class NURenderJob, NSDictionary, AVAsset;



@interface PIAutoLoopAnalysisJob : NURenderJob

@property (retain, nonatomic) NSDictionary *recipe; // ivar: _recipe
@property (retain, nonatomic) AVAsset *videoSource; // ivar: _videoSource


-(BOOL)prepare:(*id)arg0 ;
-(BOOL)render:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputVideo;
-(id)analysisRequest;
-(id)cacheKey;
-(id)result;
-(id)scalePolicy;


@end


#endif