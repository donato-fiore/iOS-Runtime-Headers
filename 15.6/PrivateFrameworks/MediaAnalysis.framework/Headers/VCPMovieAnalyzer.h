// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPMOVIEANALYZER_H
#define VCPMOVIEANALYZER_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>

#import "VCPAsset.h"

@interface VCPMovieAnalyzer : NSObject {
    NSUInteger _requestedAnalyses;
    NSMutableDictionary *_analysis;
    NSMutableDictionary *_privateResults;
    VCPAsset *_asset;
    BOOL _supportConditionalAnalysis;
    NSDictionary *_existingAnalysis;
    BOOL _prepareLivePhotoScenes;
}


@property (nonatomic) BOOL allowStreaming; // ivar: _allowStreaming
@property (nonatomic) BOOL faceDominated; // ivar: _faceDominated
@property (nonatomic) float maxHighlightDuration; // ivar: _maxHighlightDuration
@property (readonly) NSInteger status; // ivar: _status


+(BOOL)canAnalyzeUndegraded:(id)arg0 withResources:(id)arg1 ;
+(float)getMaximumHighlightInSec;
+(id)analyzerWithVCPAsset:(id)arg0 withExistingAnalysis:(id)arg1 forAnalysisTypes:(NSUInteger)arg2 ;
+(id)getHumanActionClassiferType;
// -(id)analyzeAsset:(id)arg0 streamed:(unk)arg1  ;
-(id)createDecoderForTrack:(id)arg0 timerange:(struct ? *)arg1 forAnalysisTypes:(NSUInteger)arg2 ;
-(id)createVideoAnalyzer:(id)arg0 withFrameStats:(id)arg1 ;
-(id)initWithPHAsset:(id)arg0 withExistingAnalysis:(id)arg1 forAnalysisTypes:(NSUInteger)arg2 ;
-(id)initWithPHAsset:(id)arg0 withPausedAnalysis:(id)arg1 forAnalysisTypes:(NSUInteger)arg2 ;
-(id)initWithVCPAsset:(id)arg0 withExistingAnalysis:(id)arg1 forAnalysisTypes:(NSUInteger)arg2 ;
-(id)privateResults;
-(id)processExistingAnalysisForTimeRange:(struct ? )arg0 analysisTypes:(*NSUInteger)arg1 ;
-(int)analyzeVideoSegment:(id)arg0 timerange:(struct ? *)arg1 forAnalysisTypes:(NSUInteger)arg2 cancel:(id)arg3 ;
-(int)analyzeVideoTrack:(id)arg0 start:(struct ? )arg1 forAnalysisTypes:(NSUInteger)arg2 cancel:(id)arg3 ;
-(int)generateKeyFrameResource:(id)arg0 ;
-(int)performMetadataAnalysisOnAsset:(id)arg0 withCancelBlock:(id)arg1 ;
-(int)postProcessAutoPlayable:(id)arg0 ;
-(void)loadPropertiesForAsset:(id)arg0 ;


@end


#endif