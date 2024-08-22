// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETWRITERINPUTINTERPASSANALYSISHELPER_H
#define AVASSETWRITERINPUTINTERPASSANALYSISHELPER_H



#import "AVAssetWriterInputHelper.h"
#import "AVAssetWriterInputWritingHelper.h"
#import "AVAssetWriterInputPassDescription.h"

@interface AVAssetWriterInputInterPassAnalysisHelper : AVAssetWriterInputHelper {
    AVAssetWriterInputWritingHelper *_writingHelper;
    AVAssetWriterInputPassDescription *_initialPassDescription;
}




-(BOOL)appendPixelBuffer:(struct __CVBuffer *)arg0 withPresentationTime:(struct ? )arg1 ;
-(BOOL)canPerformMultiplePasses;
-(BOOL)isReadyForMoreMediaData;
-(BOOL)shouldRespondToInitialPassDescription;
-(NSInteger)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 error:(*id)arg1 ;
-(NSInteger)status;
-(id)currentPassDescription;
-(id)initWithConfigurationState:(id)arg0 ;
-(id)initWithWritingHelper:(id)arg0 ;
-(struct __CVPixelBufferPool *)pixelBufferPool;
-(void)dealloc;
-(void)markAsFinished;
-(void)markCurrentPassAsFinished;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg0 usingBlock:(id)arg1 ;
-(void)startPassAnalysis;
-(void)stopRequestingMediaData;


@end


#endif