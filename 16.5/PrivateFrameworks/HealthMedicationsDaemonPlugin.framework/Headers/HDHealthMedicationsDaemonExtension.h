// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHEALTHMEDICATIONSDAEMONEXTENSION_H
#define HDHEALTHMEDICATIONSDAEMONEXTENSION_H

@class NSString, NSArray;
@protocol HDHealthDaemonExtension;

#import <Foundation/Foundation.h>

#import "HDMedicationPeriodicScheduler.h"
#import "HDMedicationCountProvider.h"
#import "HDDrugInteractionFactorStateProvider.h"
#import "HDOntologyCoreMedsFeatureEvaluator.h"
#import "HDOntologyMedsEducationFeatureEvaluator.h"
#import "HDOntologyInteractionsFeatureEvaluator.h"
#import "HDOntologyMedsScanningFeatureEvaluator.h"

@interface HDHealthMedicationsDaemonExtension : NSObject <HDHealthDaemonExtension>

 {
    HDMedicationPeriodicScheduler *_periodicScheduler;
    HDMedicationCountProvider *_medicationCountProvider;
    HDDrugInteractionFactorStateProvider *_drugInteractionStateProvider;
    HDOntologyCoreMedsFeatureEvaluator *_coreMedsFeatureEvaluator;
    HDOntologyMedsEducationFeatureEvaluator *_medsEducationFeatureEvaluator;
    HDOntologyInteractionsFeatureEvaluator *_interactionsFeatureEvaluator;
    HDOntologyMedsScanningFeatureEvaluator *_medsScanningFeatureEvaluator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *ontologyFeatureEvaluators;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithHealthDaemon:(id)arg0 ;


@end


#endif