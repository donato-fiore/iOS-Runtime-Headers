// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OPTTSMUTABLETEXTTOSPEECHREQUESTCONTEXT_H
#define OPTTSMUTABLETEXTTOSPEECHREQUESTCONTEXT_H

@class NSArray, NSString;


#import "OPTTSTextToSpeechRequestContext.h"

@interface OPTTSMutableTextToSpeechRequestContext : OPTTSTextToSpeechRequestContext

@property (copy, nonatomic) NSArray *context_info;
@property (copy, nonatomic) NSString *dialog_identifier;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif