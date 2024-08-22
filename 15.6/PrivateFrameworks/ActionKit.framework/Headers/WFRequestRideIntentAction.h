// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFREQUESTRIDEINTENTACTION_H
#define WFREQUESTRIDEINTENTACTION_H

@class WFHandleSystemIntentAction, NSString, INInteraction, WFIntentExecutor;
@protocol WFRideOptionsLoaderDelegate, WFIntentExecutorDelegate;


#import "WFRideOptionsLoader.h"

@interface WFRequestRideIntentAction : WFHandleSystemIntentAction <WFRideOptionsLoaderDelegate, WFIntentExecutorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) INInteraction *requestRideInteraction; // ivar: _requestRideInteraction
@property (readonly, nonatomic) WFRideOptionsLoader *rideOptionsLoader; // ivar: _rideOptionsLoader
@property (retain, nonatomic) WFIntentExecutor *rideStatusExecutor; // ivar: _rideStatusExecutor
@property (readonly) Class superclass;


-(id)errorFromConfirmResponse:(id)arg0 intent:(id)arg1 ;
-(id)errorFromHandleResponse:(id)arg0 intent:(id)arg1 ;
-(id)errorFromListRideOptionsResponse:(id)arg0 intent:(id)arg1 ;
-(id)errorFromRequestRideResponse:(id)arg0 intent:(id)arg1 ;
-(id)icon;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 ;
-(id)mustVerifyCredentialsError;
-(id)noServiceInAreaError;
-(id)previousRideNeedsCompletionError;
-(id)previousRideNeedsFeedback;
-(id)rideScheduledTooFarError;
-(id)serializedParametersForDonatedIntent:(id)arg0 allowDroppingUnconfigurableValues:(BOOL)arg1 ;
-(id)serviceTemporarilyUnavailableError;
-(void)getOutputFromIntentResponse:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleExecutionCompletionWithInteraction:(id)arg0 error:(id)arg1 ;
-(void)intentExecutor:(id)arg0 receivingRideStatusDidReceiveError:(id)arg1 ;
-(void)intentExecutor:(id)arg0 receivingRideStatusDidReceiveUpdate:(id)arg1 ;
-(void)resolveSlot:(id)arg0 withProcessedValue:(id)arg1 parameter:(id)arg2 input:(id)arg3 completion:(id)arg4 ;
-(void)rideOptionsLoader:(id)arg0 errorFromListRideOptionsError:(id)arg1 updatedErrorHandler:(id)arg2 ;


@end


#endif