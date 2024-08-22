// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLELMSCORERREQUEST_H
#define FTMUTABLELMSCORERREQUEST_H

@class NSString;


#import "FTLmScorerRequest.h"

@interface FTMutableLmScorerRequest : FTLmScorerRequest

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *task_name;
@property (copy, nonatomic) NSString *transcript;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif