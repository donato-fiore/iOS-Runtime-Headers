// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAAPPSGETRESTRICTEDAPPSRESPONSE_H
#define SAAPPSGETRESTRICTEDAPPSRESPONSE_H

@class NSString, NSDictionary, NSArray;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAAppsGetRestrictedAppsResponse : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSDictionary *appToItsRestrictionsMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSArray *restrictedApps;
@property (readonly) Class superclass;


+(id)getRestrictedAppsResponse;
+(id)getRestrictedAppsResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif