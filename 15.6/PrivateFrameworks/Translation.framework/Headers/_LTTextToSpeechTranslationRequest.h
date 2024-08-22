// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LTTEXTTOSPEECHTRANSLATIONREQUEST_H
#define _LTTEXTTOSPEECHTRANSLATIONREQUEST_H

@class LTTranslationRequest, NSString;
@protocol _LTSpeechTranslationDelegate, OS_dispatch_queue, _LTTranslationService;



@interface _LTTextToSpeechTranslationRequest : LTTranslationRequest <_LTSpeechTranslationDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<_LTTranslationService> *_service;
    id *_done;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_LTSpeechTranslationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text


+(void)initialize;
-(id)initWithLocalePair:(id)arg0 ;
-(id)initWithSourceLocale:(id)arg0 targetLocale:(id)arg1 ;
-(id)loggingType;
-(id)nativeAudioFormat;
-(void)_startTranslationWithService:(id)arg0 done:(id)arg1 ;
-(void)_translationFailedWithError:(id)arg0 ;
-(void)translationDidFinishWithError:(id)arg0 ;
-(void)translatorDidTranslate:(id)arg0 ;


@end


#endif