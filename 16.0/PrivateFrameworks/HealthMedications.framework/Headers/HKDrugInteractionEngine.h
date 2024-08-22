// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKDRUGINTERACTIONENGINE_H
#define HKDRUGINTERACTIONENGINE_H

@class NSString, HKHealthStore, HKTaskServerProxyProvider;
@protocol _HKXPCExportable, HKDrugInteractionEngineClientInterface;

#import <Foundation/Foundation.h>


@interface HKDrugInteractionEngine : NSObject <_HKXPCExportable, HKDrugInteractionEngineClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
-(id)exportedInterface;
-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)interactionClassForLifestyleFactor:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)interactionClassesForConceptWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)interactionClassesForMedication:(id)arg0 completion:(id)arg1 ;
-(void)interactionResultForFirstMedication:(id)arg0 secondMedication:(id)arg1 completion:(id)arg2 ;
-(void)interactionResultForMedication:(id)arg0 lifestyleFactor:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)interactionResultsForInteractionClasses:(id)arg0 completion:(id)arg1 ;
-(void)interactionResultsForMedications:(id)arg0 lifestyleFactors:(id)arg1 completion:(id)arg2 ;
-(void)unitTest_noOpWithCompletion:(id)arg0 ;


@end


#endif