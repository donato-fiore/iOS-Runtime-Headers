// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSRTPCRYPTOSUITE_H
#define HMDSRTPCRYPTOSUITE_H

@class HAPNumberParser;
@protocol NSSecureCoding;



@interface HMDSRTPCryptoSuite : HAPNumberParser <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger srtpCryptoSuite; // ivar: _srtpCryptoSuite


+(BOOL)supportsSecureCoding;
+(id)arrayWithSuites:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCryptoSuite:(NSUInteger)arg0 ;
-(id)initWithTLVData:(id)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif