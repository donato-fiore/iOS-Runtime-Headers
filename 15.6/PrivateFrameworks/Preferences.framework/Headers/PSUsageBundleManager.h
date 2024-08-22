// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUSAGEBUNDLEMANAGER_H
#define PSUSAGEBUNDLEMANAGER_H

@class NSDictionary, NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface PSUsageBundleManager : NSObject {
    NSDictionary *_bundleMap;
    NSArray *_usageBundleApps;
    NSMutableArray *_storageReporters;
}




-(id)allUsageBundleApps;
-(void)_loadUsageBundlesWithHandler:(id)arg0 ;
-(void)vendUsageBundleAppsWithHandler:(id)arg0 ;


@end


#endif