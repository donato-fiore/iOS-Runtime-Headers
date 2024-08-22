// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BBSOUND_H
#define BBSOUND_H

@class NSString, TLAlertConfiguration, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BBSound : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) TLAlertConfiguration *alertConfiguration; // ivar: _alertConfiguration
@property (readonly, nonatomic) NSInteger alertType;
@property (copy, nonatomic) NSString *audioCategory; // ivar: _audioCategory
@property (readonly, nonatomic) BOOL ignoreRingerSwitch;
@property (nonatomic) CGFloat maxDuration; // ivar: _maxDuration
@property (nonatomic, getter=isRepeating) BOOL repeats; // ivar: _repeats
@property (copy, nonatomic) NSString *ringtoneName; // ivar: _ringtoneName
@property (copy, nonatomic) NSString *songPath; // ivar: _songPath
@property (nonatomic) NSUInteger soundBehavior; // ivar: _soundBehavior
@property (nonatomic) NSInteger soundType; // ivar: _soundType
@property (nonatomic) unsigned int systemSoundID; // ivar: _systemSoundID
@property (readonly, copy, nonatomic) NSString *toneIdentifier;
@property (readonly, copy, nonatomic) NSString *vibrationIdentifier;
@property (copy, nonatomic) NSDictionary *vibrationPattern; // ivar: _vibrationPattern


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)awakeAfterUsingCoder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithToneAlert:(NSInteger)arg0 ;
-(id)initWithToneAlert:(NSInteger)arg0 accountIdentifier:(id)arg1 ;
-(id)initWithToneAlert:(NSInteger)arg0 accountIdentifier:(id)arg1 ignoreRingerSwitch:(BOOL)arg2 ;
-(id)initWithToneAlert:(NSInteger)arg0 accountIdentifier:(id)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 ignoreRingerSwitch:(BOOL)arg4 ;
-(id)initWithToneAlert:(NSInteger)arg0 ignoreRingerSwitch:(BOOL)arg1 ;
-(id)initWithToneAlert:(NSInteger)arg0 toneIdentifier:(id)arg1 vibrationIdentifier:(id)arg2 ;
-(id)initWithToneAlert:(NSInteger)arg0 toneIdentifier:(id)arg1 vibrationIdentifier:(id)arg2 ignoreRingerSwitch:(BOOL)arg3 ;
-(id)initWithToneAlertConfiguration:(id)arg0 ;
-(id)replacementObjectForCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif