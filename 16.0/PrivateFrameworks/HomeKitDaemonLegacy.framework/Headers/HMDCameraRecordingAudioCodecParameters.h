// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERARECORDINGAUDIOCODECPARAMETERS_H
#define HMDCAMERARECORDINGAUDIOCODECPARAMETERS_H

@class HAPTLVBase, NSNumber, NSArray, NSData;
@protocol HAPTLVCreateParse, NSSecureCoding;



@interface HMDCameraRecordingAudioCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *audioChannelCount; // ivar: _audioChannelCount
@property (readonly, copy, nonatomic) NSArray *audioSampleRates; // ivar: _audioSampleRates
@property (readonly, copy, nonatomic) NSArray *bitRateModes; // ivar: _bitRateModes
@property (readonly, copy, nonatomic) NSNumber *maxAudioBitRate; // ivar: _maxAudioBitRate
@property (readonly, copy) NSData *tlvData;


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithChannelCount:(id)arg0 bitRateModes:(id)arg1 audioSampleRates:(id)arg2 maxAudioBitRate:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif