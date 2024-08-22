// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INSTALLEDAPPSCACHE_H
#define INSTALLEDAPPSCACHE_H


#import <Foundation/Foundation.h>


@interface InstalledAppsCache : NSObject



+(id)sharedInstance;
-(id)_bundleForPid:(int)arg0 ;
-(id)_bundlePathForPid:(int)arg0 ;
-(id)_localizedNameForBundle:(id)arg0 ;
-(id)_localizedNameForPath:(id)arg0 ;
-(id)_localizedNameFromInfoDict:(id)arg0 path:(id)arg1 ;
-(id)appNameForPid:(int)arg0 bundleId:(*id)arg1 ;
-(id)binaryNameForPid:(int)arg0 ;
-(id)bundlePathForPid:(int)arg0 stripXPCService:(BOOL)arg1 ;
-(id)pathForPid:(int)arg0 ;


@end


#endif