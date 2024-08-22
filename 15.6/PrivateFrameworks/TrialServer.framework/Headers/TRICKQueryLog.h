// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRICKQUERYLOG_H
#define TRICKQUERYLOG_H

@class _PASLock;
@protocol TRIPaths, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TRICKQueryLog : NSObject {
    id<TRIPaths> *_paths;
    NSObject<OS_dispatch_queue> *_queue;
    _PASLock *_lock;
}




-(id)initWithPaths:(id)arg0 ;
-(void)_logQueryWithRecordType:(id)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 guardedData:(id)arg3 ;
-(void)_openFileIfNeededWithGuardedData:(id)arg0 ;
-(void)logQueryWithRecordType:(id)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 ;


@end


#endif