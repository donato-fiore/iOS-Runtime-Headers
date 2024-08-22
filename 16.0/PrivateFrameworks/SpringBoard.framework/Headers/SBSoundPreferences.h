// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSOUNDPREFERENCES_H
#define SBSOUNDPREFERENCES_H


#import <Foundation/Foundation.h>


@interface SBSoundPreferences : NSObject



+(BOOL)vibrateWhenRinging;
+(BOOL)vibrateWhenSilent;
+(id)_soundDefaults;
+(id)calendarAlarmPath;
+(id)ringtoneIdentifier;
+(id)ringtonePath;


@end


#endif