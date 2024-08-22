// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAREMEMBERSGETRELATIVEAPPUSAGEPROBABILITIESRESPONSE_H
#define SAREMEMBERSGETRELATIVEAPPUSAGEPROBABILITIESRESPONSE_H

@class NSString, NSDictionary;
@protocol SAServerBoundCommand, SAAceSerializable;


#import "SABaseCommand.h"

@interface SARemembersGetRelativeAppUsageProbabilitiesResponse : SABaseCommand <SAServerBoundCommand, SAAceSerializable>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSDictionary *bundleIDPercentages;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)getRelativeAppUsageProbabilitiesResponse;
+(id)getRelativeAppUsageProbabilitiesResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif