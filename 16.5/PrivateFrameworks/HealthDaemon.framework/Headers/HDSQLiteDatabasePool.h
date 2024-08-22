// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSQLITEDATABASEPOOL_H
#define HDSQLITEDATABASEPOOL_H

@class NSCondition, NSMutableSet, NSMapTable, NSString;
@protocol HDDiagnosticObject, OS_dispatch_group, OS_dispatch_semaphore, HDSQLiteDatabasePoolDelegate;

#import <Foundation/Foundation.h>


@interface HDSQLiteDatabasePool : NSObject <HDDiagnosticObject>

 {
    NSCondition *_cacheCondition;
    NSMutableSet *_cache;
    NSObject<OS_dispatch_group> *_flushGroup;
    NSUInteger _cacheGeneration;
    NSInteger _cacheSize;
    NSInteger _concurrentReaderLimit;
    uint8_t _count;
    os_unfair_lock_s _checkoutLock;
    NSMapTable *_checkoutMap;
    NSObject<OS_dispatch_semaphore> *_readerSemaphore;
    NSObject<OS_dispatch_semaphore> *_writerSemaphore;
}


@property (readonly) NSInteger cacheSize;
@property (readonly) NSInteger checkedOutDatabaseCount;
@property (readonly) NSInteger concurrentReaderLimit;
@property (readonly) NSInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HDSQLiteDatabasePoolDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)checkOutDatabaseWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)currentFlushGroup;
-(id)diagnosticDescription;
-(id)flush;
-(id)initWithConcurrentReaderLimit:(NSInteger)arg0 ;
-(void)checkInDatabase:(id)arg0 flushImmediately:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif