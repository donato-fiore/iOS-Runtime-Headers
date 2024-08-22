// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDVIDEOCODECPARAMETERS_H
#define HMDVIDEOCODECPARAMETERS_H

@class HAPTLVBase, NSArray;
@protocol HAPTLVCreateParse, NSSecureCoding;



@interface HMDVideoCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *h264Profiles; // ivar: _h264Profiles
@property (readonly, copy, nonatomic) NSArray *levels; // ivar: _levels
@property (readonly, copy, nonatomic) NSArray *packetizationModes; // ivar: _packetizationModes


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProfiles:(id)arg0 levels:(id)arg1 packetizationModes:(id)arg2 ;
-(id)tlvData;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif