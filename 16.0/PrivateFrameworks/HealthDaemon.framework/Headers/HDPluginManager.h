// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDPLUGINMANAGER_H
#define HDPLUGINMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "HDDaemon.h"

@interface HDPluginManager : NSObject {
    NSArray *_plugins;
}


@property (copy, nonatomic) NSArray *allowablePluginDirectoryPaths; // ivar: _allowablePluginDirectoryPaths
@property (weak, nonatomic) HDDaemon *daemon; // ivar: _daemon


-(id)_builtInPluginClasses;
-(id)_createPluginsFromClasses:(id)arg0 ;
-(id)_pluginClasses;
-(id)_pluginDirectoryPaths;
-(id)createExtensionsForDaemon:(id)arg0 ;
-(id)createExtensionsForProfile:(id)arg0 ;
-(id)initWithDaemon:(id)arg0 ;
-(id)pluginsConformingToProtocol:(id)arg0 ;
-(void)notifyPluginsOfDatabaseObliteration;


@end


#endif