// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCMEDIANEGOTIATORSTREAMGROUPCODECCONFIGURATION_H
#define VCMEDIANEGOTIATORSTREAMGROUPCODECCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VCMediaNegotiatorStreamGroupCodecConfiguration : NSObject <NSCopying>



@property (nonatomic) BOOL H264LevelAsymmetryAllowed; // ivar: _H264LevelAsymmetryAllowed
@property (nonatomic) BOOL H264PacketizationMode; // ivar: _H264PacketizationMode
@property (nonatomic) unsigned int cipherSuite; // ivar: _cipherSuite
@property (nonatomic) NSInteger codecType; // ivar: _codecType
@property (nonatomic) NSUInteger pTime; // ivar: _pTime
@property (nonatomic) NSUInteger profileLevelId; // ivar: _profileLevelId
@property (nonatomic) BOOL rtcpPSFB_FIREnabled; // ivar: _rtcpPSFB_FIREnabled
@property (nonatomic) BOOL rtcpPSFB_PLIEnabled; // ivar: _rtcpPSFB_PLIEnabled
@property (nonatomic) BOOL rtcpRTPFB_GNACKEnabled; // ivar: _rtcpRTPFB_GNACKEnabled
@property (nonatomic) BOOL rtcpSREnabled; // ivar: _rtcpSREnabled
@property (nonatomic) unsigned int rtpPayload; // ivar: _rtpPayload
@property (nonatomic) NSUInteger serializedSize; // ivar: _serializedSize
@property (nonatomic) BOOL useInBandFEC; // ivar: _useInBandFEC


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif