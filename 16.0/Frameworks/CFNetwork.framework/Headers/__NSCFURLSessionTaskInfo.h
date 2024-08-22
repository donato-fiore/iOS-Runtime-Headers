// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSCFURLSESSIONTASKINFO_H
#define __NSCFURLSESSIONTASKINFO_H

@class NSURL, AVURLAsset, NSDictionary, NSData, NSString, AVAssetDownloadConfiguration, NSDate, NSError, NSUUID;
@protocol NSSecureCoding, STExtractor;

#import <Foundation/Foundation.h>

#import "NSURLRequest.h"
#import "NSURLResponse.h"
#import "__CFN_TaskMetrics.h"

@interface __NSCFURLSessionTaskInfo : NSObject <NSSecureCoding>



@property NSUInteger AVAssetDownloadToken; // ivar: _AVAssetDownloadToken
@property (copy) NSURL *AVAssetURL; // ivar: _AVAssetURL
@property (retain) AVURLAsset *AVURLAsset; // ivar: _AVURLAsset
@property (copy) NSURL *URL; // ivar: _URL
@property unsigned short _TLSMaximumSupportedProtocolVersion; // ivar: __TLSMaximumSupportedProtocolVersion
@property unsigned short _TLSMinimumSupportedProtocolVersion; // ivar: __TLSMinimumSupportedProtocolVersion
@property (retain) NSDictionary *_backgroundTrailers; // ivar: __backgroundTrailers
@property (nonatomic) BOOL _doesSZExtractorConsumeExtractedData; // ivar: __doesSZExtractorConsumeExtractedData
@property (retain, nonatomic) NSObject<STExtractor> *_extractor; // ivar: __extractor
@property (nonatomic) BOOL _hasSZExtractor; // ivar: __hasSZExtractor
@property (nonatomic) BOOL _updatedStreamingZipModificationDate; // ivar: __updatedStreamingZipModificationDate
@property (copy) NSDictionary *additionalProperties; // ivar: _additionalProperties
@property (copy) NSData *assetArtworkData; // ivar: _assetArtworkData
@property (copy) NSString *assetTitle; // ivar: _assetTitle
@property (copy) NSString *avAssetDownloadChildDownloadSessionIdentifier; // ivar: _avAssetDownloadChildDownloadSessionIdentifier
@property NSInteger basePriority; // ivar: _basePriority
@property BOOL basePrioritySetExplicitly; // ivar: _basePrioritySetExplicitly
@property (copy) NSString *bundleID; // ivar: _bundleID
@property NSInteger bytesPerSecondLimit; // ivar: _bytesPerSecondLimit
@property NSInteger countOfBytesClientExpectsToReceive; // ivar: _countOfBytesClientExpectsToReceive
@property NSInteger countOfBytesClientExpectsToSend; // ivar: _countOfBytesClientExpectsToSend
@property NSInteger countOfBytesExpectedToReceive; // ivar: _countOfBytesExpectedToReceive
@property NSInteger countOfBytesExpectedToSend; // ivar: _countOfBytesExpectedToSend
@property NSInteger countOfBytesReceived; // ivar: _countOfBytesReceived
@property NSInteger countOfBytesSent; // ivar: _countOfBytesSent
@property CGFloat creationTime; // ivar: _creationTime
@property (copy) NSURLRequest *currentRequest; // ivar: _currentRequest
@property (copy) NSURL *destinationURL; // ivar: _destinationURL
@property BOOL disablesRetry; // ivar: _disablesRetry
@property (getter=isDiscretionary) BOOL discretionary; // ivar: _discretionary
@property NSInteger discretionaryOverride; // ivar: _discretionaryOverride
@property (retain) AVAssetDownloadConfiguration *downloadConfig; // ivar: _downloadConfig
@property (copy) NSURL *downloadFileURL; // ivar: _downloadFileURL
@property (copy) NSDate *earliestBeginDate; // ivar: _earliestBeginDate
@property BOOL enableSPIDelegateCallbacks; // ivar: _enableSPIDelegateCallbacks
@property (copy) NSError *error; // ivar: _error
@property BOOL establishedConnection; // ivar: _establishedConnection
@property NSUInteger expectedProgressTarget; // ivar: _expectedProgressTarget
@property BOOL expectingResumeCallback; // ivar: _expectingResumeCallback
@property (copy) NSURL *fileURL; // ivar: _fileURL
@property BOOL hasStarted; // ivar: _hasStarted
@property NSUInteger identifier; // ivar: _identifier
@property BOOL initializedWithAVAsset; // ivar: _initializedWithAVAsset
@property CGFloat loadingPriority; // ivar: _loadingPriority
@property NSUInteger lowThroughputTimerRetryCount; // ivar: _lowThroughputTimerRetryCount
@property BOOL mayBeDemotedToDiscretionary; // ivar: _mayBeDemotedToDiscretionary
@property (copy) NSDictionary *options; // ivar: _options
@property (copy) NSURLRequest *originalRequest; // ivar: _originalRequest
@property (copy) NSString *pathToDownloadTaskFile; // ivar: _pathToDownloadTaskFile
@property (copy) NSString *personaUniqueString; // ivar: _personaUniqueString
@property unsigned int qos; // ivar: _qos
@property (copy) NSDictionary *resolvedMediaSelectionPlist; // ivar: _resolvedMediaSelectionPlist
@property BOOL respondedToWillBeginDelayedRequestCallback; // ivar: _respondedToWillBeginDelayedRequestCallback
@property (copy) NSURLResponse *response; // ivar: _response
@property BOOL resumedAndWaitingForEarliestBeginDate; // ivar: _resumedAndWaitingForEarliestBeginDate
@property NSUInteger retryCount; // ivar: _retryCount
@property (copy) NSError *retryError; // ivar: _retryError
@property (copy) NSString *sessionID; // ivar: _sessionID
@property BOOL shouldCancelOnDisconnect; // ivar: _shouldCancelOnDisconnect
@property BOOL startedUserInitiated; // ivar: _startedUserInitiated
@property NSInteger state; // ivar: _state
@property (copy) NSString *storagePartitionIdentifier; // ivar: _storagePartitionIdentifier
@property NSUInteger suspendCount; // ivar: _suspendCount
@property (copy) NSString *taskDescription; // ivar: _taskDescription
@property NSUInteger taskKind; // ivar: _taskKind
@property (retain) __CFN_TaskMetrics *taskMetrics; // ivar: _taskMetrics
@property (copy) NSURL *temporaryDestinationURL; // ivar: _temporaryDestinationURL
@property CGFloat timeoutIntervalForResource; // ivar: _timeoutIntervalForResource
@property (copy) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(id)_loggableDescription;
-(id)initWithAVAggregateAssetDownloadChildDownloadSessionIdentifier:(id)arg0 assetTitle:(id)arg1 assetArtworkData:(id)arg2 options:(id)arg3 taskIdentifier:(NSUInteger)arg4 uniqueIdentifier:(id)arg5 bundleID:(id)arg6 sessionID:(id)arg7 ;
-(id)initWithAVAggregateDownloadTaskNoChildTaskKindWithURL:(id)arg0 destinationURL:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4 taskIdentifier:(NSUInteger)arg5 uniqueIdentifier:(id)arg6 bundleID:(id)arg7 sessionID:(id)arg8 enableSPIDelegateCallbacks:(BOOL)arg9 ;
-(id)initWithAVAssetDownloadURL:(id)arg0 destinationURL:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4 taskIdentifier:(NSUInteger)arg5 uniqueIdentifier:(id)arg6 bundleID:(id)arg7 sessionID:(id)arg8 downloadConfig:(id)arg9 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataTask:(id)arg0 uniqueIdentifier:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3 ;
-(id)initWithDownloadTask:(id)arg0 uniqueIdentifier:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3 ;
-(id)initWithUploadTask:(id)arg0 uniqueIdentifier:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3 ;
-(void)_logTaskUUIDMapping;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif