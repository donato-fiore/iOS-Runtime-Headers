// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCMEDIASTREAMNEGOTIATORSETTINGSCOREDEVICESCREENSHARING_H
#define AVCMEDIASTREAMNEGOTIATORSETTINGSCOREDEVICESCREENSHARING_H



#import "AVCMediaStreamNegotiatorSettings.h"

@interface AVCMediaStreamNegotiatorSettingsCoreDeviceScreenSharing : AVCMediaStreamNegotiatorSettings {
    NSInteger _accessNetworkType;
}




-(NSInteger)accessNetworkType;
-(NSInteger)captureSource;
-(NSInteger)videoStreamMode;
-(id)initWithOptions:(id)arg0 deviceRole:(unsigned char)arg1 error:(*id)arg2 ;
-(int)operatingMode;


@end


#endif