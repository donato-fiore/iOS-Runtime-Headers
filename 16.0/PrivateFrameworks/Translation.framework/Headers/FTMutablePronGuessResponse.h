// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLEPRONGUESSRESPONSE_H
#define FTMUTABLEPRONGUESSRESPONSE_H

@class NSString, NSArray;


#import "FTPronGuessResponse.h"
#import "FTVocToken.h"

@interface FTMutablePronGuessResponse : FTPronGuessResponse

@property (copy, nonatomic) NSString *apg_id;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSArray *human_readable_prons;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSArray *tts_pronunciations;
@property (copy, nonatomic) FTVocToken *voc_token;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif