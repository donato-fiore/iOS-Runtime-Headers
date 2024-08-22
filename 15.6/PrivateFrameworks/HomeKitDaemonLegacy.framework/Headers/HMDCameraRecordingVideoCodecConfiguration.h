// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERARECORDINGVIDEOCODECCONFIGURATION_H
#define HMDCAMERARECORDINGVIDEOCODECCONFIGURATION_H

@class HAPTLVBase, NSArray;
@protocol HAPTLVCreateParse, NSSecureCoding;


#import "HMDCameraRecordingVideoCodec.h"
#import "HMDCameraRecordingVideoCodecParameters.h"

@interface HMDCameraRecordingVideoCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) HMDCameraRecordingVideoCodec *codec; // ivar: _codec
@property (readonly, copy, nonatomic) HMDCameraRecordingVideoCodecParameters *parameters; // ivar: _parameters
@property (readonly, copy, nonatomic) NSArray *videoAttributes; // ivar: _videoAttributes


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCodec:(id)arg0 codecParameters:(id)arg1 videoAttributes:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)tlvData;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif