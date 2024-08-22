// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAINTENTGROUPAPPENTITLEMENTREQUEST_H
#define SAINTENTGROUPAPPENTITLEMENTREQUEST_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAIntentGroupAppEntitlementRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *appBundleId;


+(id)appEntitlementRequest;
+(id)appEntitlementRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif