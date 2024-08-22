// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCMEDIACONTROLINFOFACETIMEAUDIO_H
#define VCMEDIACONTROLINFOFACETIMEAUDIO_H



#import "VCMediaControlInfo.h"

@interface VCMediaControlInfoFaceTimeAudio : VCMediaControlInfo {
    unsigned int _controlInfoReceivedKbits;
    unsigned int _controlInfoReceivedPackets;
    unsigned int _controlInfoAudioPacketSize;
    unsigned int _controlInfoAudioTimestamp;
    CGFloat _controlInfoArrivalTime;
    ? _controlFeedbackParameter;
    unsigned short _controlInfoSequenceNumber;
    BOOL _controlInfoIsDuplicatePacket;
    BOOL _controlInfoIsReceivedOnPrimary;
}


@property (readonly) NSUInteger feedbackSize;
@property BOOL videoEnabled; // ivar: _videoEnabled


-(BOOL)hasInfoType:(unsigned int)arg0 ;
-(NSUInteger)serializedSize;
-(id)description;
-(int)configureWithBuffer:(char *)arg0 length:(NSUInteger)arg1 optionalControlInfo:(struct ? *)arg2 ;
-(int)getInfo:(*void)arg0 bufferLength:(NSUInteger)arg1 infoSize:(*NSUInteger)arg2 type:(unsigned int)arg3 ;
-(int)getInfoUnserialized:(struct ? *)arg0 type:(unsigned int)arg1 ;
-(int)handleOptionalControlInfo:(struct ? *)arg0 ;
-(int)serializeToBuffer:(char *)arg0 bufferLength:(NSUInteger)arg1 blobLength:(*NSUInteger)arg2 ;
-(int)setInfo:(*void)arg0 size:(NSUInteger)arg1 type:(unsigned int)arg2 ;
-(int)setInfoUnserialized:(struct ? *)arg0 type:(unsigned int)arg1 ;


@end


#endif