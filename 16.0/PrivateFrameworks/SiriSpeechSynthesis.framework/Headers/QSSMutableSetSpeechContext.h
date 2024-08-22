// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLESETSPEECHCONTEXT_H
#define QSSMUTABLESETSPEECHCONTEXT_H

@class NSArray, NSString;


#import "QSSSetSpeechContext.h"

@interface QSSMutableSetSpeechContext : QSSSetSpeechContext

@property (copy, nonatomic) NSArray *context_with_pron_hints;
@property (copy, nonatomic) NSArray *contextual_text;
@property (copy, nonatomic) NSString *left_context;
@property (copy, nonatomic) NSString *right_context;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif