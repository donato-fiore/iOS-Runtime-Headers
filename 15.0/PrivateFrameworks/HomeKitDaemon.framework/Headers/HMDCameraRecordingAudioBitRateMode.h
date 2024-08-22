// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERARECORDINGAUDIOBITRATEMODE_H
#define HMDCAMERARECORDINGAUDIOBITRATEMODE_H

@class HAPNumberParser;
@protocol NSCopying, NSSecureCoding;



@interface HMDCameraRecordingAudioBitRateMode : HAPNumberParser <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)arrayWithBitRateModes:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBitRateMode:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTLVData:(id)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif