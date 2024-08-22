// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLECANCELREQUEST_H
#define QSSMUTABLECANCELREQUEST_H

@class NSString;


#import "QSSCancelRequest.h"

@interface QSSMutableCancelRequest : QSSCancelRequest

@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif