// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTKEYWORDANALYZERNDEAPI_H
#define VTKEYWORDANALYZERNDEAPI_H

@class NSMutableData, NSString;
@protocol VTKeywordAnalyzer;

#import <Foundation/Foundation.h>

#import "VTKeywordAnalyzerResults.h"

@interface VTKeywordAnalyzerNDEAPI : NSObject <VTKeywordAnalyzer>

 {
    **void _ndeObject;
    NSMutableData *_currentBlob;
    VTKeywordAnalyzerResults *_lastResult;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_checkForTriggerWithBytes:(*short)arg0 withNumberOfSamples:(NSInteger)arg1 ;
-(id)getAnalyzerType;
-(id)getDetailedResults;
-(id)initWithAsset:(id)arg0 ;
-(id)initWithBlob:(id)arg0 ;
-(void)dealloc;
-(void)endAudio;
-(void)processAudioBuffer:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)processFloatAudioBuffer:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)resetWithLanguage:(id)arg0 withSamplingRate:(NSInteger)arg1 withAudioSource:(id)arg2 ;
-(void)setStartSampleCount:(NSUInteger)arg0 ;


@end


#endif