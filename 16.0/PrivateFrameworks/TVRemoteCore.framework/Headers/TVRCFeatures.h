// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRCFEATURES_H
#define TVRCFEATURES_H


#import <Foundation/Foundation.h>


@interface TVRCFeatures : NSObject



+(BOOL)ghostdogEnabled;
+(BOOL)isPersistOnLockScreenEnabled;
+(BOOL)isWakeToRemoteOnLockScreenDisabled;
+(BOOL)legacyDevicesDisabled;
+(BOOL)rapportEnabled;
+(BOOL)tvPushToTalkEnabled;
+(BOOL)updogEnabled;


@end


#endif