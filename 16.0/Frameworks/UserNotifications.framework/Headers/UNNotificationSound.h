// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNNOTIFICATIONSOUND_H
#define UNNOTIFICATIONSOUND_H

@class NSString, NSNumber, NSURL;
@protocol NSMutableCopying, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UNNotificationSound : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *alertTopic; // ivar: _alertTopic
@property (readonly, nonatomic) NSInteger alertType; // ivar: _alertType
@property (readonly, copy, nonatomic) NSString *audioCategory; // ivar: _audioCategory
@property (readonly, copy, nonatomic) NSNumber *audioVolume; // ivar: _audioVolume
@property (readonly, nonatomic, getter=isCritical) BOOL critical; // ivar: _critical
@property (readonly, nonatomic) CGFloat maximumDuration; // ivar: _maximumDuration
@property (readonly, nonatomic) BOOL shouldIgnoreAccessibilityDisabledVibrationSetting; // ivar: _shouldIgnoreAccessibilityDisabledVibrationSetting
@property (readonly, nonatomic) BOOL shouldIgnoreRingerSwitch; // ivar: _shouldIgnoreRingerSwitch
@property (readonly, nonatomic) BOOL shouldRepeat; // ivar: _shouldRepeat
@property (readonly, copy, nonatomic) NSString *toneFileName; // ivar: _toneFileName
@property (readonly, copy, nonatomic) NSURL *toneFileURL; // ivar: _toneFileURL
@property (readonly, copy, nonatomic) NSString *toneIdentifier; // ivar: _toneIdentifier
@property (readonly, nonatomic) NSUInteger toneMediaLibraryItemIdentifier; // ivar: _toneMediaLibraryItemIdentifier
@property (readonly, copy, nonatomic) NSString *vibrationIdentifier; // ivar: _vibrationIdentifier
@property (readonly, copy, nonatomic) NSURL *vibrationPatternFileURL; // ivar: _vibrationPatternFileURL


+(BOOL)supportsSecureCoding;
+(id)_soundWithAlertType:(NSInteger)arg0 audioVolume:(id)arg1 critical:(BOOL)arg2 toneFileName:(id)arg3 ;
+(id)criticalSoundNamed:(id)arg0 ;
+(id)criticalSoundNamed:(id)arg0 withAudioVolume:(float)arg1 ;
+(id)defaultCriticalSound;
+(id)defaultCriticalSoundWithAudioVolume:(float)arg0 ;
+(id)defaultRingtoneSound;
+(id)defaultSound;
+(id)defaultSystemSound;
+(id)ringtoneSoundNamed:(id)arg0 ;
+(id)soundNamed:(id)arg0 ;
+(id)soundWithAlertType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithAlertType:(NSInteger)arg0 alertTopic:(id)arg1 audioCategory:(id)arg2 audioVolume:(id)arg3 critical:(BOOL)arg4 maximumDuration:(CGFloat)arg5 shouldIgnoreAccessibilityDisabledVibrationSetting:(BOOL)arg6 shouldIgnoreRingerSwitch:(BOOL)arg7 shouldRepeat:(BOOL)arg8 toneFileName:(id)arg9 toneFileURL:(id)arg10 toneIdentifier:(id)arg11 toneMediaLibraryItemIdentifier:(NSUInteger)arg12 vibrationIdentifier:(id)arg13 vibrationPatternFileURL:(id)arg14 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif