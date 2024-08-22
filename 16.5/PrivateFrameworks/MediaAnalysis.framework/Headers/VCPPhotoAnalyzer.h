// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPPHOTOANALYZER_H
#define VCPPHOTOANALYZER_H

@class NSMutableDictionary, NSDictionary, PHAsset, NSURL;

#import <Foundation/Foundation.h>

#import "VCPAsset.h"

@interface VCPPhotoAnalyzer : NSObject {
    NSUInteger _requestedAnalyses;
    NSMutableDictionary *_analysis;
    NSUInteger _irisAnalyses;
    NSDictionary *_phFaceResults;
    NSUInteger _phFaceFlags;
    VCPAsset *_asset;
    float _imageBlurTextureScore;
    float _preAnalysisSharpnessScore;
    BOOL _faceDominated;
    BOOL _requirePHFaceAnalysis;
    PHAsset *_phAsset;
    NSURL *_imageCaptionModel;
}


@property (nonatomic) BOOL allowStreaming; // ivar: _allowStreaming
@property (readonly) NSInteger status; // ivar: _status


+(BOOL)canAnalyzeUndegraded:(id)arg0 withResources:(id)arg1 ;
+(BOOL)isLivePhotoKeyFrameEnabled;
+(id)analyzerWithVCPAsset:(id)arg0 forAnalysisTypes:(NSUInteger)arg1 ;
+(id)resourceForAsset:(id)arg0 withResources:(id)arg1 ;
-(?)downscaleImage:(?)arg0 scaledImagemajorDimension;
// -(id)analyzeAsset:(id)arg0 withOptions:(unk)arg1  ;
-(id)existingAnalysisForMovieAnalyzer;
-(id)initWithPHAsset:(id)arg0 withExistingAnalysis:(id)arg1 forAnalysisTypes:(NSUInteger)arg2 ;
-(id)initWithVCPAsset:(id)arg0 withExistingAnalysis:(id)arg1 forAnalysisTypes:(NSUInteger)arg2 ;
-(int)analyzeImage:(*NSUInteger)arg0 performedAnalyses:(*NSUInteger)arg1 cancel:(id)arg2 ;
-(int)checkFaceDominant;
-(void)_reportPetsAnalysisWithResults:(id)arg0 ;
-(void)processExistingAnalyses:(id)arg0 ;
-(void)updateDegradedFlagForMajorDimension:(NSUInteger)arg0 ;


@end


#endif