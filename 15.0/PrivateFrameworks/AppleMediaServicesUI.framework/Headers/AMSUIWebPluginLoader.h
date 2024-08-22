// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIWEBPLUGINLOADER_H
#define AMSUIWEBPLUGINLOADER_H

@class NSDictionary, NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "AMSUIWebClientContext.h"

@interface AMSUIWebPluginLoader : NSObject

@property (readonly, weak, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (readonly, nonatomic) NSDictionary *installedPluginURLs; // ivar: _installedPluginURLs
@property (readonly, nonatomic) NSArray *loadedPlugins;
@property (retain, nonatomic) NSMutableDictionary *loadedPluginsMap; // ivar: _loadedPluginsMap


-(id)_loadInstalledPlugins;
-(id)initWithContext:(id)arg0 ;
-(id)pluginForBundleIdentifier:(id)arg0 ;


@end


#endif