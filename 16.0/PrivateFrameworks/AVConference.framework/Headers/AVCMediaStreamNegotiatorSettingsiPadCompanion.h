// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCMEDIASTREAMNEGOTIATORSETTINGSIPADCOMPANION_H
#define AVCMEDIASTREAMNEGOTIATORSETTINGSIPADCOMPANION_H

@class NSArray, NSMutableSet;


#import "AVCMediaStreamNegotiatorSettings.h"

@interface AVCMediaStreamNegotiatorSettingsiPadCompanion : AVCMediaStreamNegotiatorSettings {
    NSArray *_hdrModePixelFormats;
    NSMutableSet *_hdrModesSupported;
}




-(NSInteger)captureSource;
-(NSInteger)tilesPerFrame;
-(NSInteger)videoStreamMode;
-(id)hdrModePixelFormats;
-(id)hdrModesSupported;
-(id)initWithOptions:(id)arg0 deviceRole:(unsigned char)arg1 error:(*id)arg2 ;
-(int)operatingMode;
-(void)dealloc;


@end


#endif