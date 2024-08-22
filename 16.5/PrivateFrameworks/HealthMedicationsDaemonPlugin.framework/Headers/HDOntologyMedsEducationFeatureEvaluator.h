// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDONTOLOGYMEDSEDUCATIONFEATUREEVALUATOR_H
#define HDONTOLOGYMEDSEDUCATIONFEATUREEVALUATOR_H

@class NSString;
@protocol HDMedicationCountObserver, HDOntologyFeatureEvaluator, HDMedicationCountProvider;


#import "HDOntologyMedicationFeatureEvaluator.h"

@interface HDOntologyMedsEducationFeatureEvaluator : HDOntologyMedicationFeatureEvaluator <HDMedicationCountObserver, HDOntologyFeatureEvaluator>

 {
    id<HDMedicationCountProvider> *_medicationCountProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)requiresFeatureShardForProfile:(id)arg0 ;
-(id)init;
-(id)initWithDaemon:(id)arg0 ;
-(id)initWithDaemon:(id)arg0 medicationCountProvider:(id)arg1 ;
-(void)medicationCountProvider:(id)arg0 didObserveChangeForProfile:(id)arg1 ontologyBackedMedicationCount:(NSInteger)arg2 ;
-(void)registerRequiredObserversForProfile:(id)arg0 queue:(id)arg1 ;


@end


#endif