// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERARECORDINGVIDEOCODECPARAMETERS_H
#define HMDCAMERARECORDINGVIDEOCODECPARAMETERS_H

@class HAPTLVBase, NSNumber, NSArray, NSData;
@protocol HAPTLVCreateParse, NSSecureCoding;



@interface HMDCameraRecordingVideoCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *bitRate; // ivar: _bitRate
@property (readonly, copy, nonatomic) NSNumber *iFrameInterval; // ivar: _iFrameInterval
@property (readonly, copy, nonatomic) NSArray *levels; // ivar: _levels
@property (readonly, copy, nonatomic) NSArray *profiles; // ivar: _profiles
@property (readonly, copy) NSData *tlvData;


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProfiles:(id)arg0 levels:(id)arg1 bitRate:(id)arg2 iFrameInterval:(id)arg3 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif