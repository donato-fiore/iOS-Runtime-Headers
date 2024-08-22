// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSUPPORTEDVIDEOSTREAMCONFIGURATION_H
#define HMDSUPPORTEDVIDEOSTREAMCONFIGURATION_H

@class HAPTLVBase, NSDictionary;
@protocol HAPTLVCreateParse, NSSecureCoding;



@interface HMDSupportedVideoStreamConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *codecConfigurations; // ivar: _codecConfigurations


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCodecConfigurations:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)tlvData;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif