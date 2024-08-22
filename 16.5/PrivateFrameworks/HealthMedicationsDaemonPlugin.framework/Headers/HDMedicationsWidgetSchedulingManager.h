// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMEDICATIONSWIDGETSCHEDULINGMANAGER_H
#define HDMEDICATIONSWIDGETSCHEDULINGMANAGER_H

@class HDProfile, _HKDelayedOperation, NSString;
@protocol HDHealthDaemonReadyObserver, HDDataObserver, HDMedicationScheduleObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDMedicationsWidgetSchedulingManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, HDMedicationScheduleObserver>

 {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    _HKDelayedOperation *_reloadOperation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *reloadWidgetHandler; // ivar: _reloadWidgetHandler
@property (readonly) Class superclass;


-(id)initWithProfile:(id)arg0 ;
-(void)_reloadWidgetIfNecessaryWithDoseEvents:(id)arg0 ;
-(void)_reloadWidgets;
-(void)_runReloadOperation;
-(void)_startObservingMedicationChanges;
-(void)_stopObservingMedicationChanges;
-(void)daemonReady:(id)arg0 ;
-(void)dealloc;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)samplesOfTypesWereRemoved:(id)arg0 anchor:(id)arg1 ;
-(void)scheduleManager:(id)arg0 didAddOrModifySchedules:(id)arg1 ;
-(void)scheduleManager:(id)arg0 didPruneScheduleItems:(id)arg1 ;
-(void)scheduleManagerDidRescheduleMedications:(id)arg0 ;


@end


#endif