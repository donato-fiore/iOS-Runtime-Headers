// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARREMOTEGEOTRACKINGTECHNIQUE_H
#define ARREMOTEGEOTRACKINGTECHNIQUE_H

@class NSArray, NSNumber;
@protocol ARGeoTrackingTechniqueProtocol, ARTechniqueDelegate, ARTechniqueForwardingStrategy;


#import "ARRemoteTechnique.h"

@interface ARRemoteGeoTrackingTechnique : ARRemoteTechnique <ARGeoTrackingTechniqueProtocol>



@property CGFloat bonusLatency;
@property (weak) NSObject<ARTechniqueDelegate> *delegate;
@property CGFloat posteriorVisualLocalizationCallInterval;
@property NSUInteger powerUsage;
@property (retain) NSObject<ARTechniqueForwardingStrategy> *splitTechniqueFowardingStrategy;
@property (retain) NSArray *splitTechniques;
@property NSUInteger supportEnablementOptions;
@property (readonly) NSNumber *traceKey;
@property CGFloat visualLocalizationCallInterval;
@property CGFloat visualLocalizationCallIntervalTimeThreshold;
@property BOOL visualLocalizationUpdatesRequested;


+(id)new;
-(BOOL)reconfigurableFrom:(id)arg0 ;
-(NSUInteger)requiredSensorDataTypes;
-(id)getLocationFromWorldPositionerror;
-(id)init;
-(id)initWithServerConnection:(id)arg0 ;
-(void)reconfigureFrom:(id)arg0 ;


@end


#endif