// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APPTELEMETRYTIMESERIESEVENT_H
#define APPTELEMETRYTIMESERIESEVENT_H

@class PBCodable, NSString;
@protocol PQLValuable, NSCopying;


#import "AppTelemetryInvestigation.h"

@interface AppTelemetryTimeSeriesEvent : PBCodable <PQLValuable, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasInvestigation;
@property (nonatomic) BOOL hasMagnitude;
@property (nonatomic) BOOL hasMagnitudeBool;
@property (nonatomic) BOOL hasMagnitudeDouble;
@property (nonatomic) BOOL hasMagnitudeFloat;
@property (nonatomic) BOOL hasMagnitudeInt;
@property (nonatomic) BOOL hasMagnitudeLong;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int identifier; // ivar: _identifier
@property (retain, nonatomic) AppTelemetryInvestigation *investigation; // ivar: _investigation
@property (nonatomic) int magnitude; // ivar: _magnitude
@property (nonatomic) BOOL magnitudeBool; // ivar: _magnitudeBool
@property (nonatomic) CGFloat magnitudeDouble; // ivar: _magnitudeDouble
@property (nonatomic) float magnitudeFloat; // ivar: _magnitudeFloat
@property (nonatomic) int magnitudeInt; // ivar: _magnitudeInt
@property (nonatomic) NSInteger magnitudeLong; // ivar: _magnitudeLong
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


