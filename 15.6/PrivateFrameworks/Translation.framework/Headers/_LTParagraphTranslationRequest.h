// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LTPARAGRAPHTRANSLATIONREQUEST_H
#define _LTPARAGRAPHTRANSLATIONREQUEST_H

@class LTTranslationRequest, NSArray, NSString;



@interface _LTParagraphTranslationRequest : LTTranslationRequest

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) NSArray *ranges; // ivar: _ranges
@property (copy, nonatomic) NSString *text; // ivar: _text


-(id)loggingType;
-(id)translationParagraph;
-(void)_startTranslationWithService:(id)arg0 done:(id)arg1 ;
-(void)_translationFailedWithError:(id)arg0 ;


@end


#endif