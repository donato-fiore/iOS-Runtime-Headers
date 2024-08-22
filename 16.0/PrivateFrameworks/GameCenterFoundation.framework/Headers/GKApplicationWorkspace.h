// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKAPPLICATIONWORKSPACE_H
#define GKAPPLICATIONWORKSPACE_H

@class LSApplicationWorkspace;

#import <Foundation/Foundation.h>


@interface GKApplicationWorkspace : NSObject

@property (retain, nonatomic) LSApplicationWorkspace *lsWorkspace; // ivar: _lsWorkspace


+(NSInteger)getPlatformForBundleID:(id)arg0 ;
+(id)defaultWorkspace;
-(BOOL)applicationIsInstalled:(id)arg0 ;
-(id)applicationProxyForBundleID:(id)arg0 ;
-(id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)arg0 ;
-(id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)arg0 ;
-(id)initWithWorkspace:(id)arg0 ;
-(void)launchApplication:(id)arg0 ;
-(void)openGameCenterSettings;
-(void)openICloudSettings;
-(void)openSettings;
-(void)openURL:(id)arg0 ;


@end


#endif