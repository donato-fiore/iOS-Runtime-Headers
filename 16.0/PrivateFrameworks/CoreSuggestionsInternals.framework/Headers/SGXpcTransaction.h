// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGXPCTRANSACTION_H
#define SGXPCTRANSACTION_H

@protocol OS_os_transaction, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface SGXpcTransaction : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    atomic_flag _done;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}




+(id)transactionWithName:(*void)arg0 ;
-(BOOL)doneReturningWasDone;
-(id)init;
-(id)initWithName:(*void)arg0 ;
-(void)dealloc;
-(void)done;
-(void)setTimeout:(CGFloat)arg0 ;


@end


#endif