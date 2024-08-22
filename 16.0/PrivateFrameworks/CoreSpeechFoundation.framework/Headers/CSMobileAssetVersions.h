// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSMOBILEASSETVERSIONS_H
#define CSMOBILEASSETVERSIONS_H


#import <Foundation/Foundation.h>


@interface CSMobileAssetVersions : NSObject



+(NSUInteger)getVoiceTriggerCurrentCompatibilityVersion;
+(NSUInteger)getVoiceTriggerCurrentCompatibilityVersionWithSupportMphAssets:(BOOL)arg0 deviceIsIPad:(BOOL)arg1 deviceIsWatch:(BOOL)arg2 deviceIsHorseman:(BOOL)arg3 deviceIsOSX:(BOOL)arg4 deviceIsTV:(BOOL)arg5 deviceIsIOS:(BOOL)arg6 ;
+(id)getVoiceTriggerAssetTypeString;
+(id)getVoiceTriggerAssetTypeStringWithSupportMphAssets:(BOOL)arg0 deviceIsIPad:(BOOL)arg1 deviceIsWatch:(BOOL)arg2 deviceIsHorseman:(BOOL)arg3 deviceIsOSX:(BOOL)arg4 deviceIsTV:(BOOL)arg5 deviceIsIOS:(BOOL)arg6 ;


@end


#endif