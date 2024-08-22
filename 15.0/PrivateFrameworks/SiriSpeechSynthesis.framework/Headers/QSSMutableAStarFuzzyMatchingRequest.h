// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLEASTARFUZZYMATCHINGREQUEST_H
#define QSSMUTABLEASTARFUZZYMATCHINGREQUEST_H

@class NSString;


#import "QSSAStarFuzzyMatchingRequest.h"
#import "QSSAStarFuzzyMatchingConfig.h"

@interface QSSMutableAStarFuzzyMatchingRequest : QSSAStarFuzzyMatchingRequest

@property (copy, nonatomic) QSSAStarFuzzyMatchingConfig *config;
@property (copy, nonatomic) NSString *matcher_id;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *target;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif