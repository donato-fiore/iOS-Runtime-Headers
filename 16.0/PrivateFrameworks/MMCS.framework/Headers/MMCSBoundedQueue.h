// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MMCSBOUNDEDQUEUE_H
#define MMCSBOUNDEDQUEUE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MMCSBoundedQueue : NSObject

@property (nonatomic) *dispatch_semaphore_s boundsExceeded; // ivar: _boundsExceeded
@property (nonatomic) NSUInteger bytesErrorLevel; // ivar: _bytesErrorLevel
@property (readonly, nonatomic) NSUInteger bytesUpperBound; // ivar: _bytesUpperBound
@property (retain, nonatomic) NSMutableArray *entries; // ivar: _entries
@property (readonly, nonatomic) BOOL isValid; // ivar: _isValid


-(BOOL)_sync_isFull;
-(NSUInteger)_sync_aggregateByteCount;
-(id)initWithUpperBound:(NSUInteger)arg0 ;
-(void)addData:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeNextDataWithBlock:(id)arg0 ;


@end


#endif