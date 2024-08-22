// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLMIGRATIONDATACOORDINATOR_H
#define WLMIGRATIONDATACOORDINATOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLMigrationDataCoordinator : NSObject {
    BOOL _doneSent;
}


@property (copy, nonatomic) NSString *downloadsPath; // ivar: _downloadsPath
@property (nonatomic) BOOL stashDataLocally; // ivar: _stashDataLocally


+(BOOL)_allowSegmentedDownloads;
+(NSUInteger)downloadSegmentSize;
+(NSUInteger)segmentCountForItemSize:(NSUInteger)arg0 segmentSize:(NSUInteger)arg1 ;
-(id)_recordSummaryForMigrator:(id)arg0 withInfo:(id)arg1 account:(id)arg2 ;
-(id)init;
// -(void)_downloadFileInMultipleSegmentsFromSource:(id)arg0 forMigrator:(id)arg1 summary:(id)arg2 account:(id)arg3 itemSize:(NSUInteger)arg4 segmentCompletion:(id)arg5 completion:(unk)arg6  ;
// -(void)_downloadSegmentsFromSource:(id)arg0 forMigrator:(id)arg1 startingAtByteLocation:(NSUInteger)arg2 ofSummary:(id)arg3 account:(id)arg4 itemSize:(NSUInteger)arg5 toFileHandle:(id)arg6 segmentCompletion:(id)arg7 completion:(unk)arg8  ;
-(void)_fetchAccountsFromSource:(id)arg0 forMigrator:(id)arg1 statistics:(id)arg2 completion:(id)arg3 ;
-(void)_fetchSummariesFromSource:(id)arg0 forMigrator:(id)arg1 account:(id)arg2 statistics:(id)arg3 completion:(id)arg4 ;
-(void)downloadDataFromSource:(id)arg0 forMigrator:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(id)arg4 ;
// -(void)downloadFileFromSource:(id)arg0 forMigrator:(id)arg1 summary:(id)arg2 account:(id)arg3 segmentCompletion:(id)arg4 completion:(unk)arg5  ;
// -(void)fetchAccountsAndSummariesFromSource:(id)arg0 forMigrator:(id)arg1 statistics:(id)arg2 accountsRequestDurationBlock:(id)arg3 summariesRequestDurationBlock:(unk)arg4 completion:(id)arg5  ;
// -(void)importDataForMigrator:(id)arg0 fromProvider:(id)arg1 forSummaries:(unk)arg2 summaryStart:(id)arg3 summaryCompletion:(id)arg4  ;
-(void)updateSource:(id)arg0 withProgress:(CGFloat)arg1 remainingTime:(CGFloat)arg2 completion:(id)arg3 ;


@end


#endif