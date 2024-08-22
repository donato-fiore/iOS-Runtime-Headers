// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAINTENTGROUPGETAPPINFO_H
#define SAINTENTGROUPGETAPPINFO_H

@class NSArray;


#import "SABaseClientBoundCommand.h"

@interface SAIntentGroupGetAppInfo : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *appIdentifyingInfo;
@property (nonatomic) BOOL shouldSearchLocallyOnly;


+(id)getAppInfo;
+(id)getAppInfoWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif