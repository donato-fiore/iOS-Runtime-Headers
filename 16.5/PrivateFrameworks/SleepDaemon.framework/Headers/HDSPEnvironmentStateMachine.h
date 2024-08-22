// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPENVIRONMENTSTATEMACHINE_H
#define HDSPENVIRONMENTSTATEMACHINE_H

@class HKSPStateMachine, NSString;
@protocol HDSPEnvironmentStateMachineDelegate, HDSPEnvironmentStateMachineInfoProvider, HDSPEnvironmentStateMachineEventHandler, NAScheduler;


#import "HDSPEnvironmentDemoState.h"
#import "HDSPEnvironmentMigrationState.h"
#import "HDSPEnvironmentNotReadyState.h"
#import "HDSPEnvironmentReadyState.h"

@interface HDSPEnvironmentStateMachine : HKSPStateMachine <HDSPEnvironmentStateMachineDelegate, HDSPEnvironmentStateMachineInfoProvider, HDSPEnvironmentStateMachineEventHandler>



@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HDSPEnvironmentStateMachineDelegate> *delegate;
@property (readonly, nonatomic) HDSPEnvironmentDemoState *demoState; // ivar: _demoState
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<HDSPEnvironmentStateMachineInfoProvider> *infoProvider;
@property (readonly, nonatomic) HDSPEnvironmentMigrationState *migrationState; // ivar: _migrationState
@property (readonly, nonatomic) HDSPEnvironmentNotReadyState *notReadyState; // ivar: _notReadyState
@property (readonly, nonatomic) HDSPEnvironmentReadyState *readyState; // ivar: _readyState
@property (readonly) Class superclass;


-(BOOL)isSystemReady;
-(BOOL)needsDataMigration;
-(NSUInteger)loggingCategory;
-(id)initWithDelegate:(id)arg0 infoProvider:(id)arg1 ;
-(void)dataMigrationDidComplete;
-(void)environmentDidBecomeReady;
-(void)environmentShouldMigrateData;
-(void)systemDidBecomeReady;


@end


#endif