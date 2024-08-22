// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMADEVICEMOTIONVISIONFUSIONPLAYER_H
#define CMADEVICEMOTIONVISIONFUSIONPLAYER_H


#import <Foundation/Foundation.h>


@interface CMADeviceMotionVisionFusionPlayer : NSObject {
    unique_ptr<CMVLFDeviceMotionFuser, std::default_delete<CMVLFDeviceMotionFuser>> fVLFDeviceMotionFuser;
    float fMagneticDeclination;
    CGFloat fMagneticDeclinationTimestamp;
}


@property (nonatomic, getter=isARSessionActive) BOOL arSessionActive; // ivar: _arSessionActive
@property (nonatomic, getter=isFusionEnabled) BOOL fusionEnabled; // ivar: _fusionEnabled
@property (nonatomic, getter=isPlayerActive) BOOL playerActive; // ivar: _playerActive


-(float)magneticDeclination;
-(id)getFusedDeviceMotionFrom:(id)arg0 ;
-(id)getFusedDeviceMotionFrom:(id)arg0 andAttitudeReferenceFrame:(NSUInteger)arg1 ;
-(id)init;
-(void)reset;
-(void)setEnableFusion:(BOOL)arg0 ;
-(void)start;
-(void)stop;
-(void)updateARSessionState:(NSUInteger)arg0 ;
-(void)updateLocation:(id)arg0 ;
-(void)updateVLLocalizationResult:(id)arg0 ;


@end


#endif