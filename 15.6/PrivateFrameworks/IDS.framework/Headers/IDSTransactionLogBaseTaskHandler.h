// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSTRANSACTIONLOGBASETASKHANDLER_H
#define IDSTRANSACTIONLOGBASETASKHANDLER_H

@protocol OS_dispatch_queue;


#import "IDSTransactionLogTaskHandler.h"
#import "IDSTransactionLogTask.h"

@interface IDSTransactionLogBaseTaskHandler : IDSTransactionLogTaskHandler

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) IDSTransactionLogTask *task; // ivar: _task


-(id)initWithTask:(id)arg0 delegate:(id)arg1 queue:(id)arg2 ;
-(void)perform;


@end


#endif