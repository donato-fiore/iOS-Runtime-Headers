// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANTRANSACTIONINFO_H
#define ANTRANSACTIONINFO_H

@protocol OS_dispatch_source, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface ANTransactionInfo : NSObject

@property (nonatomic) CGFloat expiration; // ivar: _expiration
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


+(id)infoWithTransaction:(id)arg0 ;


@end


#endif