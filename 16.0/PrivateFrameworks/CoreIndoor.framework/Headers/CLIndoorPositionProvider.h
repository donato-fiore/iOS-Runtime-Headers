// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLINDOORPOSITIONPROVIDER_H
#define CLINDOORPOSITIONPROVIDER_H

@class NSString;
@protocol CLIndoorXPCProviderImplementation;


#import "CLIndoorXPCProvider.h"
#import "ServiceState.h"

@interface CLIndoorPositionProvider : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ServiceState *state; // ivar: _state
@property (readonly) Class superclass;


-(BOOL)withinQueueCanReinitializeRemoteState;
-(id)endpointName;
-(id)initWithApiKey:(id)arg0 ;
-(id)initWithApiKey:(id)arg0 onServer:(id)arg1 ;
-(id)initWithConnection:(id)arg0 ;
-(id)remoteObjectProtocol;
-(id)withinQueuePermanentShutdownReason;
-(void)clVisionNotificationAvailable:(id)arg0 ;
-(void)gpsEstimateAvailable:(id)arg0 ;
-(void)gpsSignalQualityAvailable:(id)arg0 ;
-(void)outdoorLocationAvailable:(id)arg0 ;
-(void)playbackDatarun:(id)arg0 ;
-(void)setApiKey:(id)arg0 ;
-(void)setApiKey:(id)arg0 onServer:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;
-(void)startUpdatingLocationAtLocation:(id)arg0 ;
-(void)stopUpdatingLocation;
-(void)withinQueueInvalidateState;
-(void)withinQueueReconnectInvalidatedConnectionFailed:(id)arg0 ;
-(void)withinQueueReinitializeRemoteState;
-(void)withinQueueSetDelegate:(id)arg0 ;


@end


#endif