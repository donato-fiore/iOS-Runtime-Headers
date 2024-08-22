// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKWORKOUTBUILDERSAMPLEQUERY_H
#define HKWORKOUTBUILDERSAMPLEQUERY_H

@class NSString;
@protocol HKWorkoutBuilderSampleQueryClientInterface;


#import "HKQuery.h"
#import "HKWorkoutBuilder.h"

@interface HKWorkoutBuilderSampleQuery : HKQuery <HKWorkoutBuilderSampleQueryClientInterface>

 {
    id *_samplesAddedHandler;
    id *_quantitiesAddedHandler;
    BOOL _needsHistoricalFetch;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) HKWorkoutBuilder *workoutBuilder; // ivar: _workoutBuilder


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(id)initWithQuantityType:(id)arg0 workoutBuilder:(id)arg1 quantitiesAddedHandler:(id)arg2 ;
-(id)initWithSampleType:(id)arg0 workoutBuilder:(id)arg1 samplesAddedHandler:(id)arg2 ;
-(void)client_deliverQuantities:(id)arg0 hasFinishedHistoricalFetch:(BOOL)arg1 queryUUID:(id)arg2 ;
-(void)client_deliverSamples:(id)arg0 hasFinishedHistoricalFetch:(BOOL)arg1 queryUUID:(id)arg2 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif