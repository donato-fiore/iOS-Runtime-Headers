// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PEPSERVICECONFIGURATION_H
#define PEPSERVICECONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PEPServiceConfiguration : NSObject {
    NSString *_cacheFilePath;
    BOOL _shouldDownloadNetworkConfigFile;
    CGFloat _cachedFileLastModifyDate;
}




+(id)sharedInstance;
-(BOOL)registerNetworkDefaultsForAppID:(id)arg0 ;
-(BOOL)registerNetworkDefaultsForAppIDs:(id)arg0 forceUpdate:(BOOL)arg1 ;
-(id)init;
-(void)_postNotification;
-(void)_updateDefaults:(id)arg0 ;
-(void)dealloc;


@end


#endif