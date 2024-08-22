// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLEASTARFUZZYMATCHINGREQUEST_H
#define FTMUTABLEASTARFUZZYMATCHINGREQUEST_H

@class NSString;


#import "FTAStarFuzzyMatchingRequest.h"
#import "FTAStarFuzzyMatchingConfig.h"

@interface FTMutableAStarFuzzyMatchingRequest : FTAStarFuzzyMatchingRequest

@property (copy, nonatomic) FTAStarFuzzyMatchingConfig *config;
@property (copy, nonatomic) NSString *matcher_id;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *target;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif