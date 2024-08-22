// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARREMOTELOCATIONSENSOR_H
#define ARREMOTELOCATIONSENSOR_H

@class NSString;
@protocol ARLocationSensorProtocol, ARSensorDelegate;


#import "ARRemoteSensor.h"
#import "ARLocationData.h"

@interface ARRemoteLocationSensor : ARRemoteSensor <ARLocationSensorProtocol>



@property (readonly, nonatomic) ARLocationData *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARSensorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger powerUsage;
@property (readonly) Class superclass;


+(id)new;
-(NSUInteger)providedDataTypes;
-(id)init;
-(id)initWithServerConnection:(id)arg0 ;
-(id)updateFromLocationData:(id)arg0 ;
-(void)configureForReplay;
-(void)lookupAltitudeAtCoordinate:(struct CLLocationCoordinate2D )arg0 completionHandler:(id)arg1 ;
-(void)updateARSessionState:(NSUInteger)arg0 ;
-(void)updateEstimationFromVIOPose:(id)arg0 imageData:(id)arg1 ;
-(void)updateFromVisualLocalizationResult:(id)arg0 ;


@end


#endif