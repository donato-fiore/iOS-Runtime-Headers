// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WK_RTCCODECSPECIFICINFOH265_H
#define WK_RTCCODECSPECIFICINFOH265_H

@class NSString;
@protocol RTCCodecSpecificInfo;

#import <Foundation/Foundation.h>


@interface WK_RTCCodecSpecificInfoH265 : NSObject <RTCCodecSpecificInfo>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger packetizationMode; // ivar: _packetizationMode
@property (readonly) Class superclass;


-(struct CodecSpecificInfo )nativeCodecSpecificInfo;


@end


#endif