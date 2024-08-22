// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDONTOLOGYINTERACTIONSFEATUREEVALUATOR_H
#define HDONTOLOGYINTERACTIONSFEATUREEVALUATOR_H

@class NSString;
@protocol HDDrugInteractionFactorStateObserver, HDMedicationCountObserver, HDOntologyFeatureEvaluator, HDMedicationCountProvider, HDDrugInteractionFactorStateProvider;


#import "HDOntologyMedicationFeatureEvaluator.h"

@interface HDOntologyInteractionsFeatureEvaluator : HDOntologyMedicationFeatureEvaluator <HDDrugInteractionFactorStateObserver, HDMedicationCountObserver, HDOntologyFeatureEvaluator>

 {
    id<HDMedicationCountProvider> *_medicationCountProvider;
    id<HDDrugInteractionFactorStateProvider> *_interactionFactorStateProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)requiresFeatureShardForProfile:(id)arg0 ;
-(id)init;
-(id)initWithDaemon:(id)arg0 ;
-(id)initWithDaemon:(id)arg0 medicationCountProvider:(id)arg1 interactionFactorStateProvider:(id)arg2 ;
-(void)drugInteractionFactorStateProvider:(id)arg0 didObserveChangeForProfile:(id)arg1 hasDrugInteractionFactor:(NSInteger)arg2 ;
-(void)medicationCountProvider:(id)arg0 didObserveChangeForProfile:(id)arg1 ontologyBackedMedicationCount:(NSInteger)arg2 ;
-(void)registerRequiredObserversForProfile:(id)arg0 queue:(id)arg1 ;


@end


#endif