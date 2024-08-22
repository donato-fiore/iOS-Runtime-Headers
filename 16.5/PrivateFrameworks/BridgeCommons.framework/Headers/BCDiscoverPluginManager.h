// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCDISCOVERPLUGINMANAGER_H
#define BCDISCOVERPLUGINMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface BCDiscoverPluginManager : NSObject

@property (copy, nonatomic) NSArray *discoverPlugins; // ivar: _discoverPlugins
@property (readonly, nonatomic) os_unfair_lock_s discoverPluginsLock; // ivar: _discoverPluginsLock


+(id)_discoverPluginDirectoryURL;
+(id)discoverPluginBundles;
-(id)_buildDiscoverPlugins;
-(id)init;
-(id)sortedPluginsBySectionForInput:(id)arg0 ;


@end


#endif