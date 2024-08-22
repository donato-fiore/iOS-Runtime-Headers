// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCMEDIANEGOTIATORMULTIWAYMEDIASTREAM_H
#define VCMEDIANEGOTIATORMULTIWAYMEDIASTREAM_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VCMediaNegotiatorMultiwayMediaStream : NSObject <NSCopying>



@property (nonatomic) BOOL hasRepairedStreamID; // ivar: _hasRepairedStreamID
@property (nonatomic) BOOL isSubstream; // ivar: _isSubstream
@property (nonatomic) unsigned int maxMediaBitrate; // ivar: _maxMediaBitrate
@property (nonatomic) unsigned int maxNetworkBitrate; // ivar: _maxNetworkBitrate
@property (nonatomic) unsigned int maxPacketsPerSecond; // ivar: _maxPacketsPerSecond
@property (nonatomic) unsigned int qualityIndex; // ivar: _qualityIndex
@property (nonatomic) unsigned int repairedMaxNetworkBitrate; // ivar: _repairedMaxNetworkBitrate
@property (nonatomic) unsigned short repairedStreamID; // ivar: _repairedStreamID
@property (nonatomic) unsigned int ssrc; // ivar: _ssrc
@property (nonatomic) unsigned short streamID; // ivar: _streamID


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif