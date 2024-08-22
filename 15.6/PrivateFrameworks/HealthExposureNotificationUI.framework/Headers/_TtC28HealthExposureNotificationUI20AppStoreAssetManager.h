// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI20APPSTOREASSETMANAGER_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI20APPSTOREASSETMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC28HealthExposureNotificationUI20AppStoreAssetManager : NSObject



+(void)accessAppFor:(id)arg0 presentingViewController:(id)arg1 completion:(id)arg2 ;
+(void)fetchAssetForAppBundleId:(id)arg0 completion:(id)arg1 ;
+(void)fetchAssetNameForAppBundleId:(id)arg0 completion:(id)arg1 ;
+(void)openAppStoreFromViewController:(id)arg0 ;
+(void)presentAppStoreProductPage:(id)arg0 from:(id)arg1 ;
-(id)init;


@end


#endif