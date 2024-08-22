// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRUIFEATURES_H
#define TVRUIFEATURES_H


#import <Foundation/Foundation.h>


@interface TVRUIFeatures : NSObject



+(BOOL)_isInternalInstall;
+(BOOL)_valueForInternalInstallWithBlock:(id)arg0 ;
+(BOOL)ghostdogEnabled;
+(BOOL)isHintsDebugUIEnabled;
+(BOOL)isTapToRadarEnabled;
+(BOOL)isWakeToRemoteOnLockScreenDisabled;
+(BOOL)persistHintsUIEnabled;
+(BOOL)rapportEnabled;
+(BOOL)updogEnabled;
+(id)_globalPrefForKey:(id)arg0 ;


@end


#endif