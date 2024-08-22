// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SACONNECTIONPOLICYROUTE_H
#define SACONNECTIONPOLICYROUTE_H

@class NSString, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAConnectionPolicyRoute : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *cname;
@property (copy, nonatomic) NSString *connectionId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSNumber *mptcp;
@property (nonatomic) NSInteger priority;
@property (copy, nonatomic) NSString *resolver;
@property (copy, nonatomic) NSString *resolverProtocol;
@property (copy, nonatomic) NSString *routeId;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *timeout;
@property (copy, nonatomic) NSString *type;


+(id)connectionPolicyRoute;
+(id)connectionPolicyRouteWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif