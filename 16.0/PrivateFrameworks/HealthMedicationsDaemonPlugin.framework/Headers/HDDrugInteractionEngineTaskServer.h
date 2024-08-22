// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDRUGINTERACTIONENGINETASKSERVER_H
#define HDDRUGINTERACTIONENGINETASKSERVER_H

@class HDStandardTaskServer;
@protocol HKDrugInteractionEngineServerInterface;



@interface HDDrugInteractionEngineTaskServer : HDStandardTaskServer <HKDrugInteractionEngineServerInterface>





+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)remote_interactionClassForLifestyleFactor:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)remote_interactionClassesForConceptWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)remote_interactionClassesForMedication:(id)arg0 completion:(id)arg1 ;
-(void)remote_interactionResultForFirstMedication:(id)arg0 secondMedication:(id)arg1 completion:(id)arg2 ;
-(void)remote_interactionResultForMedication:(id)arg0 lifestyleFactor:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)remote_interactionResultsForInteractionClasses:(id)arg0 completion:(id)arg1 ;
-(void)remote_interactionResultsForMedications:(id)arg0 lifestyleFactors:(id)arg1 completion:(id)arg2 ;


@end


#endif