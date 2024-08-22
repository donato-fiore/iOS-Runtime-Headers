// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAINTENTGROUPAPPENTITLEMENTRESPONSE_H
#define SAINTENTGROUPAPPENTITLEMENTRESPONSE_H

@class NSString, NSArray;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAIntentGroupAppEntitlementResponse : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSArray *appEntitlements;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)appEntitlementResponse;
+(id)appEntitlementResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif