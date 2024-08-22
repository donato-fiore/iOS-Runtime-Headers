// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAAUTOASSETCONTROLSTATISTICS_H
#define MAAUTOASSETCONTROLSTATISTICS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MAAutoAssetControlStatisticsBySize.h"
#import "MAAutoAssetControlStatisticsByCommand.h"

@interface MAAutoAssetControlStatistics : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger finishedJobClientNetworkFailure; // ivar: _finishedJobClientNetworkFailure
@property (nonatomic) NSInteger finishedJobClientNotNetworkRelated; // ivar: _finishedJobClientNotNetworkRelated
@property (nonatomic) NSInteger finishedJobSchedulerNetworkFailure; // ivar: _finishedJobSchedulerNetworkFailure
@property (nonatomic) NSInteger finishedJobSchedulerNotNetworkRelated; // ivar: _finishedJobSchedulerNotNetworkRelated
@property (nonatomic) BOOL garbageCollectionPerformed; // ivar: _garbageCollectionPerformed
@property (nonatomic) BOOL garbageCollectionReclaimSpace; // ivar: _garbageCollectionReclaimSpace
@property (nonatomic) NSInteger garbageCollectionReclaimedLockedNeverRemoveCount; // ivar: _garbageCollectionReclaimedLockedNeverRemoveCount
@property (nonatomic) NSInteger garbageCollectionReclaimedLockedNeverRemoveSpace; // ivar: _garbageCollectionReclaimedLockedNeverRemoveSpace
@property (nonatomic) NSInteger garbageCollectionReclaimedLockedOverridableCount; // ivar: _garbageCollectionReclaimedLockedOverridableCount
@property (nonatomic) NSInteger garbageCollectionReclaimedLockedOverridableSpace; // ivar: _garbageCollectionReclaimedLockedOverridableSpace
@property (nonatomic) NSInteger garbageCollectionReclaimedMetadataBlockedCount; // ivar: _garbageCollectionReclaimedMetadataBlockedCount
@property (nonatomic) NSInteger garbageCollectionReclaimedMetadataBlockedSpace; // ivar: _garbageCollectionReclaimedMetadataBlockedSpace
@property (nonatomic) NSInteger garbageCollectionReclaimedStagedCount; // ivar: _garbageCollectionReclaimedStagedCount
@property (nonatomic) NSInteger garbageCollectionReclaimedStagedSpace; // ivar: _garbageCollectionReclaimedStagedSpace
@property (nonatomic) NSInteger garbageCollectionReclaimedUnlockedCount; // ivar: _garbageCollectionReclaimedUnlockedCount
@property (nonatomic) NSInteger garbageCollectionReclaimedUnlockedSpace; // ivar: _garbageCollectionReclaimedUnlockedSpace
@property (nonatomic) NSInteger garbageCollectionReclaimedV2AssetCount; // ivar: _garbageCollectionReclaimedV2AssetCount
@property (nonatomic) NSInteger garbageCollectionReclaimedV2AssetSpace; // ivar: _garbageCollectionReclaimedV2AssetSpace
@property (nonatomic) NSInteger garbageCollectionTotalReclaimedSpace; // ivar: _garbageCollectionTotalReclaimedSpace
@property (retain, nonatomic) MAAutoAssetControlStatisticsBySize *previouslyDownloaded; // ivar: _previouslyDownloaded
@property (nonatomic) NSInteger totalAutoAssetJobsStarted; // ivar: _totalAutoAssetJobsStarted
@property (nonatomic) NSInteger totalAutoJobsFinished; // ivar: _totalAutoJobsFinished
@property (retain, nonatomic) MAAutoAssetControlStatisticsByCommand *totalClientRepliesFailure; // ivar: _totalClientRepliesFailure
@property (retain, nonatomic) MAAutoAssetControlStatisticsByCommand *totalClientRepliesSuccess; // ivar: _totalClientRepliesSuccess
@property (retain, nonatomic) MAAutoAssetControlStatisticsByCommand *totalClientRequests; // ivar: _totalClientRequests
@property (retain, nonatomic) MAAutoAssetControlStatisticsByCommand *totalDequeuedClientRequests; // ivar: _totalDequeuedClientRequests
@property (retain, nonatomic) MAAutoAssetControlStatisticsBySize *totalDownloaded; // ivar: _totalDownloaded
@property (nonatomic) NSInteger totalFailuresToStartJobs; // ivar: _totalFailuresToStartJobs
@property (retain, nonatomic) MAAutoAssetControlStatisticsBySize *totalPromoted; // ivar: _totalPromoted
@property (retain, nonatomic) MAAutoAssetControlStatisticsByCommand *totalQueuedClientRequests; // ivar: _totalQueuedClientRequests
@property (retain, nonatomic) MAAutoAssetControlStatisticsBySize *totalRemoved; // ivar: _totalRemoved
@property (nonatomic) NSInteger totalResumedInFlightJobs; // ivar: _totalResumedInFlightJobs
@property (nonatomic) NSInteger totalSchedulerTriggeredJobs; // ivar: _totalSchedulerTriggeredJobs
@property (retain, nonatomic) MAAutoAssetControlStatisticsBySize *totalStaged; // ivar: _totalStaged
@property (nonatomic) NSInteger totalStagerDetermineJobsFinished; // ivar: _totalStagerDetermineJobsFinished
@property (nonatomic) NSInteger totalStagerDetermineJobsStarted; // ivar: _totalStagerDetermineJobsStarted
@property (nonatomic) NSInteger totalStagerDownloadJobsFinished; // ivar: _totalStagerDownloadJobsFinished
@property (nonatomic) NSInteger totalStagerDownloadJobsStarted; // ivar: _totalStagerDownloadJobsStarted
@property (retain, nonatomic) MAAutoAssetControlStatisticsBySize *totalUnstaged; // ivar: _totalUnstaged


+(BOOL)supportsSecureCoding;
+(id)allocStringForBytes:(NSInteger)arg0 ;
-(id)copy;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInitialValue:(NSInteger)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif