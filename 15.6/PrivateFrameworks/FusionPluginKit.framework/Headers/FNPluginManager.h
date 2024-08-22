// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FNPLUGINMANAGER_H
#define FNPLUGINMANAGER_H

@class NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface FNPluginManager : NSObject

@property (retain, nonatomic) NSMutableSet *pluginBundlePaths; // ivar: _pluginBundlePaths
@property (retain, nonatomic) NSMutableSet *pluginBundles; // ivar: _pluginBundles
@property (retain, nonatomic) NSMutableSet *pluginInstances; // ivar: _pluginInstances
@property (retain, nonatomic) NSMutableDictionary *pluginMessage; // ivar: _pluginMessage


+(id)sharedManager;
-(NSUInteger)initPlugins;
-(NSUInteger)removePlugins;
-(NSUInteger)startPlugins;
-(NSUInteger)stopPlugins;
-(id)getBundlePaths:(id)arg0 ;
-(id)getClient:(id)arg0 ;
-(id)init;
-(void)loadBundles;


@end


#endif