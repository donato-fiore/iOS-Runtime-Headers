// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIMOTIONATTITUDEANALYZER_H
#define _UIMOTIONATTITUDEANALYZER_H

@class UIMotionAnalyzer, NSString;
@protocol _UISettingsKeyObserver;


#import "UIWindow.h"
#import "UILabel.h"
#import "UIView.h"

@interface _UIMotionAttitudeAnalyzer : UIMotionAnalyzer <_UISettingsKeyObserver>

 {
    CGFloat _smoothingDegree;
    CGFloat _referenceShiftSpeed;
    CGFloat _distanceMultiplier;
    BOOL _hasReferenceQuaternion;
    ? _referenceQuaternion;
    ? _absoluteQuaternion;
    CGFloat _lastUpdate;
    CGFloat _idleStartTime;
    UIOffset _idleStartOffset;
    CGFloat _jumpThreshold;
    CGFloat _idleLeeway;
    CGFloat _secondsBeforeIdle;
    CGFloat _lockValue;
    CGFloat _lockStrength;
    UIWindow *_diagnosticsWindow;
    UILabel *_idleIndicator;
    UIView *_horizontalLockIndicator;
    UIView *_verticalLockIndicator;
    BOOL _hasHistory;
    UIOffset _lastAppliedViewerOffset;
    ? _lastAppliedRelativeQuaternion;
    BOOL _isApplyingHysteresis;
    ? _relativeQuaternionOnHysteresisEntry;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isIdleGivenTimestamp:(CGFloat)arg0 ;
-(BOOL)_shouldSuspendApplicationForHysteresisGivenNewViewerOffset:(struct UIOffset )arg0 wasSuspendingApplicationForHysteresis:(BOOL)arg1 ;
-(BOOL)applyHysteresisWithReceivedEventTimestamp:(CGFloat)arg0 timeSinceLastNewMotionEvent:(CGFloat)arg1 slowUpdatesEnabled:(BOOL)arg2 returningShouldToggleSlowUpdates:(*BOOL)arg3 logger:(id)arg4 ;
-(CGFloat)_directionLockStrength;
-(NSInteger)_directionLockStatus;
-(float)_referenceShiftRadiansPerSecondForAngle:(float)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(struct UIOffset )_currentRawOffset:(unsigned long)arg0 ;
-(unsigned long)_relativeQuaternion:(struct ? )arg0 ;
-(void)_createDiagnosticsWindow;
-(void)_createDirectionLockIndicators;
-(void)_createIdleIndicator;
-(void)_resetDirectionalLockWithViewerOffset:(struct UIOffset )arg0 ;
-(void)_shiftReferenceToYieldRelativeQuaternion:(unsigned long)arg0 ;
-(void)_showIdleUI:(BOOL)arg0 ;
-(void)_tearDownDiagnosticsWindow;
-(void)_tearDownDirectionLockIndicators;
-(void)_tearDownIdleIndicator;
-(void)_updateAcceleratedOutputRangeFixingOffset:(struct UIOffset )arg0 ;
-(void)_updateDirectionalLockIndicators;
-(void)_updateIdleStateForRawOffset:(struct UIOffset )arg0 timestamp:(CGFloat)arg1 ;
-(void)_updateReferenceAttitude:(unsigned long)arg0 timestamp:(NSUInteger)arg1 ;
-(void)_updateSettings;
-(void)_updateSmoothedOffsetForRawOffset:(struct UIOffset )arg0 ;
-(void)dealloc;
-(void)reset;
-(void)resetHysteresis;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)updateHistory;
-(void)updateWithEvent:(id)arg0 ;


@end


#endif