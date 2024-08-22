// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARGEOTRACKINGTECHNIQUESERVICE_H
#define ARGEOTRACKINGTECHNIQUESERVICE_H

@class NSString;
@protocol ARRemoteGeoTrackingTechniqueService;


#import "ARTechniqueService.h"
#import "ARLocationData.h"
#import "ARDeviceOrientationData.h"

@interface ARGeoTrackingTechniqueService : ARTechniqueService <ARRemoteGeoTrackingTechniqueService>

 {
    ARLocationData *_lastProcessedLocationData;
    ARDeviceOrientationData *_lastProcessedDeviceOrientationData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)serviceName;
-(id)initWithConnection:(id)arg0 ;
-(id)processData:(id)arg0 ;
-(id)processDeviceOrientationData:(id)arg0 ;
-(id)processLocationData:(id)arg0 ;
-(void)getLocationFromWorldPosition:(id)arg0 reply:(id)arg1 ;
-(void)posteriorVisualLocalizationCallIntervalWithReply:(id)arg0 ;
-(void)setPosteriorVisualLocalizationCallInterval:(CGFloat)arg0 ;
-(void)setSupportEnablementOptions:(NSUInteger)arg0 ;
-(void)setVisualLocalizationCallInterval:(CGFloat)arg0 ;
-(void)setVisualLocalizationCallIntervalTimeThreshold:(CGFloat)arg0 ;
-(void)setVisualLocalizationUpdatesRequested:(BOOL)arg0 ;
-(void)supportEnablementOptionsWithReply:(id)arg0 ;
-(void)technique:(id)arg0 didOutputResultData:(id)arg1 timestamp:(CGFloat)arg2 context:(id)arg3 ;
-(void)visualLocalizationCallIntervalTimeThresholdWithReply:(id)arg0 ;
-(void)visualLocalizationCallIntervalWithReply:(id)arg0 ;
-(void)visualLocalizationUpdatesRequestedWithReply:(id)arg0 ;


@end


#endif