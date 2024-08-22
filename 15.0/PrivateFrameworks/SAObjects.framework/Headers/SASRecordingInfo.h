// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASRECORDINGINFO_H
#define SASRECORDINGINFO_H

@class NSNumber, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASRecordingInfo : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSNumber *activationAudioAlertDuration;
@property (copy, nonatomic) NSNumber *activationAudioAlertStartTime;
@property (copy, nonatomic) NSNumber *activationHapticAlertDuration;
@property (copy, nonatomic) NSNumber *activationHapticAlertStartTime;
@property (copy, nonatomic) NSNumber *activationTime;
@property (copy, nonatomic) NSString *alertType;
@property (copy, nonatomic) NSNumber *beamFormingStartTime;
@property (copy, nonatomic) NSNumber *buttonDowntime;
@property (copy, nonatomic) NSNumber *buttonUpTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ringerSwitchOff;
@property (readonly) Class superclass;
@property (nonatomic) BOOL zeroLatencyLaunch;


+(id)recordingInfo;
+(id)recordingInfoWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif