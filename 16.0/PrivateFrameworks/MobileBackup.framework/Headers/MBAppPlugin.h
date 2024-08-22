// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MBAPPPLUGIN_H
#define MBAPPPLUGIN_H

@class NSArray, NSString, NSDictionary;


#import "MBContainer.h"

@interface MBAppPlugin : MBContainer

@property (readonly, nonatomic) NSArray *allAppGroupContainers;
@property (readonly, nonatomic) NSString *bundleDir;
@property (readonly, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSString *entitlementsRelativePath;
@property (readonly, nonatomic) NSArray *groups;
@property (readonly, nonatomic) NSString *ownerBundleID;


+(id)appPluginWithPropertyList:(id)arg0 ;
-(id)domain;


@end


#endif