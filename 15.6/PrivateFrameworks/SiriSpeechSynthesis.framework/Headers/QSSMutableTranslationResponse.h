// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLETRANSLATIONRESPONSE_H
#define QSSMUTABLETRANSLATIONRESPONSE_H

@class NSString, NSArray;


#import "QSSTranslationResponse.h"

@interface QSSMutableTranslationResponse : QSSTranslationResponse

@property (copy, nonatomic) NSString *engine_input;
@property (copy, nonatomic) NSArray *engine_output;
@property (copy, nonatomic) NSArray *n_best_translated_phrases;
@property (copy, nonatomic) NSString *request_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_string;
@property (copy, nonatomic) NSString *sequence_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif