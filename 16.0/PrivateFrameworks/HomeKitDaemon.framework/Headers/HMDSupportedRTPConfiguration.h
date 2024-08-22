// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSUPPORTEDRTPCONFIGURATION_H
#define HMDSUPPORTEDRTPCONFIGURATION_H

@class HAPTLVBase, NSArray, NSData;
@protocol HAPTLVCreateParse, NSSecureCoding;



@interface HMDSupportedRTPConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *srtpCryptoSuites; // ivar: _srtpCryptoSuites
@property (readonly, copy) NSData *tlvData;


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCryptoSuites:(id)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif