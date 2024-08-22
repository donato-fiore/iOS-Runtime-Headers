// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LTTEXTTRANSLATIONREQUEST_H
#define _LTTEXTTRANSLATIONREQUEST_H

@class LTTranslationRequest, NSMutableDictionary, NSArray, NSString, NSAttributedString;
@protocol _LTSpeechTranslationDelegate;


#import "_LTTranslationSession.h"
#import "_LTTextToSpeechTranslationRequest.h"

@interface _LTTextTranslationRequest : LTTranslationRequest <_LTSpeechTranslationDelegate>

 {
    _LTTranslationSession *_session;
    _LTTextToSpeechTranslationRequest *_request;
    NSMutableDictionary *_savedAttributes;
    NSArray *_paragraphOrder;
    NSUInteger _outstandingCount;
    NSMutableDictionary *_receivedParagraphs;
    id *_done;
    BOOL _translationFinished;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *ignoringAttributes; // ivar: _ignoringAttributes
@property (copy, nonatomic) NSString *sentence; // ivar: _sentence
@property (readonly) Class superclass;
@property (copy, nonatomic) NSAttributedString *text; // ivar: _text
@property (copy, nonatomic) id *textHandler; // ivar: _textHandler
@property (copy, nonatomic) id *textTranslationHandler; // ivar: _textTranslationHandler
@property (copy, nonatomic) id *translationHandler; // ivar: _translationHandler


-(id)_paragraphRequestForText:(id)arg0 ;
-(id)_realign:(id)arg0 identifier:(id)arg1 ;
-(id)loggingType;
-(id)serviceDelegate;
-(void)_constructFinalParagraphResult;
-(void)_handleParagraphResponse:(id)arg0 error:(id)arg1 ;
-(void)_startTranslationWithService:(id)arg0 done:(id)arg1 ;
-(void)_translationFailedWithError:(id)arg0 ;
-(void)translationDidFinishWithError:(id)arg0 ;
-(void)translatorDidTranslate:(id)arg0 ;


@end


#endif