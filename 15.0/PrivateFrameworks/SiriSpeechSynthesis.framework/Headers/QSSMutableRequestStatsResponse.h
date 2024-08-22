// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLEREQUESTSTATSRESPONSE_H
#define QSSMUTABLEREQUESTSTATSRESPONSE_H

@class NSArray, NSString;


#import "QSSRequestStatsResponse.h"

@interface QSSMutableRequestStatsResponse : QSSRequestStatsResponse

@property (copy, nonatomic) NSArray *bool_stats;
@property (copy, nonatomic) NSArray *double_stats;
@property (copy, nonatomic) NSArray *int32_stats;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *request_locale;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif