// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCSESSIONBANDWIDTHALLOCATIONTABLE_H
#define VCSESSIONBANDWIDTHALLOCATIONTABLE_H

@class NSMutableDictionary, NSDictionary;


#import "VCObject.h"

@interface VCSessionBandwidthAllocationTable : VCObject {
    unsigned char _type;
    NSMutableDictionary *_streamTokenEntries;
    NSMutableDictionary *_sortedEntriesForStreamToken;
    NSMutableDictionary *_streamIDToEntryTable;
    unsigned int _currentScreenEncoderGroupCount;
    unsigned int _maxActiveScreenEncoders;
    BOOL _shouldScreenCapEncoderCount;
}


@property (readonly, nonatomic) NSDictionary *audioOnlyBitrateToStreamIDsTable; // ivar: _audioOnlyBitrateToStreamIDsTable
@property (readonly, nonatomic) NSDictionary *audioVideoBitrateToStreamIDsTable; // ivar: _audioVideoBitrateToStreamIDsTable
@property (readonly, nonatomic) NSDictionary *videoOnlyBitrateToStreamIDsTable; // ivar: _videoOnlyBitrateToStreamIDsTable
@property (readonly, nonatomic) NSDictionary *videoStreamIdToRepairStreamIdMap; // ivar: _videoStreamIdToRepairStreamIdMap


-(BOOL)shouldAddBackupEntry:(id)arg0 referenceTable:(id)arg1 referenceQualityIndices:(id)arg2 ;
-(BOOL)shouldAppendEntry:(id)arg0 screenEncoderGroups:(id)arg1 ;
-(BOOL)shouldUseRepairBitrateForEntry:(id)arg0 isRedundancyEnabled:(BOOL)arg1 isRedundancyEnabledFor720Stream:(BOOL)arg2 ;
-(id)entryForStreamID:(id)arg0 ;
-(id)initWithType:(unsigned char)arg0 ;
-(id)newAggregatedBandwidthTableWithRedundancy:(BOOL)arg0 redundancyEnabledFor720Stream:(BOOL)arg1 enableMap:(id)arg2 ;
-(id)tableEntriesForStreamToken:(NSInteger)arg0 ;
-(void)addBandwidthAllocationTableEntry:(id)arg0 ;
-(void)appendEntry:(id)arg0 streamTokenEntries:(id)arg1 currentNetworkBitrate:(*unsigned int)arg2 shouldUseRepairBitrate:(BOOL)arg3 screenEncoderGroups:(id)arg4 ;
-(void)cleanupStreamTokenEntries:(id)arg0 currentNetworkBitrate:(*unsigned int)arg1 isRedundancyEnabled:(BOOL)arg2 screenEncoderGroups:(id)arg3 ;
-(void)dealloc;
-(void)printTable:(id)arg0 ;


@end


#endif