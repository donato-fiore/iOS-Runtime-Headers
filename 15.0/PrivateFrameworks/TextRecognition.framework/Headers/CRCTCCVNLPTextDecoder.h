// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRCTCCVNLPTEXTDECODER_H
#define CRCTCCVNLPTEXTDECODER_H

@class NSOrderedSet, NSString, NSLocale;
@protocol CRTextDecoding;

#import <Foundation/Foundation.h>

#import "CRNeuralRecognizerConfiguration.h"
#import "CRTextSequenceRecognizerModel.h"
#import "CRRegex.h"

@interface CRCTCCVNLPTextDecoder : NSObject <CRTextDecoding>



@property (readonly, nonatomic) NSOrderedSet *characterObservations; // ivar: _characterObservations
@property (retain) CRNeuralRecognizerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (retain) CRTextSequenceRecognizerModel *model; // ivar: _model
@property (readonly) CVNLPTextDecodingPruningPolicy pruningPolicy;
@property (retain, nonatomic) CRRegex *regExpressions; // ivar: _regExpressions
@property (nonatomic) BOOL shouldUseFalsePositiveFiltering; // ivar: _shouldUseFalsePositiveFiltering
@property (nonatomic) BOOL shouldUseLM; // ivar: _shouldUseLM
@property (readonly) Class superclass;


+(id)lmSupportedLanguages;
-(BOOL)_wordLMShouldFilterCandidate:(id)arg0 ;
-(BOOL)shouldDecodeWithLM;
-(id)_buildActivationMatrices:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 model:(id)arg1 error:(*id)arg2 ;
-(void)_create2DArraysFromInputArray:(id)arg0 classSize:(*NSUInteger)arg1 outputArrays:(*void)arg2 ;
-(void)_decodeFeaturesWithInfo:(id)arg0 activations:(id)arg1 imageSize:(struct CGSize )arg2 error:(*id)arg3 ;
-(void)dealloc;
-(void)decodeOutput:(id)arg0 imageSize:(struct CGSize )arg1 error:(*id)arg2 ;


@end


#endif