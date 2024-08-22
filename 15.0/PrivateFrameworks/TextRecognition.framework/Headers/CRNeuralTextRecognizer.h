// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRNEURALTEXTRECOGNIZER_H
#define CRNEURALTEXTRECOGNIZER_H

@class NSString;
@protocol CRConfidenceThresholdProviding, CRRecognizerFeatureProviding, CRTextRecognizerModel, CRTextDecoding;

#import <Foundation/Foundation.h>

#import "CRNeuralRecognizerConfiguration.h"
#import "CRPerformanceStatistics.h"

@interface CRNeuralTextRecognizer : NSObject <CRConfidenceThresholdProviding>



@property (retain) CRNeuralRecognizerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (retain) CRPerformanceStatistics *decodingStats; // ivar: _decodingStats
@property (readonly, copy) NSString *description;
@property unsigned int desiredQoS; // ivar: _desiredQoS
@property (retain) NSObject<CRRecognizerFeatureProviding> *featureProvider; // ivar: _featureProvider
@property (readonly) NSUInteger hash;
@property (retain) CRPerformanceStatistics *inferenceStats; // ivar: _inferenceStats
@property (retain) NSObject<CRTextRecognizerModel> *model; // ivar: _model
@property NSInteger resourceUsers; // ivar: _resourceUsers
@property BOOL shouldCancel; // ivar: _shouldCancel
@property (readonly) Class superclass;
@property (retain) NSObject<CRTextDecoding> *textDecoder; // ivar: _textDecoder


+(id)_featureProviderForRevision:(NSInteger)arg0 configuration:(id)arg1 model:(id)arg2 error:(*id)arg3 ;
+(id)_modelForRevision:(NSInteger)arg0 configuration:(id)arg1 error:(*id)arg2 ;
+(id)_textDecoderForRevision:(NSInteger)arg0 configuration:(id)arg1 model:(id)arg2 error:(*id)arg3 ;
+(id)recognizerForLocale:(id)arg0 imageReaderOptions:(id)arg1 error:(*id)arg2 ;
-(BOOL)_isCancelled;
-(BOOL)_loadResourcesWithError:(*id)arg0 ;
// -(BOOL)performWithResource:(id)arg0 error:(unk)arg1  ;
-(BOOL)preheatWithError:(*id)arg0 ;
-(BOOL)shouldModelSupportCharacterBoxes;
-(BOOL)shouldUseLM;
-(id)init;
// -(id)recognizeInImage:(id)arg0 textFeatures:(id)arg1 progressHandler:(id)arg2 error:(unk)arg3  ;
-(id)thresholdsForTextFeature:(id)arg0 ;
-(void)_unloadResources;
-(void)cancel;


@end


#endif