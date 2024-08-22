// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKWORKQUEUE_H
#define NPKWORKQUEUE_H

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPKWorkQueue : NSObject

@property (nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (nonatomic) BOOL performingWork; // ivar: _performingWork
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableArray *remainingWork; // ivar: _remainingWork
@property (nonatomic) BOOL takeOutTransactions; // ivar: _takeOutTransactions
@property (retain, nonatomic) NSString *workQueueName; // ivar: _workQueueName


-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 takeOutTransactions:(BOOL)arg1 ;
-(void)_onQueue_doWorkIfNecessary;
-(void)dealloc;
-(void)performWork:(id)arg0 ;


@end


#endif