// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVNLPDECODINGLANGUAGEMODEL_H
#define CVNLPDECODINGLANGUAGEMODEL_H

@class NSLocale;


#import "CVNLPInformationStream.h"

@interface CVNLPDecodingLanguageModel : CVNLPInformationStream {
    int _lmSPIType;
    *void _tokenizer;
}


@property (readonly, nonatomic) *void languageModel; // ivar: _languageModel
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale


+(id)_decodingLanguageModelForLocale:(id)arg0 modelType:(int)arg1 decodingWeight:(id)arg2 lowerBoundLogProbability:(id)arg3 type:(int)arg4 ;
+(id)decodingCVNLPLanguageModelForLocale:(id)arg0 modelType:(int)arg1 decodingWeight:(id)arg2 ;
+(id)decodingLMLanguageModelForLocale:(id)arg0 modelType:(int)arg1 decodingWeight:(id)arg2 ;
+(unsigned int)_normalizedLMTokenIDForWord:(id)arg0 withTokenID:(unsigned int)arg1 sourceLanguageModel:(id)arg2 outScore:(*CGFloat)arg3 ;
-(NSInteger)requiredContextLengthForStringLength:(NSInteger)arg0 ;
-(id)_initWithLanguageModel:(*void)arg0 locale:(id)arg1 decodingWeight:(id)arg2 lowerBoundLogProbability:(id)arg3 type:(int)arg4 ;
-(id)initWithCVNLPLanguageModel:(struct CVNLPLanguageModel *)arg0 locale:(id)arg1 decodingWeight:(id)arg2 ;
-(id)initWithCVNLPLanguageModel:(struct CVNLPLanguageModel *)arg0 locale:(id)arg1 decodingWeight:(id)arg2 lowerBoundLogProbability:(id)arg3 ;
-(id)initWithLMLanguageModel:(*void)arg0 locale:(id)arg1 decodingWeight:(id)arg2 ;
-(id)initWithLMLanguageModel:(*void)arg0 locale:(id)arg1 decodingWeight:(id)arg2 lowerBoundLogProbability:(id)arg3 ;
-(id)initWithLanguageModel:(*void)arg0 ;
-(id)initWithLanguageModel:(*void)arg0 locale:(id)arg1 ;
-(int)lmSPIType;
-(struct vector<unsigned int, std::allocator<unsigned int>> )characterTokenIDsForString:(id)arg0 ;
-(struct vector<unsigned int, std::allocator<unsigned int>> )wordTokenIDsForString:(id)arg0 outTokenRanges:(*id)arg1 ;
-(void)dealloc;


@end


#endif