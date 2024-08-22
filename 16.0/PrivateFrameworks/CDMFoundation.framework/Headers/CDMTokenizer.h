// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMTOKENIZER_H
#define CDMTOKENIZER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CDMTokenizer : NSObject {
    *void _analyzer;
    unique_ptr<morphun::analysis::DefaultAnalyzerFactory, std::default_delete<morphun::analysis::DefaultAnalyzerFactory>> _analyzerFactory;
    unique_ptr<morphun::Tokenizer, std::default_delete<morphun::Tokenizer>> _tokenizer;
    *void _normalizer;
    unique_ptr<morphun::analysis::DefaultAnalyzerFactory, std::default_delete<morphun::analysis::DefaultAnalyzerFactory>> _normalizerFactory;
    unique_ptr<morphun::util::ULocale, std::default_delete<morphun::util::ULocale>> _locale;
    NSString *_language;
    int _maxTokens;
    NSObject<OS_dispatch_queue> *_morphunForceUpdateQueue;
}




+(BOOL)registerTrialAsset:(id)arg0 ;
+(BOOL)syncTrialAsset:(id)arg0 ;
+(BOOL)trialAssetUpdate:(id)arg0 ;
+(id)printableLocales:(id)arg0 ;
+(id)tokenizerForLocale:(id)arg0 ;
+(void)registerMorphunAssetsPathForLocale:(id)arg0 withPath:(id)arg1 ;
-(id)createTokenChain:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(id)initWithLocale:(id)arg0 maxTokens:(int)arg1 maxInputSize:(int)arg2 ;


@end


#endif