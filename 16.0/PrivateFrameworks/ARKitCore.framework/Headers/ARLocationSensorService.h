// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARLOCATIONSENSORSERVICE_H
#define ARLOCATIONSENSORSERVICE_H

@class NSString;
@protocol ARRemoteLocationSensorService;


#import "ARSensorService.h"

@interface ARLocationSensorService : ARSensorService <ARRemoteLocationSensorService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)serviceName;
-(id)initWithConnection:(id)arg0 ;
-(id)updateFromDeviceOrientationData:(id)arg0 ;
-(id)updateFromLocationData:(id)arg0 ;
-(void)configureForReplay;
-(void)currentLocationWithReply:(id)arg0 ;
-(void)lookupAltitudeAtCoordinate:(struct CLLocationCoordinate2D )arg0 completionHandler:(id)arg1 ;
-(void)sensor:(id)arg0 didOutputSensorData:(id)arg1 ;
-(void)updateARSessionState:(NSUInteger)arg0 ;
-(void)updateEstimationFromVIOPose:(id)arg0 imageData:(id)arg1 ;
-(void)updateFromVisualLocalizationResult:(id)arg0 ;


@end


#endif