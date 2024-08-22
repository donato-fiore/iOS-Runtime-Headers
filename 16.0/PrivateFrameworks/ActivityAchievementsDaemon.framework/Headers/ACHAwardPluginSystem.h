// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHAWARDPLUGINSYSTEM_H
#define ACHAWARDPLUGINSYSTEM_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ACHAwardPluginSystem : NSObject {
    NSArray *_plugins;
}




-(Class)_loadPrincipalClassConformingToProtocols:(id)arg0 fromBundleAtPath:(id)arg1 ;
-(id)_createPluginsFromClasses:(id)arg0 ;
-(id)_loadPrincipalClassesConformingToProtocols:(id)arg0 fromBundlesInDirectoryAtPath:(id)arg1 error:(*id)arg2 ;
-(id)_pluginClasses;
-(id)_pluginDirectoryPath;
-(id)_principalClassProtocols;
-(id)createTemplateAssetSources;
-(id)init;
-(void)_loadPlugins;


@end


#endif