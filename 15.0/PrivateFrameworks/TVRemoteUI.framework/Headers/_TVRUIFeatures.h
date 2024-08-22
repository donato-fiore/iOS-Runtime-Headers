// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRUIFEATURES_H
#define _TVRUIFEATURES_H


#import <Foundation/Foundation.h>


@interface _TVRUIFeatures : NSObject



+(BOOL)_isInternalInstall;
+(BOOL)_valueForInternalInstallWithBlock:(id)arg0 ;
+(BOOL)isHintsDebugUIEnabled;
+(BOOL)isTapToRadarEnabled;
+(BOOL)isWakeToRemoteOnLockScreenDisabled;
+(BOOL)persistHintsUIEnabled;
+(BOOL)rapportEnabled;
+(BOOL)updogEnabled;
+(id)_globalPrefForKey:(id)arg0 ;


@end


#endif