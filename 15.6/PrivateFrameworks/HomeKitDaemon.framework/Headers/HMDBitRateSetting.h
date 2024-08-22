// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDBITRATESETTING_H
#define HMDBITRATESETTING_H

@class HAPNumberParser;
@protocol NSSecureCoding;



@interface HMDBitRateSetting : HAPNumberParser <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger bitrateSetting; // ivar: _bitrateSetting


+(BOOL)supportsSecureCoding;
+(id)arrayWithSettings:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithBitRateSetting:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTLVData:(id)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif