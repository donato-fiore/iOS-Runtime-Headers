// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAUDIOSTREAMCODECCONFIG_H
#define VCAUDIOSTREAMCODECCONFIG_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VCAudioStreamCodecConfig : NSObject

@property (readonly, nonatomic) NSInteger codecType; // ivar: _codecType
@property (nonatomic, getter=isDTMF) BOOL dtmf; // ivar: _dtmf
@property (nonatomic, getter=isDTXEnabled) BOOL dtxEnabled; // ivar: _dtxEnabled
@property (nonatomic) unsigned short evsChannelAwareOffset; // ivar: _evsChannelAwareOffset
@property (nonatomic) BOOL evsHeaderFullOnly; // ivar: _evsHeaderFullOnly
@property (readonly, nonatomic) BOOL isComfortNoise;
@property (nonatomic) BOOL isOpusInBandFecEnabled; // ivar: _isOpusInBandFecEnabled
@property (nonatomic) unsigned int networkPayload; // ivar: _networkPayload
@property (nonatomic, getter=isOctetAligned) BOOL octetAligned; // ivar: _octetAligned
@property (nonatomic) NSUInteger pTime; // ivar: _pTime
@property (nonatomic) int preferredMode; // ivar: _preferredMode
@property (retain, nonatomic) NSArray *supportedBandwidths; // ivar: _supportedBandwidths
@property (retain, nonatomic) NSArray *supportedModes; // ivar: _supportedModes


-(id)initWithCodecType:(NSInteger)arg0 ;
-(void)dealloc;
-(void)setupAMRModesWithClientModeMask:(unsigned int)arg0 ;
-(void)setupAMRWBModesWithClientModeMask:(unsigned int)arg0 ;
-(void)setupCodecBandwidthsWithClientBandwidthMask:(unsigned int)arg0 ;
-(void)setupEVSModesWithClientModeMask:(unsigned int)arg0 ;
-(void)setupModesWithClientModeMask:(unsigned int)arg0 ;


@end


#endif