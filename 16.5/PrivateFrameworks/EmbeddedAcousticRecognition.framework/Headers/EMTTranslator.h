// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMTTRANSLATOR_H
#define EMTTRANSLATOR_H

@class NSLocale, NSOperationQueue;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EMTTranslator : NSObject {
    shared_ptr<quasar::TranslatorFactory> _translatorFactory;
    ? _translator;
    NSLocale *_sourceLocale;
    NSLocale *_targetLocale;
    vector<quasar::SystemConfig, std::allocator<quasar::SystemConfig>> _configs;
    BOOL _skipNonFinalToCatchup;
    NSOperationQueue *_translationRequestsQueue;
    NSObject<OS_dispatch_queue> *_translationQueue;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue


+(void)initialize;
-(?)_dispatchTranslationRequest:(?)arg0 isFinal:(?)arg1 spans:(?)arg2 translator:(?)arg3 sourceLocale:(?)arg4 targetLocalecompletion;
-(id)initWithModelURL:(id)arg0 ;
-(id)initWithModelURL:(id)arg0 task:(id)arg1 ;
-(id)initWithModelURL:(id)arg0 task:(id)arg1 skipNonFinalToCatchup:(BOOL)arg2 ;
-(id)initWithModelURL:(id)arg0 task:(id)arg1 skipNonFinalToCatchup:(BOOL)arg2 translatorCacheSize:(NSInteger)arg3 ;
-(id)initWithModelURLs:(id)arg0 task:(id)arg1 ;
-(id)initWithModelURLs:(id)arg0 task:(id)arg1 skipNonFinalToCatchup:(BOOL)arg2 ;
-(id)initWithModelURLs:(id)arg0 task:(id)arg1 skipNonFinalToCatchup:(BOOL)arg2 translatorCacheSize:(NSInteger)arg3 ;
-(struct shared_ptr<quasar::Translator> )_prepareFor:(id)arg0 to:(id)arg1 ;
-(struct vector<std::string, std::allocator<std::string>> )_tokenizeString:(id)arg0 ;
-(void)getTranslatorWithCompletion:(id)arg0 ;
-(void)loadTranslatorFrom:(id)arg0 to:(id)arg1 ;
-(void)prepareFor:(id)arg0 to:(id)arg1 ;
-(void)translateSpeech:(id)arg0 completion:(id)arg1 ;
-(void)translateSpeech:(id)arg0 from:(id)arg1 to:(id)arg2 completion:(id)arg3 ;
-(void)translateString:(id)arg0 completion:(id)arg1 ;
-(void)translateString:(id)arg0 from:(id)arg1 to:(id)arg2 completion:(id)arg3 ;
-(void)translateTokens:(id)arg0 from:(id)arg1 to:(id)arg2 completion:(id)arg3 ;
-(void)translateTokens:(id)arg0 from:(id)arg1 to:(id)arg2 spans:(id)arg3 completion:(id)arg4 ;
-(void)translateTokens:(id)arg0 isFinal:(BOOL)arg1 completion:(id)arg2 ;
-(void)translateTokens:(id)arg0 isFinal:(BOOL)arg1 spans:(id)arg2 completion:(id)arg3 ;


@end


#endif