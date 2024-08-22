// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCMEDIASTREAMNEGOTIATORSETTINGSAIRPLAYMIRRORING_H
#define AVCMEDIASTREAMNEGOTIATORSETTINGSAIRPLAYMIRRORING_H



#import "AVCMediaStreamNegotiatorSettings.h"

@interface AVCMediaStreamNegotiatorSettingsAirplayMirroring : AVCMediaStreamNegotiatorSettings {
    NSInteger _tilesPerFrame;
}




-(NSInteger)captureSource;
-(NSInteger)tilesPerFrame;
-(NSInteger)videoStreamMode;
-(id)initWithOptions:(id)arg0 deviceRole:(unsigned char)arg1 error:(*id)arg2 ;
-(int)operatingMode;


@end


#endif