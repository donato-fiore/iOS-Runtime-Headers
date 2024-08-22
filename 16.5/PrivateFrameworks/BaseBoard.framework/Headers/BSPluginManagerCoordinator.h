// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSPLUGINMANAGERCOORDINATOR_H
#define BSPLUGINMANAGERCOORDINATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface BSPluginManagerCoordinator : NSObject {
    NSMutableDictionary *_managersByBundleID;
}




+(id)sharedInstance;
-(id)mainPluginManager;
-(id)pluginManagerForBundle:(id)arg0 ;
-(void)registerPlugins;
-(void)registerPluginsFromBundle:(id)arg0 ;


@end


#endif