// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPDATABASEREADER_H
#define VCPDATABASEREADER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCPDatabaseReader : NSObject {
    NSObject<OS_dispatch_queue> *_sqlSerialQueue;
    NSString *_filepath;
    *sqlite3 _database;
}




+(BOOL)shouldQueryInternalFields;
+(id)databaseForPhotoLibrary:(id)arg0 ;
-(BOOL)isAssetBlacklisted:(id)arg0 blacklistDate:(*id)arg1 ;
-(NSInteger)valueForKey:(id)arg0 ;
-(NSUInteger)countForTaskID:(NSUInteger)arg0 withProcessingStatus:(NSUInteger)arg1 ;
-(id)blacklistedLocalIdentifiersFromAssets:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)queryAnalysesForAssets:(id)arg0 withTypes:(id)arg1 ;
-(id)queryAnalysisForAsset:(id)arg0 ;
-(id)queryAnalysisForAsset:(id)arg0 withTypes:(id)arg1 ;
-(id)queryAnalysisPropertiesForAsset:(id)arg0 ;
-(id)queryAnalysisPropertiesForAssets:(id)arg0 ;
-(id)queryAssetsAnalyzedSince:(id)arg0 ;
-(id)queryBlacklistedLocalIdentifiers;
-(id)queryFailedProcessingStatusFromAssets:(id)arg0 forTaskID:(NSUInteger)arg1 ;
-(id)queryLocalIdentifiersForTaskID:(NSUInteger)arg0 withStatus:(NSUInteger)arg1 ;
-(int)_queryValue:(*NSInteger)arg0 forKey:(id)arg1 ;
-(int)executeDatabaseBlock:(id)arg0 ;
-(int)openDatabase;
-(int)parseHeader:(struct sqlite3_stmt *)arg0 startColumn:(int)arg1 analysis:(id)arg2 ;
-(int)parseResults:(struct sqlite3_stmt *)arg0 typeColumn:(int)arg1 dataColumn:(int)arg2 results:(id)arg3 ;
-(int)queryHeaderForAsset:(id)arg0 analysis:(*id)arg1 assetId:(*NSInteger)arg2 ;
-(int)queryHeadersForAssets:(id)arg0 analyses:(id)arg1 idMap:(id)arg2 ;
-(int)queryResultsForAssetId:(NSInteger)arg0 analysis:(id)arg1 ;
-(int)queryResultsForAssetId:(NSInteger)arg0 withTypes:(id)arg1 analysis:(id)arg2 ;
-(int)queryResultsForAssets:(id)arg0 withTypes:(id)arg1 batchResults:(id)arg2 ;
-(int)querySchedulingHistoryRecords:(*id)arg0 forActivityID:(NSUInteger)arg1 sinceDate:(id)arg2 ;
-(void)closeDatabase;
-(void)dealloc;


@end


#endif