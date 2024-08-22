// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WK_RTCVIDEOENCODERSETTINGS_H
#define WK_RTCVIDEOENCODERSETTINGS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WK_RTCVideoEncoderSettings : NSObject

@property (nonatomic) unsigned short height; // ivar: _height
@property (nonatomic) unsigned int maxBitrate; // ivar: _maxBitrate
@property (nonatomic) unsigned int maxFramerate; // ivar: _maxFramerate
@property (nonatomic) unsigned int minBitrate; // ivar: _minBitrate
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) unsigned int qpMax; // ivar: _qpMax
@property (nonatomic) unsigned int startBitrate; // ivar: _startBitrate
@property (nonatomic) unsigned short width; // ivar: _width


-(id)initWithNativeVideoCodec:(*void)arg0 ;
-(struct VideoCodec )nativeVideoCodec;


@end


#endif