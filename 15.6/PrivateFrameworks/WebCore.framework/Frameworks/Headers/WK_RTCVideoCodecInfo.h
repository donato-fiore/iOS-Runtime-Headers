// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WK_RTCVIDEOCODECINFO_H
#define WK_RTCVIDEOCODECINFO_H

@class NSString, NSDictionary;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface WK_RTCVideoCodecInfo : NSObject <NSCoding>



@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSDictionary *parameters; // ivar: _parameters


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCodecInfo:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 parameters:(id)arg1 ;
-(id)initWithNativeSdpVideoFormat:(struct SdpVideoFormat )arg0 ;
-(struct SdpVideoFormat )nativeSdpVideoFormat;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif