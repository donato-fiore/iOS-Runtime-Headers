// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLETEXTTOSPEECHREQUESTCONTEXT_H
#define QSSMUTABLETEXTTOSPEECHREQUESTCONTEXT_H

@class NSArray, NSString;


#import "QSSTextToSpeechRequestContext.h"

@interface QSSMutableTextToSpeechRequestContext : QSSTextToSpeechRequestContext

@property (copy, nonatomic) NSArray *context_info;
@property (copy, nonatomic) NSString *dialog_identifier;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif