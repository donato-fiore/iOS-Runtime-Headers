// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLERECOGNITIONTOKEN_H
#define QSSMUTABLERECOGNITIONTOKEN_H

@class NSString;


#import "QSSRecognitionToken.h"

@interface QSSMutableRecognitionToken : QSSRecognitionToken

@property (nonatomic) BOOL add_space_after;
@property (nonatomic) int confidence;
@property (nonatomic) int end_milli_seconds;
@property (copy, nonatomic) NSString *ipa_phone_seq;
@property (copy, nonatomic) NSString *phone_seq;
@property (nonatomic) int silence_start_milli_seconds;
@property (nonatomic) int start_milli_seconds;
@property (copy, nonatomic) NSString *token_text;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif