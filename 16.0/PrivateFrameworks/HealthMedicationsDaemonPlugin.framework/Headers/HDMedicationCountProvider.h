// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMEDICATIONCOUNTPROVIDER_H
#define HDMEDICATIONCOUNTPROVIDER_H

@class HKObserverSet<HDMedicationCountObserver>, NSMapTable, HDDaemon;
@protocol HDProfileReadyObserver, HDUserDomainConceptObserver, HDMedicationCountProvider;

#import <Foundation/Foundation.h>


@interface HDMedicationCountProvider : NSObject <HDProfileReadyObserver, HDUserDomainConceptObserver, HDMedicationCountProvider>

 {
    HKObserverSet<HDMedicationCountObserver> *_observers;
    os_unfair_lock_s _lock;
    NSMapTable *_ontologyBackedMedicationCountByProfile;
    NSMapTable *_isProfileReadyByProfile;
}


@property (readonly, weak, nonatomic) HDDaemon *daemon; // ivar: _daemon


-(NSInteger)ontologyBackedMedicationCountInProfile:(id)arg0 ;
-(id)init;
-(id)initWithDaemon:(id)arg0 ;
-(void)addMedicationCountObserver:(id)arg0 queue:(id)arg1 ;
-(void)monitorMedicationCountsInProfile:(id)arg0 ;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)removeMedicationCountObserver:(id)arg0 ;
-(void)userDomainConceptManager:(id)arg0 didAddUserDomainConcepts:(id)arg1 ;
-(void)userDomainConceptManager:(id)arg0 didDeleteUserDomainConcepts:(id)arg1 ;
-(void)userDomainConceptManager:(id)arg0 didJournalUserDomainConcepts:(id)arg1 ;
-(void)userDomainConceptManager:(id)arg0 didUpdateUserDomainConcepts:(id)arg1 ;


@end


#endif