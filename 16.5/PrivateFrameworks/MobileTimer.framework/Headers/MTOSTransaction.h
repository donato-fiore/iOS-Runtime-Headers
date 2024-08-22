// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTOSTRANSACTION_H
#define MTOSTRANSACTION_H

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface MTOSTransaction : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


+(id)transactionWithDescription:(id)arg0 ;
+(id)transactionWithDescription:(id)arg0 timeout:(CGFloat)arg1 ;
+(id)transactionWithDescription:(id)arg0 timeout:(CGFloat)arg1 timeoutBlock:(id)arg2 ;
-(id)initWithDescription:(id)arg0 timeout:(CGFloat)arg1 timeoutBlock:(id)arg2 ;
-(void)_cancel;
-(void)dealloc;
-(void)end;


@end


#endif