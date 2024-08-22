// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOSIMPLETILEREQUESTEROPERATION_H
#define _GEOSIMPLETILEREQUESTEROPERATION_H

@class NSURL, NSData, NSString;
@protocol GEODataSessionTaskDelegate, OS_os_activity, GEOSimpleTileRequesterOperationDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_GEOSimpleTileRequesterOperation.h"
#import "GEODataSession.h"
#import "GEODataRequest.h"
#import "GEODataSessionTask.h"

@interface _GEOSimpleTileRequesterOperation : NSObject <GEODataSessionTaskDelegate>

 {
    CGFloat _startTime;
    CGFloat _endTime;
    int _attempts;
    int _checksumMethod;
    uint8_t _priority;
    BOOL _shouldReportAnalytics;
    BOOL _isRunning;
}


@property (readonly, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSObject<OS_os_activity> *activity; // ivar: _activity
@property (retain, nonatomic) _GEOSimpleTileRequesterOperation *baseTile; // ivar: _baseTile
@property (readonly, nonatomic) NSUInteger contentLength;
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) GEODataSession *dataSession; // ivar: _dataSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<GEOSimpleTileRequesterOperationDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *downloadedFileURL;
@property (readonly, nonatomic, getter=isExistingCachedDataCurrent) BOOL existingCachedDataCurrent; // ivar: _existingCachedDataCurrent
@property (readonly, nonatomic) BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int httpResponseStatusCode;
@property (nonatomic) _GEOTileKey key; // ivar: _key
@property (retain, nonatomic) _GEOSimpleTileRequesterOperation *localizationTile; // ivar: _localizationTile
@property (retain, nonatomic) NSObject<OS_os_activity> *parentTileActivity; // ivar: _parentTileActivity
@property unsigned int priority;
@property (readonly, nonatomic) GEODataRequest *request; // ivar: _request
@property (retain, nonatomic) NSString *requestingBundleId; // ivar: _requestingBundleId
@property (retain, nonatomic) NSString *requestingBundleVersion; // ivar: _requestingBundleVersion
@property (retain, nonatomic) NSString *responseEtag; // ivar: _responseEtag
@property (readonly, nonatomic) BOOL responseIsCacheable;
@property (readonly, nonatomic) NSInteger responseSource;
@property (nonatomic) BOOL shouldDownloadToDisk; // ivar: _shouldDownloadToDisk
@property (nonatomic) NSUInteger signpostID; // ivar: _signpostID
@property (readonly) Class superclass;
@property (retain, nonatomic) GEODataSessionTask *task; // ivar: _task
@property (nonatomic) CGFloat tileLoaderCreateTime; // ivar: _tileLoaderCreateTime
@property (nonatomic) CGFloat timeout; // ivar: _timeout


-(CGFloat)elapsed;
-(CGFloat)startTime;
-(id)init;
-(id)initWithRequest:(id)arg0 delegateQueue:(id)arg1 delegate:(id)arg2 ;
-(void)cancel;
-(void)clearAllRelatedOperations;
-(void)dataSession:(id)arg0 didCompleteTask:(id)arg1 ;
-(void)dataSession:(id)arg0 shouldConvertDataTask:(id)arg1 toDownloadTaskForEstimatedResponseSize:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)start;


@end


#endif