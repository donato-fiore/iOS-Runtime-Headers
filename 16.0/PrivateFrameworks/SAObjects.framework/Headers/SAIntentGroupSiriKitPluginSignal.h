// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAINTENTGROUPSIRIKITPLUGINSIGNAL_H
#define SAINTENTGROUPSIRIKITPLUGINSIGNAL_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAIntentGroupSiriKitPluginSignal : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *bundleIdentifier;


-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;
-(id)initWithBundleIdentifier:(id)arg0 ;


@end


#endif