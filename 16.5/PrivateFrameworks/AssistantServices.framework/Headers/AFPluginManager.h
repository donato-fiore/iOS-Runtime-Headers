// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFPLUGINMANAGER_H
#define AFPLUGINMANAGER_H

@class NSString, NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface AFPluginManager : NSObject {
    NSString *_path;
    NSArray *_domainKeys;
    id *_factoryInitializationBlock;
    NSMutableDictionary *_domainKeyDictionary;
    BOOL _hasLoadedBundles;
}




+(id)pluginManagerForPath:(id)arg0 domainKeys:(id)arg1 factoryInitializationBlock:(id)arg2 ;
-(id)description;
-(id)initWithPath:(id)arg0 domainKeys:(id)arg1 factoryInitializationBlock:(id)arg2 ;
-(void)_loadBundlesIfNeeded;
-(void)_registerBundle:(id)arg0 ;
-(void)enumerateFactoryInstancesForDomainKey:(id)arg0 groupIdentifier:(id)arg1 classIdentifier:(id)arg2 usingBlock:(id)arg3 ;
-(void)preloadBundles;


@end


#endif