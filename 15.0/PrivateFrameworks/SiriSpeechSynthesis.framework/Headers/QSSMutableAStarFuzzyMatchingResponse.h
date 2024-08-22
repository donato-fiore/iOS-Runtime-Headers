// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLEASTARFUZZYMATCHINGRESPONSE_H
#define QSSMUTABLEASTARFUZZYMATCHINGRESPONSE_H

@class NSArray, NSString;


#import "QSSAStarFuzzyMatchingResponse.h"

@interface QSSMutableAStarFuzzyMatchingResponse : QSSAStarFuzzyMatchingResponse

@property (nonatomic) unsigned int expanded_path;
@property (nonatomic) unsigned int latency;
@property (copy, nonatomic) NSArray *results;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *session_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif