// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSOUND_H
#define MTSOUND_H

@class NSString, NSNumber;
@protocol MTDictionarySerializable, NAEquatable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MTSound : NSObject <MTDictionarySerializable, NAEquatable, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *mediaItemIdentifier; // ivar: _mediaItemIdentifier
@property (readonly, nonatomic) NSUInteger soundType; // ivar: _soundType
@property (readonly, nonatomic) NSNumber *soundVolume; // ivar: _soundVolume
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *toneIdentifier; // ivar: _toneIdentifier
@property (readonly, nonatomic) NSString *vibrationIdentifier; // ivar: _vibrationIdentifier


+(BOOL)supportsSecureCoding;
+(NSInteger)_alertTypeForCategory:(NSUInteger)arg0 ;
+(id)_loadDefaultAlarmSound;
+(id)_loadDefaultTimerSound;
+(id)defaultSoundForCategory:(NSUInteger)arg0 ;
+(id)descriptionForCategory:(NSUInteger)arg0 ;
+(id)songSoundWithIdentifier:(id)arg0 vibrationIdentifier:(id)arg1 volume:(id)arg2 ;
+(id)toneSoundWithIdentifier:(id)arg0 vibrationIdentifer:(id)arg1 volume:(id)arg2 ;
+(void)_saveDefaultAlarmSound:(id)arg0 ;
+(void)_saveDefaultTimerSound:(id)arg0 ;
+(void)setDefaultSound:(id)arg0 forCategory:(NSUInteger)arg1 ;
-(BOOL)interruptAudio;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSound:(id)arg0 ;
-(BOOL)isSilent;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaItemIdentifier:(id)arg0 vibrationIdentifier:(id)arg1 volume:(id)arg2 ;
-(id)initWithSound:(id)arg0 usingVolume:(id)arg1 ;
-(id)initWithToneIdentifier:(id)arg0 vibrationIdentifer:(id)arg1 volume:(id)arg2 ;
-(id)previewWithCompletionHandler:(id)arg0 ;
-(id)soundByUpdatingVibrationIdentifier:(id)arg0 ;
-(id)soundByUpdatingVolume:(id)arg0 ;
-(id)unSound;
-(id)unSoundForCategory:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updatePreview:(id)arg0 ;


@end


#endif