// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIDECARDISPLAYCONFIG_H
#define SIDECARDISPLAYCONFIG_H

@class NSNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SidecarDevice.h"

@interface SidecarDisplayConfig : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *cipher; // ivar: _cipher
@property (retain, nonatomic) NSNumber *codec; // ivar: _codec
@property (retain, nonatomic) NSNumber *configureDisplayExclusiveMode; // ivar: _configureDisplayExclusiveMode
@property (retain, nonatomic) NSNumber *dataLink; // ivar: _dataLink
@property (retain, nonatomic) SidecarDevice *device; // ivar: _device
@property (retain, nonatomic) NSNumber *displayID; // ivar: _displayID
@property (retain, nonatomic) NSNumber *enableTimeSync; // ivar: _enableTimeSync
@property (retain, nonatomic) NSNumber *framerate; // ivar: _framerate
@property (retain, nonatomic) NSNumber *hdr; // ivar: _hdr
@property (retain, nonatomic) NSNumber *keyFrameInterval; // ivar: _keyFrameInterval
@property (retain, nonatomic) NSNumber *lowLatency; // ivar: _lowLatency
@property (retain, nonatomic) NSNumber *rtcp; // ivar: _rtcp
@property (retain, nonatomic) NSNumber *rtcpTimeoutInterval; // ivar: _rtcpTimeoutInterval
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (copy, nonatomic) NSString *service; // ivar: _service
@property (retain, nonatomic) NSNumber *showSideBar; // ivar: _showSideBar
@property (retain, nonatomic) NSNumber *showTouchBar; // ivar: _showTouchBar
@property (nonatomic) CGSize size; // ivar: _size
@property (retain, nonatomic) NSNumber *tilesPerFrame; // ivar: _tilesPerFrame
@property (nonatomic) NSInteger transport; // ivar: _transport
@property (retain, nonatomic) NSNumber *txMaxBitrate; // ivar: _txMaxBitrate
@property (retain, nonatomic) NSNumber *txMinBitrate; // ivar: _txMinBitrate


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif