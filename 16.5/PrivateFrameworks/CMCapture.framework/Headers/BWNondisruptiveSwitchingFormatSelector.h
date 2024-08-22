// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWNONDISRUPTIVESWITCHINGFORMATSELECTOR_H
#define BWNONDISRUPTIVESWITCHINGFORMATSELECTOR_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface BWNondisruptiveSwitchingFormatSelector : NSObject {
    float _baseZoomFactor;
    NSDictionary *_zoomFactorToNondisruptiveSwitchingFormatIndex;
    int _videoStabilizationStrength;
    NSDictionary *_quadraSubPixelSwitchingParameters;
    BWSmartCameraScene _quadraSubPixelSceneBasedOnNormalizedSNR;
    BWSmartCameraScene _quadraSubPixelSceneBasedOnLuxLevel;
    BOOL _quadraSubPixelSceneMonitoringForActionCameraEnabled;
    BOOL _quadraSubPixelSceneMonitoringForDigitalFlashEnabled;
    float _lastZoomFactor;
    int _lastDigitalFlashMode;
    BOOL _lastStationary;
    int _lastNondisruptiveSwitchingFormatIndex;
}




+(void)initialize;
-(id)initWithPortType:(id)arg0 sensorIDString:(id)arg1 baseZoomFactor:(float)arg2 zoomFactorToNondisruptiveSwitchingFormatIndex:(id)arg3 ;
-(int)formatIndexForZoomFactor:(float)arg0 frameStatistics:(id)arg1 stillImageDigitalFlashMode:(int)arg2 isStationary:(BOOL)arg3 ;
-(void)dealloc;
-(void)setVideoStabilizationStrength:(int)arg0 ;


@end


#endif