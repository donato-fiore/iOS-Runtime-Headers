// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKPLUGINLOADER_H
#define HKPLUGINLOADER_H


#import <Foundation/Foundation.h>


@interface HKPluginLoader : NSObject



+(Class)loadPrincipalClassConformingToProtocols:(id)arg0 fromBundleAtURL:(id)arg1 skipIfLoaded:(BOOL)arg2 ;
+(id)loadPrincipalClassesConformingToProtocols:(id)arg0 fromBundlesInDirectoryAtURL:(id)arg1 skipLoadedBundles:(BOOL)arg2 error:(*id)arg3 ;


@end


#endif