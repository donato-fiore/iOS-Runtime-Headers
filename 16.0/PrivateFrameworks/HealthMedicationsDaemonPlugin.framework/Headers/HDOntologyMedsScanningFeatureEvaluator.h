// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDONTOLOGYMEDSSCANNINGFEATUREEVALUATOR_H
#define HDONTOLOGYMEDSSCANNINGFEATUREEVALUATOR_H

@class NSString;
@protocol HDOntologyFeatureEvaluator;


#import "HDOntologyMedicationFeatureEvaluator.h"

@interface HDOntologyMedsScanningFeatureEvaluator : HDOntologyMedicationFeatureEvaluator <HDOntologyFeatureEvaluator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)minimumTimeToLive;
-(NSInteger)requiresFeatureShardForProfile:(id)arg0 ;
-(id)init;
-(void)registerRequiredObserversForProfile:(id)arg0 queue:(id)arg1 ;


@end


#endif