// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INSYSTEMAPPMAPPER_H
#define INSYSTEMAPPMAPPER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface INSystemAppMapper : NSObject {
    map<std::string, INSystemApp, std::less<std::string>, std::allocator<std::pair<const std::string, INSystemApp>>> _mapping;
    NSDictionary *_bundleIdentifierGroupingForIntentExecution;
}




+(id)supportedIntentsOverridesForBundleIdentifier:(id)arg0 ;
-(id)bundleIdentifiersForIntentExecutionMatchingBundleIdentifier:(id)arg0 ;
-(id)extensionToDisplayableAppBundleIdentifierMapping;
-(id)extensionToLaunchableAppBundleIdentifierMapping;
-(id)init;
-(id)launchableBundleIdentifierMatchingBundleIdentifier:(id)arg0 ;
-(id)resolvedAppMatchingExtensionBundleIdentifier:(id)arg0 ;
-(id)resolvedIntentForAccessibilityActionWithBundleIdentifier:(id)arg0 intentClassName:(id)arg1 ;
-(id)resolvedIntentMatchingAppBundleIdentifier:(id)arg0 preferredCallProvider:(NSInteger)arg1 intentClassName:(id)arg2 ;
-(id)resolvedIntentMatchingExtensionBundleIdentifier:(id)arg0 preferredCallProvider:(NSInteger)arg1 intentClassName:(id)arg2 ;


@end


#endif