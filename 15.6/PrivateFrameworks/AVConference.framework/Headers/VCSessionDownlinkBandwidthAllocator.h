// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCSESSIONDOWNLINKBANDWIDTHALLOCATOR_H
#define VCSESSIONDOWNLINKBANDWIDTHALLOCATOR_H

@class NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCSessionDownlinkBandwidthAllocator : NSObject {
    NSMutableDictionary *_allocatedMediaEntriesForClients;
    unsigned int _maxConcurrentVideoClients;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSMutableArray *_clients;
    NSMutableDictionary *_selectedMediaEntriesForClients;
    NSMutableArray *_sortedMediaEntries;
    *opaqueRTCReporting _reportingAgent;
}


@property (nonatomic) BOOL forceFullBandwidth; // ivar: _forceFullBandwidth
@property (readonly, nonatomic) NSUInteger simultaneousTalkers;


+(id)sortMediaEntriesGroupIds:(id)arg0 ;
-(id)distributeBitrate:(unsigned int)arg0 ;
-(id)initWithReportingAgent:(struct opaqueRTCReporting *)arg0 ;
-(unsigned int)requiredAudioBitrate:(unsigned int)arg0 highestAudioBitrates:(id)arg1 ;
-(void)client:(id)arg0 didActualNetworkBitrateChangeForStreamGroupID:(unsigned int)arg1 ;
-(void)dealloc;
-(void)deregisterForBandwidthAllocationWithClient:(id)arg0 ;
-(void)registerForBandwidthAllocationWithClient:(id)arg0 ;
-(void)reportingSessionParticipantEventBitrateChanged:(id)arg0 optedInNetworkBitrate:(unsigned int)arg1 actualNetworkBitrate:(unsigned int)arg2 optedInStreamID:(id)arg3 actualStreamID:(id)arg4 ;
-(void)reset;
-(void)sortMediaEntries;
-(void)updateHighestAudioBitrates:(id)arg0 bitrate:(unsigned int)arg1 ;
-(void)updateSelectedMediaEntriesForClientWithUUID:(id)arg0 ;


@end


#endif