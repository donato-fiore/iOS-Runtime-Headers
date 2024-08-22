// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSUPPORTEDRTPCONFIGURATION_H
#define HMDSUPPORTEDRTPCONFIGURATION_H

@class HAPTLVBase, NSArray;
@protocol HAPTLVCreateParse, NSSecureCoding;



@interface HMDSupportedRTPConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *srtpCryptoSuites; // ivar: _srtpCryptoSuites


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCryptoSuites:(id)arg0 ;
-(id)tlvData;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif