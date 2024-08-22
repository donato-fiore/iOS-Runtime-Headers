// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSSHAREDFEATUREAVAILABILITY_H
#define WBSSHAREDFEATUREAVAILABILITY_H


#import <Foundation/Foundation.h>


@interface WBSSharedFeatureAvailability : NSObject



+(BOOL)areLocalSiriSuggestionsEnabled;
+(BOOL)areSiriSearchSuggestionsEnabled;
+(id)safariApplicationPlatformBundleIdentifier;
+(void)setLocalSiriSuggestionsEnabled:(BOOL)arg0 ;


@end


#endif