// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDRUGINTERACTIONENGINE_H
#define HDDRUGINTERACTIONENGINE_H


#import <Foundation/Foundation.h>


@interface HDDrugInteractionEngine : NSObject



+(BOOL)interactionClassForLifestyleFactor:(NSUInteger)arg0 profile:(id)arg1 interactionClassOut:(*id)arg2 error:(*id)arg3 ;
+(BOOL)interactionResultForFirstInteractionClass:(id)arg0 secondInteractionClass:(id)arg1 profile:(id)arg2 interactionResultOut:(*id)arg3 error:(*id)arg4 ;
+(BOOL)interactionResultForFirstMedication:(id)arg0 secondMedication:(id)arg1 profile:(id)arg2 interactionResultOut:(*id)arg3 error:(*id)arg4 ;
+(BOOL)interactionResultForMedication:(id)arg0 lifestyleFactor:(NSUInteger)arg1 profile:(id)arg2 interactionResultOut:(*id)arg3 error:(*id)arg4 ;
+(id)interactionClassesForConceptWithIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)interactionClassesForMedication:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)interactionResultsForInteractionClasses:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)interactionResultsForMedications:(id)arg0 lifestyleFactors:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;


@end


#endif