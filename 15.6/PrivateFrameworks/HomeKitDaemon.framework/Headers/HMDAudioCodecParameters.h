// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDAUDIOCODECPARAMETERS_H
#define HMDAUDIOCODECPARAMETERS_H

@class HAPTLVBase, NSNumber, NSArray;
@protocol HAPTLVCreateParse, NSSecureCoding;



@interface HMDAudioCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *audioChannelCount; // ivar: _audioChannelCount
@property (readonly, copy, nonatomic) NSArray *audioSampleRates; // ivar: _audioSampleRates
@property (readonly, copy, nonatomic) NSArray *bitRateSettings; // ivar: _bitRateSettings
@property (readonly, copy, nonatomic) NSNumber *rtpPtime; // ivar: _rtpPtime


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithChannelCount:(id)arg0 bitRateSetting:(id)arg1 audioSampleRate:(id)arg2 rtpPtime:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)tlvData;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif