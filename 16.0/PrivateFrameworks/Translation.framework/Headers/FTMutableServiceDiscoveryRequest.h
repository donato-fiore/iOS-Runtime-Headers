// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLESERVICEDISCOVERYREQUEST_H
#define FTMUTABLESERVICEDISCOVERYREQUEST_H

@class NSString;


#import "FTServiceDiscoveryRequest.h"

@interface FTMutableServiceDiscoveryRequest : FTServiceDiscoveryRequest

@property (copy, nonatomic) NSString *app_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *zk_path;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif