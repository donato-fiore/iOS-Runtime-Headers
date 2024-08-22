// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDEVICEUNLOCKAGGDLOGGER_H
#define SBDEVICEUNLOCKAGGDLOGGER_H

@class NSString;
@protocol CSExternalEventHandling;

#import <Foundation/Foundation.h>


@interface SBDeviceUnlockAggdLogger : NSObject <CSExternalEventHandling>



@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_observeDashBoardEvents, setter=_setObserveDashBoardEvents:) BOOL observeDashBoardEvents; // ivar: _observeDashBoardEvents
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(id)init;
-(void)conformsToCSEventHandling;
-(void)dealloc;
-(void)logDeviceUnlock;
-(void)logDeviceWake;
-(void)logIdleTimerScreenDimWarning;
-(void)logOrientationAndAccessoryStateForPrefix:(id)arg0 ;
-(void)logUserResetIdleTimer;


@end


#endif