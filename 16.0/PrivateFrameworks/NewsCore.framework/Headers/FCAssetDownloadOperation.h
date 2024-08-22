// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCASSETDOWNLOADOPERATION_H
#define FCASSETDOWNLOADOPERATION_H

@class NSURL, NSDictionary, NSData, NSString;


#import "FCNetworkOperation.h"
#import "FCNetworkBehaviorMonitor.h"
#import "FCNetworkEvent.h"
#import "FCURLRequestScheduler.h"

@interface FCAssetDownloadOperation : FCNetworkOperation

@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders; // ivar: _additionalRequestHTTPHeaders
@property (nonatomic) NSUInteger cachePolicy; // ivar: _cachePolicy
@property (copy, nonatomic) id *dataDownloadCompletionHandler; // ivar: _dataDownloadCompletionHandler
@property (nonatomic) NSInteger downloadDestination; // ivar: _downloadDestination
@property (retain, nonatomic) NSData *downloadedData; // ivar: _downloadedData
@property (retain, nonatomic) NSURL *downloadedFileURL; // ivar: _downloadedFileURL
@property (copy, nonatomic) id *fileDownloadCompletionHandler; // ivar: _fileDownloadCompletionHandler
@property (copy, nonatomic) NSString *loggingKey; // ivar: _loggingKey
@property (retain, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // ivar: _networkBehaviorMonitor
@property (retain, nonatomic) FCNetworkEvent *networkEvent; // ivar: _networkEvent
@property (nonatomic) int networkEventType; // ivar: _networkEventType
@property (retain, nonatomic) NSString *requestUUID; // ivar: _requestUUID
@property (retain, nonatomic) FCURLRequestScheduler *scheduler; // ivar: _scheduler


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