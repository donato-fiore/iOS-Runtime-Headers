// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLALERTCONFIGURATION_H
#define TLALERTCONFIGURATION_H

@class NSString, NSURL, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TLAlertConfiguration : NSObject <NSCopying, NSSecureCoding>

 {
    BOOL _isFrozen;
    BOOL _hasCustomRepeatingFlag;
}


@property (nonatomic, setter=_setAudioPlaybackInitiationDelay:) CGFloat _audioPlaybackInitiationDelay; // ivar: _audioPlaybackInitiationDelay
@property (nonatomic, setter=_setAudioVolumeRampingDuration:) CGFloat _audioVolumeRampingDuration; // ivar: _audioVolumeRampingDuration
@property (readonly, nonatomic) BOOL _hasCustomAudioVolume; // ivar: _hasCustomAudioVolume
@property (copy, nonatomic) NSString *audioCategory; // ivar: _audioCategory
@property (nonatomic) float audioVolume; // ivar: _audioVolume
@property (copy, nonatomic) NSURL *externalToneFileURL; // ivar: _externalToneFileURL
@property (nonatomic) NSUInteger externalToneMediaLibraryItemIdentifier; // ivar: _externalToneMediaLibraryItemIdentifier
@property (copy, nonatomic) NSDictionary *externalVibrationPattern; // ivar: _externalVibrationPattern
@property (copy, nonatomic) NSURL *externalVibrationPatternFileURL; // ivar: _externalVibrationPatternFileURL
@property (nonatomic, getter=isForPreview) BOOL forPreview; // ivar: _forPreview
@property (nonatomic) CGFloat maximumDuration; // ivar: _maximumDuration
@property (nonatomic) BOOL shouldForcePlayingAtUserSelectedAudioVolume; // ivar: _shouldForcePlayingAtUserSelectedAudioVolume
@property (nonatomic) BOOL shouldIgnoreAccessibilityDisabledVibrationSetting; // ivar: _shouldIgnoreAccessibilityDisabledVibrationSetting
@property (nonatomic) BOOL shouldIgnoreRingerSwitch; // ivar: _shouldIgnoreRingerSwitch
@property (nonatomic) BOOL shouldRepeat; // ivar: _shouldRepeat
@property (copy, nonatomic) NSString *toneIdentifier; // ivar: _toneIdentifier
@property (copy, nonatomic) NSString *topic; // ivar: _topic
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (copy, nonatomic) NSString *vibrationIdentifier; // ivar: _vibrationIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(void)_freeze;
-(void)_throwForFrozenInstance;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif