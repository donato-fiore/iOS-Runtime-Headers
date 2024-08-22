// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAUDIOPAYLOAD_H
#define VCAUDIOPAYLOAD_H


#import <Foundation/Foundation.h>

#import "VCAudioPayloadConfig.h"

@interface VCAudioPayload : NSObject {
    *SoundDec_t _encoder;
    BOOL _shouldReset;
}


@property (readonly, nonatomic) int bandwidth; // ivar: _bandwidth
@property (readonly, nonatomic) unsigned int bitrate; // ivar: _bitrate
@property (readonly, nonatomic) VCAudioPayloadConfig *config; // ivar: _config


-(BOOL)createEncoderWithInputFormat:(struct tagVCAudioFrameFormat *)arg0 ;
-(BOOL)getMagicCookie:(char *)arg0 withLength:(*unsigned int)arg1 ;
-(BOOL)isDTXEmptyPacket:(unsigned int)arg0 ;
-(BOOL)setCodecModeRequest:(struct _VCAudioCodecModeChangeEvent )arg0 ;
-(BOOL)setEVSRFParams:(struct EVSRFParams *)arg0 ;
-(id)description;
-(id)initWithConfig:(id)arg0 ;
-(int)encodeAudio:(struct opaqueVCAudioBufferList *)arg0 numInputSamples:(int)arg1 outputBytes:(*void)arg2 numOutputBytes:(int)arg3 ;
-(void)dealloc;
-(void)resetEncoder;
-(void)resetEncoderWithSampleBuffer:(char *)arg0 numBytes:(int)arg1 ;
-(void)setCurrentDTXEnable:(BOOL)arg0 ;


@end


#endif