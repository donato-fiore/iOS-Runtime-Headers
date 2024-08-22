// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PIVIDEOSTABILIZERENDERJOB_H
#define PIVIDEOSTABILIZERENDERJOB_H

@class NURenderJob, NSArray, NSDictionary;



@interface PIVideoStabilizeRenderJob : NURenderJob

@property (nonatomic) NSUInteger allowedAnalysisTypes; // ivar: _allowedAnalysisTypes
@property (nonatomic) CGFloat allowedCropFraction; // ivar: _allowedCropFraction
@property (readonly, nonatomic) NSUInteger analysisType; // ivar: _analysisType
@property (readonly, copy, nonatomic) NSArray *keyframes; // ivar: _keyframes
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (readonly, nonatomic) NSDictionary *rawHomographies; // ivar: _rawHomographies
@property (readonly, nonatomic) ? stabCropRect; // ivar: _stabCropRect


-(BOOL)prepare:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputVideo;
-(BOOL)wantsRenderStage;
-(id)result;
-(id)scalePolicy;


@end


#endif