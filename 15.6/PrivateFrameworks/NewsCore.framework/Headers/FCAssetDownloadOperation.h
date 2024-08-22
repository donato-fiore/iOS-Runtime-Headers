// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCASSETDOWNLOADOPERATION_H
#define FCASSETDOWNLOADOPERATION_H

@class NSURL, NSDictionary, NSData, NSError, NSHTTPURLResponse, NSString;


#import "FCNetworkOperation.h"
#import "FCNetworkBehaviorMonitor.h"
#import "FCURLRequestScheduler.h"

@interface FCAssetDownloadOperation : FCNetworkOperation

@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders; // ivar: _additionalRequestHTTPHeaders
@property (nonatomic) NSUInteger cachePolicy; // ivar: _cachePolicy
@property (copy, nonatomic) id *dataDownloadCompletionHandler; // ivar: _dataDownloadCompletionHandler
@property (nonatomic) NSInteger downloadDestination; // ivar: _downloadDestination
@property (retain, nonatomic) NSData *downloadedData; // ivar: _downloadedData
@property (retain, nonatomic) NSURL *downloadedFileURL; // ivar: _downloadedFileURL
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) id *fileDownloadCompletionHandler; // ivar: _fileDownloadCompletionHandler
@property (retain, nonatomic) NSHTTPURLResponse *httpResponse; // ivar: _httpResponse
@property (copy, nonatomic) NSString *loggingKey; // ivar: _loggingKey
@property (retain, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // ivar: _networkBehaviorMonitor
@property (nonatomic) int networkEventType; // ivar: _networkEventType
@property (retain, nonatomic) NSString *requestUUID; // ivar: _requestUUID
@property (retain, nonatomic) NSString *responseMIMEType; // ivar: _responseMIMEType
@property (nonatomic) NSUInteger responseSize; // ivar: _responseSize
@property (retain, nonatomic) FCURLRequestScheduler *scheduler; // ivar: _scheduler
@property (nonatomic) CGFloat taskStartTime; // ivar: _taskStartTime
@property (retain, nonatomic) NSDictionary *timingData; // ivar: _timingData


-(BOOL)validateOperation;
-(NSUInteger)maxRetries;
-(id)init;
-(id)initWithURLRequestScheduler:(id)arg0 ;
-(id)throttleGroup;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)prepareOperation;


@end


#endif