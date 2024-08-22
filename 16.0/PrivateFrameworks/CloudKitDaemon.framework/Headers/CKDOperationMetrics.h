// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDOPERATIONMETRICS_H
#define CKDOPERATIONMETRICS_H

@class NSMutableDictionary, NSString, NSMutableArray, NSArray, NSMutableSet, NSDate;
@protocol MMCSOperationMetric, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKDOperationMetrics : NSObject <MMCSOperationMetric, NSCopying, NSSecureCoding>



@property NSUInteger assetsDownloaded; // ivar: _assetsDownloaded
@property NSUInteger assetsDownloadedFileSize; // ivar: _assetsDownloadedFileSize
@property NSUInteger assetsUploaded; // ivar: _assetsUploaded
@property NSUInteger assetsUploadedFileSize; // ivar: _assetsUploadedFileSize
@property NSUInteger bytesDownloaded; // ivar: _bytesDownloaded
@property NSUInteger bytesUploaded; // ivar: _bytesUploaded
@property (retain, nonatomic) NSMutableDictionary *chunkCountByChunkProfile; // ivar: _chunkCountByChunkProfile
@property NSUInteger connections; // ivar: _connections
@property NSUInteger connectionsCreated; // ivar: _connectionsCreated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat duration; // ivar: _duration
@property CGFloat executing; // ivar: _executing
@property (retain, nonatomic) NSMutableDictionary *fileCountByChunkProfile; // ivar: _fileCountByChunkProfile
@property (readonly) NSUInteger hash;
@property CGFloat queueing; // ivar: _queueing
@property (retain, nonatomic) NSMutableArray *ranges; // ivar: _ranges
@property (readonly) NSArray *rangesCopy;
@property NSUInteger recordsDeleted; // ivar: _recordsDeleted
@property NSUInteger recordsDownloaded; // ivar: _recordsDownloaded
@property NSUInteger recordsUploaded; // ivar: _recordsUploaded
@property NSUInteger requestCount; // ivar: _requestCount
@property (retain, nonatomic) NSMutableDictionary *requestOperationCountsByType; // ivar: _requestOperationCountsByType
@property (readonly) NSMutableSet *requestUUIDs; // ivar: _requestUUIDs
@property NSUInteger retries; // ivar: _retries
@property (retain) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *totalBytesByChunkProfile; // ivar: _totalBytesByChunkProfile


+(BOOL)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(id)_initWithStartDate:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)newRangeWithOperationState:(NSUInteger)arg0 startDate:(id)arg1 duration:(CGFloat)arg2 ;
-(void)addCKSpecificMetricsFromMetrics:(id)arg0 ;
-(void)addRange:(id)arg0 ;
-(void)addRequestOperationCountsByOperationType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif