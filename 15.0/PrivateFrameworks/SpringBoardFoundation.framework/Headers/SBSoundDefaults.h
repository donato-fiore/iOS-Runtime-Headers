// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSOUNDDEFAULTS_H
#define SBSOUNDDEFAULTS_H

@class NSString;


#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBSoundDefaults : SBAbstractSpringBoardDefaultDomain

@property (retain, nonatomic) NSString *calendarAlarmPath;
@property (readonly, nonatomic) BOOL debugEUVolumeLimit;
@property (readonly, nonatomic) BOOL playSoundOnDeviceWake;
@property (nonatomic, getter=isRingerMuted) BOOL ringerMuted;
@property (readonly, nonatomic) BOOL vibrateWhenRinging;
@property (readonly, nonatomic) BOOL vibrateWhenSilent;


-(void)_bindAndRegisterDefaults;


@end


#endif