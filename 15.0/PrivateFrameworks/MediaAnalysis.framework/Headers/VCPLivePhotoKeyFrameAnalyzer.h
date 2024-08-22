// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPLIVEPHOTOKEYFRAMEANALYZER_H
#define VCPLIVEPHOTOKEYFRAMEANALYZER_H


#import <Foundation/Foundation.h>


@interface VCPLivePhotoKeyFrameAnalyzer : NSObject {
    BOOL _photoSharpnessReliable;
    float _photoSharpness;
    BOOL _petsDominant;
    BOOL _ignoreFace;
    char * _faceHeatMap;
    int _width;
    int _height;
    int _numOfFrames;
}




-(float)computeOverallFaceQualityScore:(id)arg0 ;
-(float)computeScoreForPhoto:(float)arg0 withRefKeyFrame:(id)arg1 ;
-(float)getFaceHeat:(struct CGRect )arg0 ;
-(id)initWithWidth:(int)arg0 height:(int)arg1 ;
-(int)analyzeLivePhotoKeyFrame:(id)arg0 irisPhotoOffsetSec:(float)arg1 originalIrisPhotoOffsetSec:(float)arg2 photoTextureScore:(float)arg3 hadFlash:(BOOL)arg4 cancel:(id)arg5 ;
-(int)reportLivePhotoKeyFrameAnalysisResults:(BOOL)arg0 selectedKeyFrame:(id)arg1 originalStillKeyFrame:(id)arg2 stillScore:(float)arg3 stillFQScore:(float)arg4 stillTimestamp:(float)arg5 useSemanticOnly:(BOOL)arg6 isKeyFrameSuggested:(BOOL)arg7 ;
-(struct ? )selectKeyFrameRangeWithMotion:(id)arg0 stillTimestamp:(float)arg1 isMetaMotion:(BOOL)arg2 ;
-(void)createFaceHeatMap:(id)arg0 imageFaces:(id)arg1 ;
-(void)dealloc;
-(void)fetchAndComputeScoreForKeyFrame:(id)arg0 withResult:(id)arg1 ;
-(void)updateFaceHeatMap:(id)arg0 ;


@end


#endif