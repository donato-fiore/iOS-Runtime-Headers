// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLACCESSIBILITYAGENT_H
#define PLACCESSIBILITYAGENT_H

@class PLAgent, PLCFNotificationOperatorComposition;



@interface PLAccessibilityAgent : PLAgent

@property (readonly) PLCFNotificationOperatorComposition *notificationBackTapChanged; // ivar: _notificationBackTapChanged
@property (readonly) PLCFNotificationOperatorComposition *notificationBackgroundContrastChanged; // ivar: _notificationBackgroundContrastChanged
@property (readonly) PLCFNotificationOperatorComposition *notificationFacetimeCaptioningChanged; // ivar: _notificationFacetimeCaptioningChanged
@property (readonly) PLCFNotificationOperatorComposition *notificationReduceMotionChanged; // ivar: _notificationReduceMotionChanged
@property (readonly) PLCFNotificationOperatorComposition *notificationSoundRecognitionChanged; // ivar: _notificationSoundRecognitionChanged
@property (readonly) PLCFNotificationOperatorComposition *notificationSpeakScreenChanged; // ivar: _notificationSpeakScreenChanged
@property (readonly) PLCFNotificationOperatorComposition *notificationSpeakSelectionChanged; // ivar: _notificationSpeakSelectionChanged
@property (readonly) PLCFNotificationOperatorComposition *notificationSystemCaptioningChanged; // ivar: _notificationSystemCaptioningChanged
@property (readonly) PLCFNotificationOperatorComposition *notificationVoiceControlChanged; // ivar: _notificationVoiceControlChanged


+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventForwardNameAssistiveTouch;
+(id)entryEventForwardNameBackTap;
+(id)entryEventForwardNameBackgroundContrast;
+(id)entryEventForwardNameFacetimeCaptioning;
+(id)entryEventForwardNameHandGestures;
+(id)entryEventForwardNameReduceMotion;
+(id)entryEventForwardNameSoundRecognition;
+(id)entryEventForwardNameSpeakScreen;
+(id)entryEventForwardNameSpeakSelection;
+(id)entryEventForwardNameSystemCaptioning;
+(id)entryEventForwardNameVoiceControl;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)init;
-(void)initOperatorDependancies;
-(void)initTaskOperatorDependancies;
-(void)log;
-(void)logEventForwardBackTap;
-(void)logEventForwardBackgroundContrast;
-(void)logEventForwardFacetimeCaptioning;
-(void)logEventForwardReduceMotion;
-(void)logEventForwardSoundRecognition;
-(void)logEventForwardSpeakScreen;
-(void)logEventForwardSpeakSelection;
-(void)logEventForwardSystemCaptioning;
-(void)logEventForwardVoiceControl;


@end


#endif