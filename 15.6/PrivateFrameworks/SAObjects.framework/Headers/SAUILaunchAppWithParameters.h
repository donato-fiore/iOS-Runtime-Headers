// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUILAUNCHAPPWITHPARAMETERS_H
#define SAUILAUNCHAPPWITHPARAMETERS_H

@class NSString, NSDictionary;


#import "SABaseClientBoundCommand.h"

@interface SAUILaunchAppWithParameters : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSDictionary *parameters;


+(id)launchAppWithParameters;
+(id)launchAppWithParametersWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif