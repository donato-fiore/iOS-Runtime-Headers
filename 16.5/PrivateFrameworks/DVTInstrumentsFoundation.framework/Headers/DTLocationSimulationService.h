// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTLOCATIONSIMULATIONSERVICE_H
#define DTLOCATIONSIMULATIONSERVICE_H

@class DTXService, NSString;
@protocol DTLocationSimulationServiceRequests;



@interface DTLocationSimulationService : DTXService <DTLocationSimulationServiceRequests>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerCapabilities:(id)arg0 ;
-(id)initWithChannel:(id)arg0 ;
-(void)simulateLocationWithLatitude:(id)arg0 longitude:(id)arg1 ;
-(void)stopLocationSimulation;


@end


#endif