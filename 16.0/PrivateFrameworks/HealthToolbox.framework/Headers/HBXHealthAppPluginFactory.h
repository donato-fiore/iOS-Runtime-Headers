// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HBXHEALTHAPPPLUGINFACTORY_H
#define HBXHEALTHAPPPLUGINFACTORY_H


#import <Foundation/Foundation.h>


@interface HBXHealthAppPluginFactory : NSObject



+(id)_createPluginAddDataViewControllerProvidingFromPluginBundle:(id)arg0 ;
+(id)_loadBundleForPluginPath:(id)arg0 ;
+(id)_loadPluginBundleForDisplayType:(id)arg0 ;
+(id)_makeDataListViewControllerProvidingForDisplayType:(id)arg0 ;
+(id)_pluginPathForDisplayType:(id)arg0 ;
+(id)makeDataListViewControllerForHealthStore:(id)arg0 displayType:(id)arg1 predicate:(id)arg2 ;


@end


#endif