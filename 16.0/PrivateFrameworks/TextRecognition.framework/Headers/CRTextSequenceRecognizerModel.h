// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRTEXTSEQUENCERECOGNIZERMODEL_H
#define CRTEXTSEQUENCERECOGNIZERMODEL_H

@class NSString, NSURL, NSDictionary, NSNumber;
@protocol CRTextRecognizerModel;

#import <Foundation/Foundation.h>

#import "CRNeuralRecognizerConfiguration.h"

@interface CRTextSequenceRecognizerModel : NSObject <CRTextRecognizerModel>



@property (nonatomic) *int codemapArray; // ivar: _codemapArray
@property (nonatomic) NSUInteger codemapSize; // ivar: _codemapSize
@property (readonly) CRNeuralRecognizerConfiguration *configuration; // ivar: _configuration
@property (nonatomic) NSInteger ctcBlankLabelIndex; // ivar: _ctcBlankLabelIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSURL *modelURL;
@property (retain, nonatomic) NSDictionary *outputShape; // ivar: _outputShape
@property (retain, nonatomic) NSNumber *outputWidthDownscale; // ivar: _outputWidthDownscale
@property (retain, nonatomic) NSNumber *outputWidthOffset; // ivar: _outputWidthOffset
@property (readonly) Class superclass;


+(id)defaultURLOfModelInThisBundle;
-(BOOL)preheatWithError:(*id)arg0 ;
-(BOOL)supportCharacterBoxes;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)inputBatchFromTextFeatures:(id)arg0 image:(id)arg1 featureWidth:(CGFloat)arg2 configuration:(id)arg3 ;
-(id)populateInputBatchData:(*float)arg0 textFeatures:(id)arg1 image:(id)arg2 batchSize:(NSInteger)arg3 width:(CGFloat)arg4 configuration:(id)arg5 ;
-(id)predictFromInputs:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)releaseIntermediateBuffers;


@end


#endif