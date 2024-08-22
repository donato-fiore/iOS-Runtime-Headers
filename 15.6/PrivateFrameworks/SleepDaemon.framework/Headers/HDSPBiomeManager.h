// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPBIOMEMANAGER_H
#define HDSPBIOMEMANAGER_H

@class NSString;
@protocol HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPEnvironmentAware, HDSPBiomeInterface;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPBiomeManager : NSObject <HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPEnvironmentAware>



@property (readonly, nonatomic) NSObject<HDSPBiomeInterface> *biomeInterface; // ivar: _biomeInterface
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)biomeSleepModeChangeReasonForSleepModeChangeReason:(NSUInteger)arg0 ;
+(NSUInteger)biomeSleepModeStateForSleepModeState:(NSInteger)arg0 ;
+(id)sleepModePublisher;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 biomeInterface:(id)arg1 ;
-(id)subscribe:(id)arg0 callback:(id)arg1 ;
-(void)_writeSleepModeToBiome:(NSInteger)arg0 reason:(NSUInteger)arg1 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)sleepModeDidChange:(NSInteger)arg0 previousMode:(NSInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)sleepScheduleModelManager:(id)arg0 didUpdateSleepScheduleModel:(id)arg1 ;
-(void)sleepScheduleStateDidChange:(NSUInteger)arg0 previousState:(NSUInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)unsubscribe:(id)arg0 ;


@end


#endif