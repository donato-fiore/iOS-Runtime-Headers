// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPAPPLICATIONLAUNCHERSWIFT_H
#define CPAPPLICATIONLAUNCHERSWIFT_H


#import <Foundation/Foundation.h>


@interface CPApplicationLauncherSwift : NSObject {
    ? behaviors;
    ? featureFlags;
    ? pegasusLaunchBehavior;
}




-(id)init;
-(void)authorizePiPForActivitySession:(id)arg0 completion:(id)arg1 ;
-(void)launchAppForActivitySession:(id)arg0 options:(NSInteger)arg1 completion:(id)arg2 ;
-(void)revokeBackgroundAuthorizationForBundleID:(id)arg0 ;
-(void)revokeBackgroundAuthorizationForSession:(id)arg0 ;


@end


#endif