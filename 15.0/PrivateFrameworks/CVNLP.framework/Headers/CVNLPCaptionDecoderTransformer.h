// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVNLPCAPTIONDECODERTRANSFORMER_H
#define CVNLPCAPTIONDECODERTRANSFORMER_H

@class NSArray, NSDictionary;


#import "CVNLPCaptionDecoder.h"

@interface CVNLPCaptionDecoderTransformer : CVNLPCaptionDecoder

@property (nonatomic) *CVNLPBeamSearch beamSearch; // ivar: _beamSearch
@property (nonatomic) NSUInteger beamSize; // ivar: _beamSize
@property (nonatomic) NSUInteger decoderBatchSize; // ivar: _decoderBatchSize
@property (retain, nonatomic) NSArray *decoderBlocks; // ivar: _decoderBlocks
@property (nonatomic) NSUInteger endID; // ivar: _endID
@property (nonatomic) *CVNLPBeamSearch filterBeamSearch; // ivar: _filterBeamSearch
@property (nonatomic) NSUInteger maxCaptionLen; // ivar: _maxCaptionLen
@property (nonatomic) NSUInteger outputVocabSize; // ivar: _outputVocabSize
@property (nonatomic) NSUInteger startID; // ivar: _startID
@property (retain, nonatomic) NSDictionary *vocab; // ivar: _vocab
@property (nonatomic) NSUInteger vocabSize; // ivar: _vocabSize


-(id)computeCaptionForImageWithInputs:(id)arg0 genderOption:(int)arg1 ;
-(id)computeCaptionForImageWithInputsImpl:(id)arg0 genderOption:(int)arg1 ;
-(id)initWithOptions:(id)arg0 runTimeParams:(id)arg1 ;
-(id)performanceResults;
-(void)_createBeamSearch:(id)arg0 runTimeParams:(id)arg1 ;
-(void)_loadNetwork:(id)arg0 options:(id)arg1 runTimeParams:(id)arg2 ;
-(void)_loadVocabFile:(id)arg0 ;
-(void)dealloc;


@end


#endif