// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLEITNRESPONSE_H
#define FTMUTABLEITNRESPONSE_H

@class NSArray, NSString;


#import "FTItnResponse.h"

@interface FTMutableItnResponse : FTItnResponse

@property (copy, nonatomic) NSArray *formatted_words_list;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif