// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPCONTEXTSTOREMANAGER_H
#define HDSPCONTEXTSTOREMANAGER_H

@class NSString;
@protocol HDSPSleepScheduleStateObserver, HDSPSleepModeObserver, HDSPSleepEventHandler, HDSPSleepScheduleModelObserver, HDSPEnvironmentAware, _CDLocalContext;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPContextStoreManager : NSObject <HDSPSleepScheduleStateObserver, HDSPSleepModeObserver, HDSPSleepEventHandler, HDSPSleepScheduleModelObserver, HDSPEnvironmentAware>



@property (readonly, nonatomic) NSObject<_CDLocalContext> *context; // ivar: _context
@property (readonly, nonatomic) os_unfair_lock_s contextLock; // ivar: _contextLock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)healthAppForegroundPredicate;
+(id)sleepAppForegroundPredicate;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 context:(id)arg1 ;
-(id)registerPredicate:(id)arg0 identifier:(id)arg1 callback:(id)arg2 ;
-(void)_withLock:(id)arg0 ;
-(void)_writeSleepInfoToContextStore:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)sleepEventIsDue:(id)arg0 ;
-(void)sleepModeDidChange:(NSInteger)arg0 previousMode:(NSInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)sleepScheduleModelManager:(id)arg0 didUpdateSleepScheduleModel:(id)arg1 ;
-(void)sleepScheduleStateDidChange:(NSUInteger)arg0 previousState:(NSUInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)unregister:(id)arg0 ;
-(void)updateForScheduleModelModifiedOnDate:(id)arg0 ;


@end


#endif