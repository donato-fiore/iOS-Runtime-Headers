// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPPHOTOANALYZER_H
#define VCPPHOTOANALYZER_H

@class NSMutableDictionary, NSDictionary, PHAsset;

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
}


@property (nonatomic) BOOL allowStreaming; // ivar: _allowStreaming
@property (readonly) NSInteger status; // ivar: _status


+(BOOL)canAnalyzeUndegraded:(id)arg0 withResources:(id)arg1 ;
+(id)analyzerWithVCPAsset:(id)arg0 forAnalysisTypes:(NSUInteger)arg1 ;
+(id)resourceForAsset:(id)arg0 withResources:(id)arg1 ;
-(?)downscaleImage:(?)arg0 scaledImagemajorDimension;
-(id)analyzeAsset:(id)arg0 ;
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