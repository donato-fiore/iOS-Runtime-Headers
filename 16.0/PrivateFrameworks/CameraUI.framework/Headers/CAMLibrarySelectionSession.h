// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMLIBRARYSELECTIONSESSION_H
#define CAMLIBRARYSELECTIONSESSION_H

@class NSDate;
@protocol CAMLibrarySelectionDelegate;

#import <Foundation/Foundation.h>


@interface CAMLibrarySelectionSession : NSObject

@property (readonly, nonatomic) BOOL canResetToDefaultMode; // ivar: _canResetToDefaultMode
@property (readonly, nonatomic) NSInteger currentMode; // ivar: _currentMode
@property (weak, nonatomic) NSObject<CAMLibrarySelectionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSInteger initialMode; // ivar: _initialMode
@property (retain, nonatomic) NSDate *launchDate; // ivar: _launchDate
@property (readonly, nonatomic) BOOL overriddenByUser; // ivar: _overriddenByUser
@property (readonly, nonatomic) BOOL restoredFromPreferences; // ivar: _restoredFromPreferences
@property (readonly, nonatomic) CGFloat timeForSmartSharingAutoDecision; // ivar: _timeForSmartSharingAutoDecision
@property (readonly, nonatomic) CGFloat timeForUserManualOverride; // ivar: _timeForUserManualOverride
@property (readonly, nonatomic) CGFloat timeToAcquireFirstLocation; // ivar: _timeToAcquireFirstLocation
@property (readonly, nonatomic) CGFloat timeToAcquireFirstPreciseLocation; // ivar: _timeToAcquireFirstPreciseLocation
@property (readonly, nonatomic) CGFloat timeToDetectDevicesInProximity; // ivar: _timeToDetectDevicesInProximity
@property (readonly, nonatomic) NSInteger userInteractionsCount; // ivar: _userInteractionsCount
@property (readonly, nonatomic) BOOL userWasPreviouslyOnTrip; // ivar: _userWasPreviouslyOnTrip


-(BOOL)_applyAutoResetModeAndNotify:(BOOL)arg0 ;
-(BOOL)_canResetDuringSessionWithResult:(id)arg0 ;
-(BOOL)_canTransitionToAutoOn;
-(BOOL)_shouldResetDuringSessionWithResult:(id)arg0 ;
-(BOOL)_shouldResetSessionBasedOnTimeoutDuringTrip:(BOOL)arg0 atSameLocation:(BOOL)arg1 ;
-(BOOL)notifyResetIfNeeded;
-(BOOL)updateWithMode:(NSInteger)arg0 ;
-(BOOL)updateWithResult:(id)arg0 ;
-(NSInteger)_autoResetMode;
-(NSInteger)_defaultMode;
-(id)initWithMode:(NSInteger)arg0 ;


@end


#endif