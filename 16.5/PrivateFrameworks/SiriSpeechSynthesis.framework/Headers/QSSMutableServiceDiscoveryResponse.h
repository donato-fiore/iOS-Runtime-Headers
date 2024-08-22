// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLESERVICEDISCOVERYRESPONSE_H
#define QSSMUTABLESERVICEDISCOVERYRESPONSE_H

@class NSString, NSArray;


#import "QSSServiceDiscoveryResponse.h"

@interface QSSMutableServiceDiscoveryResponse : QSSServiceDiscoveryResponse

@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSArray *zk_node;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif