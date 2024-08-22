// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBATTENTIONAWARENESSSETTINGS_H
#define SBATTENTIONAWARENESSSETTINGS_H

@class NSString;
@protocol MCProfileConnectionObserver;


#import "SBUISettings.h"

@interface SBAttentionAwarenessSettings : SBUISettings <MCProfileConnectionObserver>

 {
    BOOL _allowsAttentionAwareAutoLock;
    BOOL _supportsAttentionSensor;
    BOOL _shouldUseAttentionSensor;
    BOOL _isObservingDataSources;
    *AWNotification_s _attentionAwarenessToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat dimInterval; // ivar: _dimInterval
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat sampleInterval; // ivar: _sampleInterval
@property (nonatomic) BOOL shouldUseAttentionSensor;
@property (nonatomic) CGFloat sleepInterval; // ivar: _sleepInterval
@property (readonly) Class superclass;


+(BOOL)attentionSensorSupported;
+(id)settingsControllerModule;
-(void)dealloc;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)setDefaultValues;


@end


#endif