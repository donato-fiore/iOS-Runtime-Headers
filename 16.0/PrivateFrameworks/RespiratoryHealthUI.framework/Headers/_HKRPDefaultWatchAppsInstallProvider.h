// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKRPDEFAULTWATCHAPPSINSTALLPROVIDER_H
#define _HKRPDEFAULTWATCHAPPSINSTALLPROVIDER_H

@class NSString;
@protocol HKRPWatchInstallAppsProviding;

#import <Foundation/Foundation.h>


@interface _HKRPDefaultWatchAppsInstallProvider : NSObject <HKRPWatchInstallAppsProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)installApp:(id)arg0 onPairedDevice:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif