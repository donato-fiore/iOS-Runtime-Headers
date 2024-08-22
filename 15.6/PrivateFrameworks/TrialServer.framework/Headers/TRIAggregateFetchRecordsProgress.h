// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIAGGREGATEFETCHRECORDSPROGRESS_H
#define TRIAGGREGATEFETCHRECORDSPROGRESS_H

@class _PASLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TRIAggregateFetchRecordsProgress : NSObject {
    id *_progress;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
}




-(CGFloat)_fractionCompletedWithGuardedData:(id)arg0 ;
-(CGFloat)fractionCompleted;
-(id)initWithProgressBlock:(id)arg0 ;
-(void)_issueCurrentProgressWithGuardedData:(id)arg0 ;
-(void)registerRecordId:(id)arg0 withExpectedSize:(NSUInteger)arg1 ;
-(void)setComplete;
-(void)setFractionCompleted:(CGFloat)arg0 forRecordId:(id)arg1 ;
-(void)unregisterRecordId:(id)arg0 ;


@end


#endif