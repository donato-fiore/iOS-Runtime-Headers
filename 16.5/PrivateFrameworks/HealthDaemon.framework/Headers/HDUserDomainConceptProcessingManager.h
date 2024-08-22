// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDUSERDOMAINCONCEPTPROCESSINGMANAGER_H
#define HDUSERDOMAINCONCEPTPROCESSINGMANAGER_H

@class HDAssertion, NSString;
@protocol HDOntologyDatabaseAvailabilityObserver, HDOntologyShardImporterObserver, HDProfileReadyObserver, HDUserDomainConceptObserver;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDUserDomainConceptProcessingManager : NSObject <HDOntologyDatabaseAvailabilityObserver, HDOntologyShardImporterObserver, HDProfileReadyObserver, HDUserDomainConceptObserver>

 {
    os_unfair_lock_s _lock;
    NSInteger _batchSize;
    BOOL _hasScheduledProcessing;
    CGFloat _scheduledProcessingTimestamp;
    HDAssertion *_databaseAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoresAutomaticProcessingTriggers; // ivar: _ignoresAutomaticProcessingTriggers
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTesting_userDomainConceptProcessingManagerDidFinishProcessing; // ivar: _unitTesting_userDomainConceptProcessingManagerDidFinishProcessing


-(id)init;
-(id)initWithProfile:(id)arg0 ;
-(void)dealloc;
-(void)ontologyDatabase:(id)arg0 didBecomeAvailable:(BOOL)arg1 ;
-(void)ontologyShardImporter:(id)arg0 didImportEntry:(id)arg1 ;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)unitTesting_overrideDefaultBatchSize:(NSInteger)arg0 ;
-(void)unitTesting_scheduleUserDomainConceptProcessing;
-(void)unitTesting_triggerUserDomainConceptProcessing;
-(void)userDomainConceptManager:(id)arg0 didAddUserDomainConcepts:(id)arg1 ;
-(void)userDomainConceptManager:(id)arg0 didDeleteUserDomainConcepts:(id)arg1 ;
-(void)userDomainConceptManager:(id)arg0 didJournalUserDomainConcepts:(id)arg1 ;
-(void)userDomainConceptManager:(id)arg0 didUpdateUserDomainConcepts:(id)arg1 ;


@end


#endif