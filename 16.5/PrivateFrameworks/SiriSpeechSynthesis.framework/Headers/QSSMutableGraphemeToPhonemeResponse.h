// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLEGRAPHEMETOPHONEMERESPONSE_H
#define QSSMUTABLEGRAPHEMETOPHONEMERESPONSE_H

@class NSArray, NSString;


#import "QSSGraphemeToPhonemeResponse.h"

@interface QSSMutableGraphemeToPhonemeResponse : QSSGraphemeToPhonemeResponse

@property (copy, nonatomic) NSArray *aot_token_prons;
@property (copy, nonatomic) NSString *g2p_model_version;
@property (copy, nonatomic) NSString *g2p_version;
@property (nonatomic) BOOL is_pron_guessed;
@property (copy, nonatomic) NSArray *jit_token_prons;
@property (copy, nonatomic) NSArray *phonemes;
@property (copy, nonatomic) NSString *phoneset_version;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *session_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif