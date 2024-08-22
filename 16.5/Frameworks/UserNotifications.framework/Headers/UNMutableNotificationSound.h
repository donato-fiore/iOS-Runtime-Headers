// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNMUTABLENOTIFICATIONSOUND_H
#define UNMUTABLENOTIFICATIONSOUND_H

@class NSString, NSNumber, NSURL;


#import "UNNotificationSound.h"

@interface UNMutableNotificationSound : UNNotificationSound

@property (copy, nonatomic) NSString *alertTopic;
@property (copy, nonatomic) NSString *audioCategory;
@property (copy, nonatomic) NSNumber *audioVolume;
@property (nonatomic, getter=isCritical) BOOL critical;
@property (nonatomic) CGFloat maximumDuration;
@property (nonatomic) BOOL shouldIgnoreAccessibilityDisabledVibrationSetting;
@property (nonatomic) BOOL shouldIgnoreRingerSwitch;
@property (nonatomic) BOOL shouldRepeat;
@property (copy, nonatomic) NSString *toneFileName;
@property (copy, nonatomic) NSURL *toneFileURL;
@property (copy, nonatomic) NSString *toneIdentifier;
@property (nonatomic) NSUInteger toneMediaLibraryItemIdentifier;
@property (copy, nonatomic) NSString *vibrationIdentifier;
@property (copy, nonatomic) NSURL *vibrationPatternFileURL;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif