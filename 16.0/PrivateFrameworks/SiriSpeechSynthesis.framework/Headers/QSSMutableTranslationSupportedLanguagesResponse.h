// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLETRANSLATIONSUPPORTEDLANGUAGESRESPONSE_H
#define QSSMUTABLETRANSLATIONSUPPORTEDLANGUAGESRESPONSE_H

@class NSArray, NSString;


#import "QSSTranslationSupportedLanguagesResponse.h"

@interface QSSMutableTranslationSupportedLanguagesResponse : QSSTranslationSupportedLanguagesResponse

@property (copy, nonatomic) NSArray *language_pairs;
@property (copy, nonatomic) NSString *request_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_string;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif