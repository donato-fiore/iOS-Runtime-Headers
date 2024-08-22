// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MMCSOPERATIONMETRIC_H
#define MMCSOPERATIONMETRIC_H

@class NSMutableDictionary, NSString, NSMutableArray, NSArray, NSMutableSet, NSDate;
@protocol MMCSOperationMetric;

#import <Foundation/Foundation.h>


@interface MMCSOperationMetric : NSObject <MMCSOperationMetric>



@property NSUInteger bytesDownloaded; // ivar: _bytesDownloaded
@property NSUInteger bytesUploaded; // ivar: _bytesUploaded
@property (readonly) NSMutableDictionary *chunkCountByChunkProfile; // ivar: _chunkCountByChunkProfile
@property NSUInteger connections; // ivar: _connections
@property NSUInteger connectionsCreated; // ivar: _connectionsCreated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat duration; // ivar: _duration
@property CGFloat executing; // ivar: _executing
@property (readonly) NSMutableDictionary *fileCountByChunkProfile; // ivar: _fileCountByChunkProfile
@property (readonly) NSUInteger hash;
@property CGFloat queueing; // ivar: _queueing
@property (retain, nonatomic) NSMutableArray *ranges; // ivar: _ranges
@property (readonly) NSArray *rangesCopy;
@property (readonly) NSMutableSet *requestUUIDs; // ivar: _requestUUIDs
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (readonly) NSMutableDictionary *totalBytesByChunkProfile; // ivar: _totalBytesByChunkProfile


-(CGFloat)absoluteStart;
-(CGFloat)absoluteStop;
-(CGFloat)other;
-(NSInteger)compareExecutingStartTime:(id)arg0 ;
-(NSInteger)compareStartTime:(id)arg0 ;
-(id)describeRanges;
-(id)initWithDate:(id)arg0 ;
-(id)newRangeWithOperationState:(NSUInteger)arg0 startDate:(id)arg1 duration:(CGFloat)arg2 ;
-(void)addRange:(id)arg0 ;


@end


#endif