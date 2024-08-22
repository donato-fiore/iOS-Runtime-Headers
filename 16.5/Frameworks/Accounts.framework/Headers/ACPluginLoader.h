// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACPLUGINLOADER_H
#define ACPLUGINLOADER_H


#import <Foundation/Foundation.h>


@interface ACPluginLoader : NSObject



+(id)_accountsPluginDirectoryURLs:(id)arg0 inAppleInternal:(BOOL)arg1 ;
+(id)_pluginWithName:(id)arg0 inSubpath:(id)arg1 inAppleInternal:(BOOL)arg2 ;
+(id)_validatedBundleAtURL:(id)arg0 ;
+(id)pluginBundlesAtSubpath:(id)arg0 ;
+(id)pluginWithName:(id)arg0 inSubpath:(id)arg1 ;
+(void)_populatePluginBundles:(id)arg0 atSubpath:(id)arg1 inAppleInternal:(BOOL)arg2 ;


@end


#endif