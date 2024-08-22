// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STAPPOVERRIDES_H
#define STAPPOVERRIDES_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface STAppOverrides : NSObject

@property (readonly) int category; // ivar: _category
@property (readonly) NSString *defaultName; // ivar: _defaultName
@property (readonly) BOOL excludeUsageBundle;
@property (readonly) BOOL forceExcludeUsageBundle; // ivar: _forceExcludeUsageBundle
@property (readonly) BOOL forceHidden; // ivar: _forceHidden
@property (readonly) BOOL forceVisible; // ivar: _forceVisible
@property (readonly) BOOL hideLastUsed; // ivar: _hideLastUsed
@property (readonly) NSArray *includeCacheDeleteKeys; // ivar: _includeCacheDeleteKeys
@property (readonly) NSArray *includeFsPaths; // ivar: _includeFsPaths
@property (readonly) NSArray *includeMediaUsage; // ivar: _includeMediaUsage
@property (readonly) BOOL includeSoftwareUpdates; // ivar: _includeSoftwareUpdates
@property (readonly) BOOL isICloud; // ivar: _isICloud
@property (readonly) BOOL isMediaApp;
@property (readonly) NSString *usageBundleOverride; // ivar: _usageBundleOverride


+(id)overrides;
+(id)overridesFor:(id)arg0 ;
+(id)overridesForApplication:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif