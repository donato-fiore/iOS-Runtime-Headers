// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGDPLUGINMANAGER_H
#define SGDPLUGINMANAGER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface SGDPluginManager : NSObject {
    NSDictionary *_plugins;
}




+(id)sharedInstance;
+(void)_processHistoricalDataRequestsForPluginIdentifier:(id)arg0 result:(id)arg1 ;
-(id)_processSearchableItem:(id)arg0 harvestMetrics:(id)arg1 userAction:(id)arg2 ;
-(id)init;
-(id)pluginIdentifiers;
-(id)processSearchableItem:(id)arg0 harvestMetrics:(id)arg1 ;
-(id)processUserAction:(id)arg0 searchableItem:(id)arg1 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg0 domainIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg0 uniqueIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)processInteraction:(id)arg0 bundleIdentifier:(id)arg1 protectionClass:(id)arg2 completion:(id)arg3 ;
-(void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg0 uniqueIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)setPlugins:(id)arg0 ;


@end


#endif