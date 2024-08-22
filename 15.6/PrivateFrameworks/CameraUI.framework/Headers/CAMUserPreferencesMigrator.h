// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMUSERPREFERENCESMIGRATOR_H
#define CAMUSERPREFERENCESMIGRATOR_H


#import <Foundation/Foundation.h>


@interface CAMUserPreferencesMigrator : NSObject



+(NSInteger)_HDRModeForLegacyHDRMode:(NSInteger)arg0 ;
+(NSInteger)_captureModeForLegacyCameraMode:(NSInteger)arg0 ;
+(NSInteger)_flashModeForLegacyFlashMode:(NSInteger)arg0 ;
+(NSInteger)_previewViewAspectModeForLegacyAspectMode:(NSInteger)arg0 ;
+(void)migrateLegacyPreferences;


@end


#endif