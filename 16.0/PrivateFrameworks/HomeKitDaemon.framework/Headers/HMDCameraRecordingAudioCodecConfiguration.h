// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERARECORDINGAUDIOCODECCONFIGURATION_H
#define HMDCAMERARECORDINGAUDIOCODECCONFIGURATION_H

@class HAPTLVBase, NSData;
@protocol HAPTLVCreateParse, NSSecureCoding;


#import "HMDCameraRecordingAudioCodec.h"
#import "HMDCameraRecordingAudioCodecParameters.h"

@interface HMDCameraRecordingAudioCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) HMDCameraRecordingAudioCodec *codec; // ivar: _codec
@property (readonly, copy, nonatomic) HMDCameraRecordingAudioCodecParameters *parameters; // ivar: _parameters
@property (readonly, copy) NSData *tlvData;


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithAudioCodec:(id)arg0 codecParameters:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif