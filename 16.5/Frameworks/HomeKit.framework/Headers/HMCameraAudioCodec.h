// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMCAMERAAUDIOCODEC_H
#define HMCAMERAAUDIOCODEC_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMCameraAudioCodec : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger audioCodec; // ivar: _audioCodec


+(BOOL)isValid:(NSUInteger)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithAudioCodecType:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif