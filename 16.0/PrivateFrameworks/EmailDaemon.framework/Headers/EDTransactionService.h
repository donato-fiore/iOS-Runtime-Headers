// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDTRANSACTIONSERVICE_H
#define EDTRANSACTIONSERVICE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EDTransactionService : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName


-(BOOL)hasPendingTransactions;
-(id)initWithServiceName:(id)arg0 ;
-(id)startTransaction;
-(void)endTransaction:(id)arg0 ;
-(void)resetPendingTransactions;


@end


#endif