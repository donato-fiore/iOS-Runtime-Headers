// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRCTCCVNLPTEXTDECODER_H
#define CRCTCCVNLPTEXTDECODER_H

@class NSOrderedSet, NSString, NSLocale, NSMutableSet;
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
@property (readonly, nonatomic) NSMutableSet *subscribedLocales; // ivar: _subscribedLocales
@property (readonly) Class superclass;


+(NSUInteger)_disambiguatedScriptForString:(id)arg0 ;
+(id)lmSupportedLanguages;
+(struct unordered_map<CRDisambiguatedScript, std::vector<unsigned long>, std::hash<CRDisambiguatedScript>, std::equal_to<CRDisambiguatedScript>, std::allocator<std::pair<const CRDisambiguatedScript, std::vector<unsigned long>>>> )_disambiguatedScriptFeatureIndicesWithInfo:(id)arg0 ;
+(void)_updateStringValuesByCombiningCharacterTokensForFeature:(id)arg0 ;
-(BOOL)_decodeFeaturesWithInfo:(id)arg0 imageSize:(struct CGSize )arg1 error:(*id)arg2 ;
-(BOOL)_decodeSingleFeatureWithInfo:(id)arg0 decodingLocale:(id)arg1 greedyDecoder:(id)arg2 greedyConfig:(id)arg3 beamSearchConfig:(id)arg4 imageSize:(struct CGSize )arg5 useCharacterBoxes:(BOOL)arg6 lmConfig:(id)arg7 error:(*id)arg8 ;
-(BOOL)_shouldUseCharacterDecodingToken;
-(BOOL)_wordLMShouldFilterCandidate:(id)arg0 inLocale:(id)arg1 lmConfig:(id)arg2 ;
-(BOOL)decodeOutput:(id)arg0 imageSize:(struct CGSize )arg1 error:(*id)arg2 ;
-(BOOL)shouldDecodeWithLM;
-(id)_commitActionBehavior:(SEL)arg0 ;
-(id)_cvnlpDecodingResultForActivationMatrix:(id)arg0 decodingLocale:(id)arg1 beamSearchConfig:(id)arg2 lmConfig:(id)arg3 error:(*id)arg4 ;
-(id)initWithConfiguration:(id)arg0 model:(id)arg1 error:(*id)arg2 ;
-(id)newLanguageRecognizerSession;
-(void)_buildActivationMatrices:(id)arg0 ;
-(void)_create2DArraysFromInputArray:(id)arg0 classSize:(*NSUInteger)arg1 outputArrays:(*void)arg2 ;
-(void)computeLanguageRecognitionForSession:(id)arg0 output:(id)arg1 imageSize:(struct CGSize )arg2 ;
-(void)dealloc;
-(void)releaseUnusedResources;


@end


#endif