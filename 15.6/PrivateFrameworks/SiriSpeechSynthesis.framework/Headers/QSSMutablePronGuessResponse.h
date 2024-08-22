// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLEPRONGUESSRESPONSE_H
#define QSSMUTABLEPRONGUESSRESPONSE_H

@class NSString, NSArray;


#import "QSSPronGuessResponse.h"
#import "QSSVocToken.h"

@interface QSSMutablePronGuessResponse : QSSPronGuessResponse

@property (copy, nonatomic) NSString *apg_id;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSArray *human_readable_prons;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSArray *tts_pronunciations;
@property (copy, nonatomic) QSSVocToken *voc_token;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif