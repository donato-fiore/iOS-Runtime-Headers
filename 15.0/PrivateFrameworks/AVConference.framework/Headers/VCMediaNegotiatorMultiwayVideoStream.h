// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCMEDIANEGOTIATORMULTIWAYVIDEOSTREAM_H
#define VCMEDIANEGOTIATORMULTIWAYVIDEOSTREAM_H

@protocol NSCopying;


#import "VCMediaNegotiatorMultiwayMediaStream.h"

@interface VCMediaNegotiatorMultiwayVideoStream : VCMediaNegotiatorMultiwayMediaStream <NSCopying>



@property (nonatomic) unsigned int frameRate; // ivar: _frameRate
@property (nonatomic) unsigned int keyFrameInterval; // ivar: _keyFrameInterval
@property (nonatomic) int payload; // ivar: _payload
@property (nonatomic) CGSize size; // ivar: _size


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif