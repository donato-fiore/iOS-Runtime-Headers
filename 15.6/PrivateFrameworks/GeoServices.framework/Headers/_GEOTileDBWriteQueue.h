// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOTILEDBWRITEQUEUE_H
#define _GEOTILEDBWRITEQUEUE_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEOTileDB.h"

@interface _GEOTileDBWriteQueue : NSObject {
    NSUInteger _maxOperations;
    NSUInteger _maxOperationsSizeInBytes;
    NSMutableArray *_pendingOperations;
    GEOTileDB *_db;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _pendingSizeInBytes;
}




-(id)dataForKey:(struct _GEOTileKey *)arg0 ETag:(*id)arg1 originalLoadReason:(*unsigned char)arg2 isKnownNotToExist:(*BOOL)arg3 ;
-(id)init;
-(id)initWithDB:(id)arg0 maxOperations:(NSUInteger)arg1 maxOperationsSizeInBytes:(NSUInteger)arg2 ;
-(void)_flushPendingOperations;
-(void)_prunePendingOperationsSupercededByOperationOnIsolationQueue:(id)arg0 ;
-(void)addOperation:(id)arg0 ;
-(void)dropAllPendingOperations;
-(void)flushPendingOperations:(BOOL)arg0 ;
-(void)prunePendingOperationsSupercededByOperation:(id)arg0 ;


@end


#endif