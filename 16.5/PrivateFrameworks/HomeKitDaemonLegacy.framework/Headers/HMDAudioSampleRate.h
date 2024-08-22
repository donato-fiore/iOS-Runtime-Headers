// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAUDIOSAMPLERATE_H
#define HMDAUDIOSAMPLERATE_H

@class HAPNumberParser;
@protocol NSSecureCoding;



@interface HMDAudioSampleRate : HAPNumberParser <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger sampleRate; // ivar: _sampleRate


+(BOOL)supportsSecureCoding;
+(id)arrayWithRates:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSampleRate:(NSUInteger)arg0 ;
-(id)initWithTLVData:(id)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif