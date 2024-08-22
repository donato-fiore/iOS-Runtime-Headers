// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSEARCHABLEINDEXREQUEST_H
#define CSSEARCHABLEINDEXREQUEST_H

@class NSData, NSString;

#import <Foundation/Foundation.h>

#import "CSDataWrapper.h"
#import "CSSearchableIndex.h"

@interface CSSearchableIndexRequest : NSObject

@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (copy, nonatomic) id *completionDataBlock; // ivar: _completionDataBlock
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) CSDataWrapper *dataWrapper; // ivar: _dataWrapper
@property (nonatomic) BOOL finished; // ivar: _finished
@property (retain, nonatomic) CSSearchableIndex *index; // ivar: _index
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSUInteger maxRetryCount; // ivar: _maxRetryCount
@property (copy, nonatomic) id *performBlock; // ivar: _performBlock
@property (nonatomic) uint8_t requestID; // ivar: _requestID
@property (nonatomic) NSUInteger retryCount; // ivar: _retryCount
@property (nonatomic) BOOL shouldThrottle; // ivar: _shouldThrottle
@property (nonatomic) BOOL started; // ivar: _started
@property (nonatomic) BOOL throttled; // ivar: _throttled


+(void)initialize;
-(id)description;
-(id)initWithSearchableIndex:(id)arg0 label:(id)arg1 ;
-(void)_finishWithError:(id)arg0 ;
-(void)_perform;
-(void)_throttleIfNecessary;
-(void)_unthrottleIfNecessary;
-(void)dealloc;
-(void)finishWithError:(id)arg0 ;
-(void)retryIfNecessaryWithError:(id)arg0 ;
-(void)retryIfNecessaryWithError:(id)arg0 dataWrapper:(id)arg1 ;
-(void)start;


@end


#endif