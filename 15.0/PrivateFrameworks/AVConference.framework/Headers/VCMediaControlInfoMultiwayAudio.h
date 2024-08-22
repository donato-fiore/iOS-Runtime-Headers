// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCMEDIACONTROLINFOMULTIWAYAUDIO_H
#define VCMEDIACONTROLINFOMULTIWAYAUDIO_H



#import "VCMediaControlInfo.h"

@interface VCMediaControlInfoMultiwayAudio : VCMediaControlInfo {
    unsigned int _controlInfoROC;
    unsigned int _controlInfoMKI;
}




-(BOOL)hasInfoType:(unsigned int)arg0 ;
-(NSUInteger)serializedSize;
-(id)description;
-(int)configureWithBuffer:(char *)arg0 length:(NSUInteger)arg1 optionalControlInfo:(struct ? *)arg2 ;
-(int)getInfo:(*void)arg0 bufferLength:(NSUInteger)arg1 infoSize:(*NSUInteger)arg2 type:(unsigned int)arg3 ;
-(int)serializeToBuffer:(char *)arg0 bufferLength:(NSUInteger)arg1 blobLength:(*NSUInteger)arg2 ;
-(int)setInfo:(*void)arg0 size:(NSUInteger)arg1 type:(unsigned int)arg2 ;


@end


#endif