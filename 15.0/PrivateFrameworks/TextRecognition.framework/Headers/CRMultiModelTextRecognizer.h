// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRMULTIMODELTEXTRECOGNIZER_H
#define CRMULTIMODELTEXTRECOGNIZER_H

@class NSDictionary, NSString;
@protocol CRTextRecognizer;

#import <Foundation/Foundation.h>

#import "CRRecognizerConfiguration.h"
#import "CRPerformanceStatistics.h"
#import "CRMultiModelTextFeatureSplitter.h"

@interface CRMultiModelTextRecognizer : NSObject <CRTextRecognizer>



@property (retain) CRRecognizerConfiguration *configuration; // ivar: _configuration
@property (retain) NSDictionary *configurationOptions; // ivar: _configurationOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly) CRPerformanceStatistics *decodingStats;
@property (readonly, copy) NSString *description;
@property (readonly) CRPerformanceStatistics *groupingStats;
@property (retain) CRPerformanceStatistics *groupingStatsStorage; // ivar: _groupingStatsStorage
@property (readonly) NSUInteger hash;
@property (readonly) CRPerformanceStatistics *inferenceStats;
@property BOOL shouldCancel; // ivar: _shouldCancel
@property (readonly) Class superclass;
@property (retain) CRMultiModelTextFeatureSplitter *textFeatureSplitter; // ivar: _textFeatureSplitter


+(id)recognizerForRevision:(NSUInteger)arg0 imageReaderOptions:(id)arg1 error:(*id)arg2 ;
+(id)sortedSupportedLanguages:(id)arg0 byPreferredLanguages:(id)arg1 ;
-(BOOL)_isCancelled;
-(BOOL)preheatWithError:(*id)arg0 ;
-(BOOL)usesLMForTextFeature:(id)arg0 ;
-(id)identifierForTextFeature:(id)arg0 ;
-(id)initWithConfigurationOptions:(id)arg0 ;
// -(id)recognizeInImage:(id)arg0 textFeatures:(id)arg1 progressHandler:(id)arg2 error:(unk)arg3  ;
-(id)recognizerForIdentifier:(id)arg0 ;
-(id)thresholdsForTextFeature:(id)arg0 ;
-(id)titleParametersForTextFeature:(id)arg0 ;
-(void)cancel;


@end


#endif