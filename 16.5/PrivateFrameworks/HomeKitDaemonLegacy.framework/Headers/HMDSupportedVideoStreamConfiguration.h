// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSUPPORTEDVIDEOSTREAMCONFIGURATION_H
#define HMDSUPPORTEDVIDEOSTREAMCONFIGURATION_H

@class HAPTLVBase, NSDictionary, NSData;
@protocol HAPTLVCreateParse, NSSecureCoding;



@interface HMDSupportedVideoStreamConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *codecConfigurations; // ivar: _codecConfigurations
@property (readonly, copy) NSData *tlvData;


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCodecConfigurations:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif