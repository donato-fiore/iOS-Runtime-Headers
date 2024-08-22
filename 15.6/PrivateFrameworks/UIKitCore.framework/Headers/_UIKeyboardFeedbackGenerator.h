// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKEYBOARDFEEDBACKGENERATOR_H
#define _UIKEYBOARDFEEDBACKGENERATOR_H



#import "UIFeedbackGenerator.h"
#import "_UIKeyboardFeedbackGeneratorConfiguration.h"

@interface _UIKeyboardFeedbackGenerator : UIFeedbackGenerator

@property (readonly, nonatomic, getter=_keyboardConfiguration) _UIKeyboardFeedbackGeneratorConfiguration *keyboardConfiguration;
@property (nonatomic) CGFloat lastNonReleaseActionTimestamp; // ivar: _lastNonReleaseActionTimestamp
@property (nonatomic, getter=_lastTypedKeyTimestamp, setter=_setLastTypedKeyTimestamp:) CGFloat lastTypedKeyTimestamp; // ivar: _lastTypedKeyTimestamp
@property (nonatomic) BOOL usesKeyHaptics; // ivar: _usesKeyHaptics


+(BOOL)areKeyHapticsEnabled;
+(Class)_configurationClass;
+(id)configurationForVisceral:(NSInteger)arg0 ;
-(CGFloat)_autoDeactivationTimeout;
-(float)scaleVolumeSlow:(float)arg0 fast:(float)arg1 timeSpan:(CGFloat)arg2 ;
-(id)_feedbackWithUpdatedVolume:(id)arg0 ;
-(id)_stats_key;
-(id)init;
-(id)initWithCoordinateSpace:(id)arg0 ;
-(id)initWithCoordinateSpace:(id)arg0 visceral:(NSInteger)arg1 ;
-(void)_playFeedbackForActionType:(NSInteger)arg0 withCustomization:(id)arg1 ;
-(void)actionOccurred:(NSInteger)arg0 ;
-(void)commonInitWithVisceral:(NSInteger)arg0 ;
-(void)dealloc;
-(void)processDidChangeLowPowerMode:(id)arg0 ;


@end


#endif