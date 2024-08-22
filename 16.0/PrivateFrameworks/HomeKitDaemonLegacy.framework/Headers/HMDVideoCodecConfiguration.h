// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDVIDEOCODECCONFIGURATION_H
#define HMDVIDEOCODECCONFIGURATION_H

@class HAPTLVBase, NSData, NSArray;
@protocol HAPTLVCreateParse, NSSecureCoding;


#import "HMDVideoCodecParameters.h"
#import "HMDVideoCodec.h"

@interface HMDVideoCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) HMDVideoCodecParameters *codecParameters; // ivar: _codecParameters
@property (readonly, copy) NSData *tlvData;
@property (readonly, copy, nonatomic) NSArray *videoAttributes; // ivar: _videoAttributes
@property (readonly, copy, nonatomic) HMDVideoCodec *videoCodec; // ivar: _videoCodec


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCodec:(id)arg0 codecParameters:(id)arg1 attributes:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif