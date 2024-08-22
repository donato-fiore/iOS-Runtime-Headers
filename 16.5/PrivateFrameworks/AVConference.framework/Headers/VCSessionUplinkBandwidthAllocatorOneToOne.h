// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSESSIONUPLINKBANDWIDTHALLOCATORONETOONE_H
#define VCSESSIONUPLINKBANDWIDTHALLOCATORONETOONE_H

@class NSMutableDictionary, NSString;
@protocol VCSessionUplinkBandwidthAllocator;


#import "VCObject.h"

@interface VCSessionUplinkBandwidthAllocatorOneToOne : VCObject <VCSessionUplinkBandwidthAllocator>

 {
    NSMutableDictionary *_streamTokenToTableEntryMap;
    NSMutableDictionary *_streamTokenToEnableMap;
    NSMutableDictionary *_bandwithAllocationTable;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isRedundancyEnabled) BOOL redundancyEnabled;
@property (nonatomic, getter=isRedundancyEnabledFor720Stream) BOOL redundancyEnabledFor720Stream;
@property (readonly) Class superclass;


+(NSUInteger)insertionIndex:(id)arg0 forValue:(id)arg1 ;
+(id)microphoneOnlyTierTable;
+(id)valueForNetworkBitrate:(id)arg0 networkBitrate:(unsigned int)arg1 ;
+(id)videoCallMicrophoneTierTable;
-(BOOL)isEnabledStreamToken:(NSInteger)arg0 ;
-(BOOL)isStreamGroupEnabled:(unsigned int)arg0 ;
-(BOOL)peerSubscription:(BOOL)arg0 streamID:(unsigned short)arg1 ;
-(BOOL)shouldUseMinMicBitrate:(NSUInteger)arg0 streamToken:(NSInteger)arg1 remainderBitrate:(NSInteger)arg2 ;
-(BOOL)shouldUseMultipleStreamGroupAlgorithm;
-(NSUInteger)findAndSplitExtraBitrateFromCappedStreams:(id)arg0 remainderBitrate:(NSInteger)arg1 currentStreamGroupBitrate:(NSUInteger)arg2 streamToken:(NSInteger)arg3 totalRemainderBitrateWeight:(NSUInteger)arg4 ;
-(id)baseNetworkBitrateSplitForTargetBitrate:(unsigned int)arg0 baseNetworkBitrate:(*NSUInteger)arg1 ;
-(id)findBitrateSplitForStreamToken:(NSInteger)arg0 targetBitrate:(unsigned int)arg1 ;
-(id)init;
-(id)mediaBitratesForStreamToken:(NSInteger)arg0 targetNetworkBitrate:(unsigned int)arg1 ;
-(id)repairStreamIDsForStreamToken:(NSInteger)arg0 ;
-(id)streamIDsForStreamToken:(NSInteger)arg0 ;
-(id)streamIDsForStreamToken:(NSInteger)arg0 targetBitrate:(unsigned int)arg1 ;
-(id)streamIDsForStreamToken:(NSInteger)arg0 targetBitrateCap:(unsigned int)arg1 ;
-(id)streamIDsIfStreamTokenIsEnabled:(NSInteger)arg0 ;
-(id)streamIDsIfStreamTokenIsPresent:(NSInteger)arg0 ;
-(void)addBandwidthAllocationTableEntry:(id)arg0 updateNow:(BOOL)arg1 ;
-(void)dealloc;
-(void)generateBandwidthAllocationTableWithTierTables:(id)arg0 qualityIndices:(id)arg1 qualityIndexToStreamToken:(id)arg2 ;
-(void)getCurrentEnabledTierTables:(id)arg0 qualityIndices:(id)arg1 qualityIndexToStreamToken:(id)arg2 ;
-(void)recomputeAllocationTableIfRequired;
-(void)streamToken:(NSInteger)arg0 enabled:(BOOL)arg1 ;


@end


#endif