+(id)newBoolEvent:(int)arg0 eventGroupUUID:(id)arg1 value:(BOOL)arg2 ;
+(id)newCADownloadErrorCountEventWithCount:(int)arg0 ;
+(id)newCADownloadErrorEventWithError:(id)arg0 pcsChained:(BOOL)arg1 sharedZone:(BOOL)arg2 count:(int)arg3 ;
+(id)newCASyncDownErrorCountEventWithCount:(int)arg0 ;
+(id)newCASyncDownErrorEventWithError:(id)arg0 pcsChained:(BOOL)arg1 zoneMangledID:(id)arg2 ;
+(id)newCASyncUpItemErrorCountEventWithCount:(int)arg0 ;
+(id)newCASyncUpItemErrorEventWithError:(id)arg0 pcsChained:(BOOL)arg1 sharedZone:(BOOL)arg2 count:(int)arg3 ;
+(id)newCASyncUpZoneErrorCountEventWithCount:(int)arg0 ;
+(id)newCASyncUpZoneErrorEventWithError:(id)arg0 pcsChained:(BOOL)arg1 zoneMangledID:(id)arg2 ;
+(id)newCATotalErrorCountEventWithCount:(int)arg0 ;
+(id)newCAUploadErrorCountEventWithCount:(int)arg0 ;
+(id)newCAUploadErrorEventWithError:(id)arg0 pcsChained:(BOOL)arg1 sharedZone:(BOOL)arg2 count:(int)arg3 ;
+(id)newChainedDirectoryMissingChainPCSEventWithZoneMangledID:(id)arg0 itemIDString:(id)arg1 ;
+(id)newChildCountMismatchEventWithZoneMangledID:(id)arg0 itemIDString:(id)arg1 magnitude:(int)arg2 ;
+(id)newCiconiaReportEvent:(NSUInteger)arg0 state:(int)arg1 ;
+(id)newConsistencyCheckerFailedEvent;
+(id)newCorruptPackageDownloadEventWithZoneMangledID:(id)arg0 error:(id)arg1 itemIDString:(id)arg2 ;
+(id)newDBResetEventWithError:(id)arg0 description:(id)arg1 ;
+(id)newDeepScanEventWithReason:(id)arg0 appLibrary:(id)arg1 ;
+(id)newDoubleEvent:(int)arg0 eventGroupUUID:(id)arg1 value:(CGFloat)arg2 ;
+(id)newDroppedEventWithCount:(unsigned int)arg0 ;
+(id)newFSEventToSyncUpEventWithDuration:(CGFloat)arg0 ;
+(id)newFileBouncedManyTimes;
+(id)newFileChecksumMismatchEventWithZoneMangledID:(id)arg0 itemIDString:(id)arg1 ;
+(id)newFileReadErrorWithError:(id)arg0 zoneMangledID:(id)arg1 itemIDString:(id)arg2 ;
+(id)newFolderSharePCSChainingEventWithTime:(CGFloat)arg0 zoneMangledID:(id)arg1 itemIDString:(id)arg2 error:(id)arg3 errorDescription:(id)arg4 ;
+(id)newFolderSharingCountMismatchEventWithCount:(int)arg0 zoneMangledID:(id)arg1 ;
+(id)newFromSqliteStatement:(struct sqlite3_stmt *)arg0 atIndex:(int)arg1 ;
+(id)newFromSqliteValue:(struct sqlite3_value *)arg0 ;
+(id)newFullyConsistentEvent;
+(id)newIntEvent:(int)arg0 eventGroupUUID:(id)arg1 value:(int)arg2 ;
+(id)newLongEvent:(int)arg0 eventGroupUUID:(id)arg1 value:(NSInteger)arg2 ;
+(id)newLongEvent:(int)arg0 eventGroupUUID:(id)arg1 value:(NSInteger)arg2 round:(BOOL)arg3 ;
+(id)newMissingApplyJobEventWithNumberMissing:(unsigned int)arg0 ;
+(id)newMissingAssetContentEventWithRecordID:(id)arg0 ;
+(id)newMissingDownloaderJobEventWithNumberMissing:(unsigned int)arg0 ;
+(id)newMissingPushEventWithNumberOutOfSync:(unsigned int)arg0 ;
+(id)newMissingReaderJobEventWithNumberMissing:(unsigned int)arg0 ;
+(id)newMissingShareAliasEventWithZoneMangledID:(id)arg0 itemIDString:(id)arg1 ;
+(id)newMissingSyncUpJobEventWithNumberMissing:(unsigned int)arg0 ;
+(id)newMissingUploaderJobEventWithNumberMissing:(unsigned int)arg0 ;
+(id)newNSErrorEvent:(int)arg0 eventGroupUUID:(id)arg1 value:(id)arg2 ;
+(id)newOperationTimedOutEventWithTime:(CGFloat)arg0 type:(id)arg1 nonDiscretionary:(BOOL)arg2 hasForegroundClients:(BOOL)arg3 ;
+(id)newPackageChecksumMismatchEventWithZoneMangledID:(id)arg0 itemIDString:(id)arg1 ;
+(id)newPermanentlyInconsistentEventWithZoneMangledID:(id)arg0 ;
+(id)newQBSDirFaultsCountEvent:(NSUInteger)arg0 serverTruthDirFaultCount:(NSUInteger)arg1 serverTruthDirCount:(NSUInteger)arg2 timeSinceLogin:(NSUInteger)arg3 serverTruthTotalItemsCount:(NSUInteger)arg4 zonesNeverFullSync:(NSUInteger)arg5 ;
+(id)newQBSOperationPrformanceEventWithTime:(CGFloat)arg0 type:(id)arg1 recordsFetched:(NSUInteger)arg2 recordsFetchedTotalMetadataSize:(NSUInteger)arg3 xattrsFetchedTotalSize:(NSUInteger)arg4 ;
+(id)newRecursiveItemCountMismatchEventWithZoneMangledID:(id)arg0 itemIDString:(id)arg1 magnitude:(int)arg2 ;
+(id)newShareAcceptationEventWithLastStep:(id)arg0 zoneMangledID:(id)arg1 itemIDString:(id)arg2 error:(id)arg3 ;
+(id)newShareAliasCountMismatchEventWithZoneMangledID:(id)arg0 itemIDString:(id)arg1 magnitude:(int)arg2 ;
+(id)newShareAliasInSharedFolderEventWithZoneMangledID:(id)arg0 ;
+(id)newShareCountMismatchEventWithZoneMangledID:(id)arg0 itemIDString:(id)arg1 magnitude:(int)arg2 ;
+(id)newSyncBoostingProblemCountWithProblemCount:(int)arg0 ;
+(id)newSyncUpBackoffDelaySummaryEventWithNumberOfFailedZones:(unsigned int)arg0 ;
+(id)newSyncUpBackoffRatioSummaryEventWithNumberOfFailedZones:(unsigned int)arg0 ;
+(id)newTelemetryEventInZoneWithMangledID:(id)arg0 ;
+(id)newTelemetryEventInZoneWithMangledID:(id)arg0 fromError:(id)arg1 errorDescription:(id)arg2 itemIDString:(id)arg3 ;
+(id)newTestMetricEventWithMagnitude:(unsigned int)arg0 ;
+(id)newTimestampEvent:(int)arg0 eventGroupUUID:(id)arg1 value:(NSUInteger)arg2 ;
+(id)newUserDownloadEventWithDuration:(CGFloat)arg0 ;
+(id)newZoneResetEventWithZoneMangledID:(id)arg0 lastSyncDate:(id)arg1 error:(id)arg2 errorDescription:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)magnitudeAsString:(int)arg0 ;
-(int)StringAsMagnitude:(id)arg0 ;
-(void)clearOneofValuesForMagnitude;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1 ;
-(void)writeTo:(id)arg0 ;


@end


#endif