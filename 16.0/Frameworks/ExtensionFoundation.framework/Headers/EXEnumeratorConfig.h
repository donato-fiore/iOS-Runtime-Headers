// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EXENUMERATORCONFIG_H
#define EXENUMERATORCONFIG_H

@class NSString, NSURL, NSDictionary;
@protocol EXEnumeratorConfig;

#import <Foundation/Foundation.h>


@interface EXEnumeratorConfig : NSObject <EXEnumeratorConfig>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSURL *extensionPointsConfigURL; // ivar: _extensionPointsConfigURL
@property (readonly) NSUInteger hash;
@property (readonly) NSDictionary *legacyExtensionPointAllowList; // ivar: _legacyExtensionPointAllowList
@property (readonly) NSURL *rootURL; // ivar: _rootURL
@property (readonly) Class superclass;
@property (readonly) NSURL *xpcExtensionPointsCache; // ivar: _xpcExtensionPointsCache
@property (readonly) NSURL *xpcExtensionsCache; // ivar: _xpcExtensionsCache


-(id)init;


@end


#endif