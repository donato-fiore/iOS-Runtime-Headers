// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HPSSPATIALPROFILEMANAGER_H
#define HPSSPATIALPROFILEMANAGER_H


#import <Foundation/Foundation.h>


@interface HPSSpatialProfileManager : NSObject



+(BOOL)isProfileExisting;
+(BOOL)isProxCardEnrollmentSupportedForDevice:(id)arg0 ;
+(BOOL)isProxCardShowed;
+(BOOL)isSettingsEnrollmentSupported;
+(id)profileEnrollmentViewController;
+(id)profileManagementSpecifier;
+(id)spatialProfileStatus;
+(void)setProxCardShowed:(BOOL)arg0 ;
+(void)setProxCardShowed:(BOOL)arg0 forDevice:(id)arg1 ;


@end


#endif