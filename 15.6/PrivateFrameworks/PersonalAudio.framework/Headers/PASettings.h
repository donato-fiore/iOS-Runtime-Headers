// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PASETTINGS_H
#define PASETTINGS_H

@class HCSettings, NSDictionary;


#import "PAConfiguration.h"

@interface PASettings : HCSettings

@property (retain, nonatomic) PAConfiguration *audiogramConfiguration;
@property (nonatomic) BOOL configurationCameFromEnrollment;
@property (nonatomic) BOOL configurationCameFromUser;
@property (nonatomic) NSUInteger currentEnrollmentProgress;
@property (nonatomic) NSUInteger personalAudioAccommodationTypes;
@property (nonatomic) BOOL personalMediaAutomationSkipHeadphoneRequirement;
@property (retain, nonatomic) PAConfiguration *personalMediaConfiguration;
@property (nonatomic) BOOL personalMediaDebugMode;
@property (nonatomic) BOOL personalMediaEnabled;
@property (nonatomic) BOOL personalSoundVisible;
@property (nonatomic) BOOL shouldUpdateAccessory;
@property (retain, nonatomic) NSDictionary *transparencyAmplification;
@property (retain, nonatomic) NSDictionary *transparencyBalance;
@property (retain, nonatomic) NSDictionary *transparencyBeamforming;
@property (retain, nonatomic) NSDictionary *transparencyCustomized;
@property (retain, nonatomic) NSDictionary *transparencyNoiseSupressor;
@property (retain, nonatomic) NSDictionary *transparencyTone;


+(id)sharedInstance;
-(BOOL)shouldStoreLocally;
-(BOOL)transparencyBeamformingForAddress:(id)arg0 ;
-(BOOL)transparencyCustomizedForAddress:(id)arg0 ;
-(CGFloat)transparencyAmplificationForAddress:(id)arg0 ;
-(CGFloat)transparencyBalanceForAddress:(id)arg0 ;
-(CGFloat)transparencyNoiseSupressorForAddress:(id)arg0 ;
-(CGFloat)transparencyToneForAddress:(id)arg0 ;
-(id)configurationWithKey:(id)arg0 ;
-(id)keysToSync;
-(id)preferenceDomain;
-(id)preferenceKeyForSelector:(SEL)arg0 ;
-(void)logMessage:(id)arg0 ;
-(void)setConfiguration:(id)arg0 forKey:(id)arg1 ;


@end


#endif