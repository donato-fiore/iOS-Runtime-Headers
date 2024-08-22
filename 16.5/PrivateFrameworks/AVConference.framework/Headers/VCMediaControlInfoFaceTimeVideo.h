// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIACONTROLINFOFACETIMEVIDEO_H
#define VCMEDIACONTROLINFOFACETIMEVIDEO_H



#import "VCMediaControlInfo.h"

@interface VCMediaControlInfoFaceTimeVideo : VCMediaControlInfo {
    unsigned char _controlInfoCameraStatus;
    unsigned char _controlInfoLTRBits;
    unsigned int _controlInfoLTRTimestamp;
    ? _controlInfoFrameExtensionData;
    unsigned char _controlInfoFEC;
    NSUInteger _controlInfoFECLength;
    unsigned int _controlInfoProbe;
    unsigned int _controlInfoReceivedKbits;
    unsigned int _controlInfoReceivedPackets;
    unsigned int _controlInfoVideoPacketSize;
    unsigned int _controlInfoVideoTimestamp;
    CGFloat _controlInfoVideoArrivalTime;
}




-(BOOL)hasInfoType:(unsigned int)arg0 ;
-(NSUInteger)serializedSize;
-(id)description;
-(id)init;
-(id)initWithBuffer:(char *)arg0 length:(NSUInteger)arg1 optionalControlInfo:(struct ? *)arg2 version:(unsigned char)arg3 ;
-(int)configureWithBuffer:(char *)arg0 length:(NSUInteger)arg1 optionalControlInfo:(struct ? *)arg2 ;
-(int)getInfo:(*void)arg0 bufferLength:(NSUInteger)arg1 infoSize:(*NSUInteger)arg2 type:(unsigned int)arg3 ;
-(int)handleOptionalControlInfo:(struct ? *)arg0 ;
-(int)serializeToBuffer:(char *)arg0 bufferLength:(NSUInteger)arg1 blobLength:(*NSUInteger)arg2 ;
-(int)setInfo:(*void)arg0 size:(NSUInteger)arg1 type:(unsigned int)arg2 ;


@end


#endif