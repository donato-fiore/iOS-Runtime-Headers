// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSUPPORTEDAUDIOSTREAMCONFIGURATION_H
#define HMDSUPPORTEDAUDIOSTREAMCONFIGURATION_H

@class HAPTLVBase, NSDictionary, NSNumber, NSData;
@protocol HAPTLVCreateParse, NSSecureCoding;



@interface HMDSupportedAudioStreamConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *codecConfigurations; // ivar: _codecConfigurations
@property (readonly, copy, nonatomic) NSNumber *supportsComfortNoise; // ivar: _supportsComfortNoise
@property (readonly, copy) NSData *tlvData;


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComfortNoise:(id)arg0 CodecConfigurations:(id)arg1 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif