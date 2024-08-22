// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLELMSCORERREQUEST_H
#define QSSMUTABLELMSCORERREQUEST_H

@class NSString;


#import "QSSLmScorerRequest.h"

@interface QSSMutableLmScorerRequest : QSSLmScorerRequest

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *task_name;
@property (copy, nonatomic) NSString *transcript;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif