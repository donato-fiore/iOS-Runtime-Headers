// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSNOTIFICATIONCLEARINGTRIGGER_H
#define CSNOTIFICATIONCLEARINGTRIGGER_H

@protocol CSNotificationClearingTriggerDelegate;

#import <Foundation/Foundation.h>


@interface CSNotificationClearingTrigger : NSObject

@property (nonatomic) BOOL authenticated; // ivar: _authenticated
@property (weak, nonatomic) NSObject<CSNotificationClearingTriggerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL didDisableCarDNDUntilEndOfDrive; // ivar: _didDisableCarDNDUntilEndOfDrive
@property (nonatomic) BOOL hadNotificationContentAtDisappearance; // ivar: _hadNotificationContentAtDisappearance
@property (nonatomic) BOOL screenInactive; // ivar: _screenInactive
@property (nonatomic) BOOL screenOff; // ivar: _screenOff
@property (nonatomic) BOOL triggerArmed; // ivar: _triggerArmed
@property (nonatomic) BOOL uiLocked; // ivar: _uiLocked


-(BOOL)_shouldArm;
-(BOOL)_shouldFire;
-(BOOL)_wouldArmForDiscreteParameters;
-(BOOL)_wouldArmIfNotForDND;
-(BOOL)_wouldArmIfNotForDNDAndNotificationContent;
-(id)initWithDelegate:(id)arg0 ;
-(void)_clearIfNeeded;
-(void)_reset;
-(void)_updateTriggerAndClearIfNeeded;


@end


#endif