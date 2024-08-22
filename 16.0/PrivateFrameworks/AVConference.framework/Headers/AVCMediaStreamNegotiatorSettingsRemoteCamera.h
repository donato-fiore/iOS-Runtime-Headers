// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCMEDIASTREAMNEGOTIATORSETTINGSREMOTECAMERA_H
#define AVCMEDIASTREAMNEGOTIATORSETTINGSREMOTECAMERA_H



#import "AVCMediaStreamNegotiatorSettings.h"

@interface AVCMediaStreamNegotiatorSettingsRemoteCamera : AVCMediaStreamNegotiatorSettings {
    NSInteger _captureSource;
}




+(BOOL)isOfferSupported;
-(NSInteger)captureSource;
-(NSInteger)tilesPerFrame;
-(NSInteger)videoStreamMode;
-(NSUInteger)minBandwidth;
-(id)initWithOptions:(id)arg0 deviceRole:(unsigned char)arg1 error:(*id)arg2 ;
-(int)operatingMode;


@end


#endif