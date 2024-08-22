// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WK_RTCCODECSPECIFICINFOH264_H
#define WK_RTCCODECSPECIFICINFOH264_H

@class NSString;
@protocol RTCCodecSpecificInfo;

#import <Foundation/Foundation.h>


@interface WK_RTCCodecSpecificInfoH264 : NSObject <RTCCodecSpecificInfo>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger packetizationMode; // ivar: _packetizationMode
@property (readonly) Class superclass;


-(struct CodecSpecificInfo )nativeCodecSpecificInfo;


@end


#endif