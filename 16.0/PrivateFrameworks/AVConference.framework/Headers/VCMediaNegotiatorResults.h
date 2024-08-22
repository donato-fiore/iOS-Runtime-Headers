// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCMEDIANEGOTIATORRESULTS_H
#define VCMEDIANEGOTIATORRESULTS_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface VCMediaNegotiatorResults : NSObject

@property (readonly, nonatomic) NSSet *bandwidthConfigurations; // ivar: _bandwidthConfigurations
@property (nonatomic) int controlChannelVersion; // ivar: _controlChannelVersion
@property (nonatomic) unsigned char mediaControlInfoVersion; // ivar: _mediaControlInfoVersion
@property (retain, nonatomic) NSString *remoteBasebandCodec; // ivar: _remoteBasebandCodec
@property (nonatomic) unsigned int remoteBasebandCodecSampleRate; // ivar: _remoteBasebandCodecSampleRate
@property (nonatomic) unsigned int remoteBlobVersion; // ivar: _remoteBlobVersion
@property (retain, nonatomic) NSString *remoteUserAgent; // ivar: _remoteUserAgent
@property (nonatomic) BOOL supportsDynamicMaxBitrate; // ivar: _supportsDynamicMaxBitrate


-(id)init;
-(unsigned int)maxBandwidthWithOperatingMode:(int)arg0 connectionType:(int)arg1 ;
-(void)addBandwidthConfigurations:(id)arg0 ;
-(void)dealloc;


@end


#endif