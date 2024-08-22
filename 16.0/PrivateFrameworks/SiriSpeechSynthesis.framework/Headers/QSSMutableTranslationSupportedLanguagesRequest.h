// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLETRANSLATIONSUPPORTEDLANGUAGESREQUEST_H
#define QSSMUTABLETRANSLATIONSUPPORTEDLANGUAGESREQUEST_H

@class NSString;


#import "QSSTranslationSupportedLanguagesRequest.h"

@interface QSSMutableTranslationSupportedLanguagesRequest : QSSTranslationSupportedLanguagesRequest

@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSString *task;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif