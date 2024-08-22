// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSESSIONBANDWIDTHALLOCATIONTABLEENTRY_H
#define VCSESSIONBANDWIDTHALLOCATIONTABLEENTRY_H

@class NSNumber;
@protocol VCSessionDownlinkBandwidthAllocatorClient;

#import <Foundation/Foundation.h>


@interface VCSessionBandwidthAllocationTableEntry : NSObject {
    BOOL _onDemand;
}


@property unsigned int actualNetworkBitrate; // ivar: _actualNetworkBitrate
@property (readonly) NSObject<VCSessionDownlinkBandwidthAllocatorClient> *client; // ivar: _client
@property (readonly) unsigned int encoderGroupID; // ivar: _encoderGroupID
@property (readonly) BOOL hasRepairStreamID; // ivar: _hasRepairStreamID
@property BOOL isLowestQualityAudio; // ivar: _isLowestQualityAudio
@property BOOL isLowestQualityVideo; // ivar: _isLowestQualityVideo
@property (readonly) unsigned int maxMediaBitrate; // ivar: _maxMediaBitrate
@property (readonly) unsigned int maxNetworkBitrate; // ivar: _maxNetworkBitrate
@property (readonly) unsigned int qualityIndex; // ivar: _qualityIndex
@property (readonly) unsigned int repairMaxNetworkBitrate; // ivar: _repairMaxNetworkBitrate
@property (readonly) unsigned int repairStreamID; // ivar: _repairStreamID
@property (readonly, getter=isStartOnDemand) BOOL startOnDemand; // ivar: _startOnDemand
@property (readonly) unsigned int streamGroupID; // ivar: _streamGroupID
@property (readonly) unsigned int streamID; // ivar: _streamID
@property (readonly) NSNumber *streamToken; // ivar: _streamToken
@property (getter=isSubscribedTo) BOOL subscribedTo; // ivar: _subscribedTo
@property (readonly) unsigned char type; // ivar: _type


+(NSInteger)compareAudioEntry:(id)arg0 audioEntry:(id)arg1 ;
+(NSInteger)compareAudioEntry:(id)arg0 videoEntry:(id)arg1 ;
+(NSInteger)compareVideoEntry:(id)arg0 videoEntry:(id)arg1 ;
+(unsigned char)entryTypeForMediaType:(unsigned int)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)initWithClient:(id)arg0 type:(unsigned char)arg1 streamToken:(NSInteger)arg2 networkBitrate:(unsigned int)arg3 mediaBitrate:(unsigned int)arg4 qualityIndex:(unsigned int)arg5 streamID:(unsigned int)arg6 hasRepairStreamID:(BOOL)arg7 repairStreamID:(unsigned int)arg8 repairMaxNetworkBitrate:(unsigned int)arg9 subscribedTo:(BOOL)arg10 startOnDemand:(BOOL)arg11 streamGroupID:(unsigned int)arg12 encoderGroupID:(unsigned int)arg13 ;
-(id)initWithClient:(id)arg0 type:(unsigned char)arg1 streamToken:(NSInteger)arg2 networkBitrate:(unsigned int)arg3 mediaBitrate:(unsigned int)arg4 qualityIndex:(unsigned int)arg5 streamID:(unsigned int)arg6 streamGroupID:(unsigned int)arg7 ;
-(void)dealloc;


@end


#endif