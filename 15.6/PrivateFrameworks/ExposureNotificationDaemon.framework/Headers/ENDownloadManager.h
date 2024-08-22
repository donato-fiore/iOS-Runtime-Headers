// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENDOWNLOADMANAGER_H
#define ENDOWNLOADMANAGER_H

@class NSArray, NSURLSession, NSURL, NSBackgroundActivityScheduler;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ENSecureArchiveFileWrapper.h"
#import "ENDownloadManagerState.h"

@interface ENDownloadManager : NSObject {
    BOOL _invalidated;
    BOOL _didUnscheduleOnce;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_pendingEndpoints;
    ENSecureArchiveFileWrapper *_stateFileWrapper;
}


@property (retain, nonatomic) NSURLSession *URLSession; // ivar: _URLSession
@property (readonly, copy, nonatomic) NSURL *directoryURL; // ivar: _directoryURL
@property (readonly, nonatomic) NSUInteger enabledEndpointCount;
@property (copy, nonatomic) id *errorMetricReporter; // ivar: _errorMetricReporter
@property (readonly, nonatomic) NSBackgroundActivityScheduler *fetchScheduler; // ivar: _fetchScheduler
@property (readonly, nonatomic) ENDownloadManagerState *state; // ivar: _state


-(BOOL)_copyDownloadedFileAtPath:(id)arg0 toPath:(id)arg1 removeExisting:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_enumerateDownloadsWithError:(*id)arg0 handler:(id)arg1 ;
-(BOOL)_readStateIfNecessaryWithError:(*id)arg0 ;
-(BOOL)_saveState;
-(BOOL)_saveStateWithError:(*id)arg0 ;
-(BOOL)_shouldFetchFromEndpointWithState:(id)arg0 time:(CGFloat)arg1 ;
-(BOOL)enumerateDownloadsWithError:(*id)arg0 handler:(id)arg1 ;
-(CGFloat)_aggregateDownloadIntervalFromEndpoints:(id)arg0 ;
-(id)_baseDirectoryPathForEndpointWithState:(id)arg0 ;
-(id)_countOfAvailableDownloadsWithError:(*id)arg0 ;
-(id)_downloadsDirectoryPathForEndpointState:(id)arg0 ;
-(id)_indexFilePathForEndpointState:(id)arg0 ;
-(id)_nextFilePathToDownloadWithEndpointState:(id)arg0 ;
-(id)countOfAvailableDownloadsWithError:(*id)arg0 ;
-(id)createScheduler;
-(id)description;
-(id)initWithDirectoryURL:(id)arg0 queue:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_activate;
-(void)_backgroundActivityFiredWithCompletion:(id)arg0 ;
-(void)_downloadIndexWithTask:(id)arg0 ;
-(void)_downloadNextFileFromServerWithTask:(id)arg0 ;
-(void)_handleFileDownloadFinishedForTask:(id)arg0 serverFilePath:(id)arg1 downloadedFilePath:(id)arg2 ;
-(void)_handleIndexFileDownloadFinishedForTask:(id)arg0 filePath:(id)arg1 ;
-(void)_invalidate;
-(void)_performDownloadsWithScheduler:(id)arg0 atDate:(id)arg1 forced:(BOOL)arg2 completion:(id)arg3 ;
-(void)_purgeAllDownloads;
-(void)_purgeExpiredDownloadsWithDate:(id)arg0 ;
-(void)_purgeKeepingDownloadsForIdentifiers:(id)arg0 expiryDate:(id)arg1 ;
-(void)_reportErrorMetric:(unsigned int)arg0 ;
-(void)_reportErrorMetricForHTTPStatus:(NSInteger)arg0 forIndexFile:(BOOL)arg1 ;
-(void)_setDownloadEndpoints:(id)arg0 ;
-(void)_update;
-(void)_updateFetchSchedule;
-(void)activate;
-(void)invalidate;
-(void)performDownloadsAtDate:(id)arg0 forced:(BOOL)arg1 completion:(id)arg2 ;
-(void)performDownloadsForced:(BOOL)arg0 completion:(id)arg1 ;
-(void)purgeAllDownloads;
-(void)purgeExpiredDownloadsWithDate:(id)arg0 ;
-(void)setDownloadEndpoints:(id)arg0 ;
-(void)update;


@end


#endif