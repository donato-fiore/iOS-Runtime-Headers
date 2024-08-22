// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STUSAGEBUNDLEREGISTRY_H
#define STUSAGEBUNDLEREGISTRY_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface STUsageBundleRegistry : NSObject

@property (retain) NSDictionary *reporters; // ivar: _reporters
@property (retain) NSDictionary *usageApps; // ivar: _usageApps


-(id)allAppsWithUsageBundles;
-(id)init;
-(id)loadBundlesForReporters:(id)arg0 ;
-(id)loadReporters;
-(id)usageBundleForIdentifier:(id)arg0 ;


@end


#endif