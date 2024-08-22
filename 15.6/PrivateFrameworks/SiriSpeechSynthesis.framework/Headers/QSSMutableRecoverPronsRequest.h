// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLERECOVERPRONSREQUEST_H
#define QSSMUTABLERECOVERPRONSREQUEST_H

@class NSArray, NSString;


#import "QSSRecoverPronsRequest.h"

@interface QSSMutableRecoverPronsRequest : QSSRecoverPronsRequest

@property (copy, nonatomic) NSArray *apg_ids;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif