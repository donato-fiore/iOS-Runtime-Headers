// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCSESSIONUPLINKBANDWIDTHALLOCATOR_H
#define VCSESSIONUPLINKBANDWIDTHALLOCATOR_H

@class NSDictionary, NSMutableDictionary;


#import "VCObject.h"
#import "VCSessionBandwidthAllocationTable.h"

@interface VCSessionUplinkBandwidthAllocator : VCObject {
    VCSessionBandwidthAllocationTable *_table;
    NSDictionary *_currentTable;
    NSMutableDictionary *_streamTokenToEnableMap;
    BOOL _redundancyEnabled;
    BOOL _redundancyEnabledFor720Stream;
}


@property (readonly, nonatomic, getter=getBitrateToStreamTable) NSDictionary *bitrateToStreamTable;
@property (nonatomic, getter=isRedundancyEnabled) BOOL redundancyEnabled;
@property (nonatomic, getter=isRedundancyEnabledFor720Stream) BOOL redundancyEnabledFor720Stream;


-(BOOL)isEnabledStreamToken:(NSInteger)arg0 ;
-(BOOL)peerSubscription:(BOOL)arg0 streamID:(unsigned short)arg1 ;
-(id)init;
-(id)mediaBitratesForStreamToken:(NSInteger)arg0 targetNetworkBitrate:(unsigned int)arg1 ;
-(id)repairStreamIDsForStreamToken:(NSInteger)arg0 ;
-(id)streamIDsForStreamToken:(NSInteger)arg0 ;
-(id)streamIDsForStreamToken:(NSInteger)arg0 targetBitrate:(unsigned int)arg1 ;
-(id)streamIDsForStreamToken:(NSInteger)arg0 targetBitrateCap:(unsigned int)arg1 ;
-(id)tableEntriesForStreamToken:(NSInteger)arg0 targetBitrate:(unsigned int)arg1 remainingBitrate:(*unsigned int)arg2 isLastEntryForStreamToken:(*BOOL)arg3 ;
-(void)_recomputeCurrentTable;
-(void)addBandwidthAllocationTableEntry:(id)arg0 updateNow:(BOOL)arg1 ;
-(void)dealloc;
-(void)streamToken:(NSInteger)arg0 enabled:(BOOL)arg1 ;


@end


#endif