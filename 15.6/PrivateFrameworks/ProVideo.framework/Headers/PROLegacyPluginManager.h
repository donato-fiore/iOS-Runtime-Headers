// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PROLEGACYPLUGINMANAGER_H
#define PROLEGACYPLUGINMANAGER_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol PROAPIAccessing;

#import <Foundation/Foundation.h>


@interface PROLegacyPluginManager : NSObject <PROAPIAccessing>

 {
    NSMutableDictionary *_pluginRegistry;
    NSMutableArray *_pluginProtocols;
    NSMutableArray *_pluginSearchDirectories;
    *__CFDictionary _apiRegistry;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)pluginManager;
-(id)apiForProtocol:(id)arg0 ;
-(id)init;
-(int)addPluginProtocol:(id)arg0 ;
-(int)addPluginSearchDirectory:(id)arg0 ;
-(int)getBundlePath:(*id)arg0 forPluginClassName:(id)arg1 ;
-(int)getNumPluginsForProtocol:(id)arg0 ;
-(int)getPluginClass:(*Class)arg0 forPluginClassName:(id)arg1 ;
-(int)getPluginClass:(*Class)arg0 forPluginDisplayName:(id)arg1 ;
-(int)getPluginClass:(*Class)arg0 forPluginDisplayName:(id)arg1 forProtocol:(id)arg2 ;
-(int)getPluginClassNames:(id)arg0 forGroupName:(id)arg1 ;
-(int)getPluginClassNames:(id)arg0 forGroupName:(id)arg1 forProtocol:(id)arg2 ;
-(int)getPluginClassNames:(id)arg0 forProtocol:(id)arg1 ;
-(int)getPluginDisplayNames:(id)arg0 forGroupName:(id)arg1 ;
-(int)getPluginDisplayNames:(id)arg0 forGroupName:(id)arg1 forProtocol:(id)arg2 ;
-(int)getPluginDisplayNames:(id)arg0 forProtocol:(id)arg1 ;
-(int)getPluginGroupNames:(id)arg0 ;
-(int)getPluginGroupNames:(id)arg0 forProtocol:(id)arg1 ;
-(int)getPluginInfoDictionaries:(id)arg0 forProtocol:(id)arg1 ;
-(int)loadPluginClass:(*Class)arg0 withName:(id)arg1 fromBundlePath:(id)arg2 ;
-(int)registerBundle:(id)arg0 withPluginDictionaryList:(id)arg1 ;
-(int)registerBundleDynamic:(id)arg0 ;
-(int)registerPluginWithDictionary:(id)arg0 withClassName:(id)arg1 withBundle:(id)arg2 withProtocolName:(id)arg3 ;
-(int)removeApiForProtocol:(id)arg0 ;
-(int)scanForPlugins;
-(int)scanForPluginsInDirectory:(id)arg0 ;
-(int)setApiObject:(id)arg0 forProtocol:(id)arg1 ;
-(int)setApiObjects:(id)arg0 forProtocols:(id)arg1 ;
-(int)setPluginSearchDirectories:(id)arg0 ;
-(void)dealloc;
-(void)localizeKey:(id)arg0 withDefault:(id)arg1 forPlugin:(id)arg2 fromBundle:(id)arg3 ;


@end


#endif