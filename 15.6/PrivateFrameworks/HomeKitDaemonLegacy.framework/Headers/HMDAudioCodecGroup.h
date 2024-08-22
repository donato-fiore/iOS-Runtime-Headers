// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDAUDIOCODECGROUP_H
#define HMDAUDIOCODECGROUP_H

@class HAPNumberParser;
@protocol NSCopying, NSSecureCoding;



@interface HMDAudioCodecGroup : HAPNumberParser <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger codec; // ivar: _codec


+(BOOL)supportsSecureCoding;
+(id)arrayWithCodecs:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAudioCodecGroup:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTLVData:(id)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif