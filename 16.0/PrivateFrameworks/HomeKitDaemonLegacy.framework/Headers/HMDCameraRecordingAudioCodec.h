// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERARECORDINGAUDIOCODEC_H
#define HMDCAMERARECORDINGAUDIOCODEC_H

@class HAPNumberParser;
@protocol NSCopying, NSSecureCoding;



@interface HMDCameraRecordingAudioCodec : HAPNumberParser <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)arrayWithCodecTypes:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCodec:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTLVData:(id)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif