// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQUICKNOTESESSIONSETTINGS_H
#define ICQUICKNOTESESSIONSETTINGS_H


#import <Foundation/Foundation.h>


@interface ICQuickNoteSessionSettings : NSObject



+(BOOL)hasAccountSupportingLockScreen;
+(NSInteger)sessionDuration;
+(NSInteger)showOnLockScreen;
+(NSInteger)showOnLockScreenSettingValue;
+(void)disableNotesOnLockScreenIfNecessary;
+(void)initialize;
+(void)setSessionDuration:(NSInteger)arg0 ;
+(void)setShowOnLockScreen:(NSInteger)arg0 ;
+(void)updateNotesOnLockScreenWhenAccountSupportingLockScreenAdded;


@end


#endif