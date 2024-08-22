// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGSQLITEDATABASESHAREDLOCK_H
#define SGSQLITEDATABASESHAREDLOCK_H


#import <Foundation/Foundation.h>


@interface SGSqliteDatabaseSharedLock : NSObject {
    _opaque_pthread_mutex_t _lock;
}


@property (readonly, nonatomic) NSInteger writeTransactionDepth; // ivar: _writeTransactionDepth


-(id)init;
-(void)dealloc;
-(void)runWithLockAcquired:(id)arg0 ;


@end


#endif