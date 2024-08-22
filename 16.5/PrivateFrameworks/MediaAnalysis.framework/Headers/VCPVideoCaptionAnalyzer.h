// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPVIDEOCAPTIONANALYZER_H
#define VCPVIDEOCAPTIONANALYZER_H

@class NSString, NSMutableArray, NSURL, MAAsset;
@protocol OS_dispatch_group;


#import "VCPVideoAnalyzer.h"
#import "VCPVideoCaptionEncoder.h"
#import "VCPTransforms.h"

@interface VCPVideoCaptionAnalyzer : VCPVideoAnalyzer {
    VCPVideoCaptionEncoder *_backbone;
    VCPTransforms *_transformImage;
    *float _inputData;
    int _inputWidth;
    int _inputHeight;
    int _inputNumFrames;
    int _skipNumFramesBothEnds;
    ? _timeLastProcess;
    ? _timeLastDetection;
    ? _timeStart;
    int _frameIndex;
    int _validFrames;
    BOOL _enoughFrames;
    NSString *_resConfig;
    NSMutableArray *_videoCaptionResult;
    NSMutableArray *_activeFrameIndices;
    ? _timeEnd;
    NSURL *_videoCaptionDecoder;
    NSURL *_videoCaptionEncoder;
    NSObject<OS_dispatch_group> *_downloadGroup;
    MAAsset *_videoCaptionEncoderAsset;
}




+(NSInteger)mode;
+(id)cloneCaptionModel:(id)arg0 to:(id)arg1 ;
+(id)imageCaptionModelTestURL;
+(id)videoCaptionDecoderTestURL;
+(id)videoCaptionEncoderTestURL;
-(id)initWithFrameRate:(float)arg0 timeRange:(struct ? )arg1 ;
-(id)results;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)configInputBasedOnDevice;
-(int)copyImage:(struct __CVBuffer *)arg0 withChannels:(int)arg1 ;
-(int)downloadVideoCaptionEncoderIfNeeded;
-(int)finishAnalysisPass:(struct ? )arg0 ;
-(int)inference:(struct ? )arg0 duration:(struct ? )arg1 ;
-(void)dealloc;


@end


#endif