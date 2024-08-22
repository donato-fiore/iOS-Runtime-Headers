// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNXPCTRANSACTIONCOUNTER_H
#define MNXPCTRANSACTIONCOUNTER_H

@class NSLock;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface MNXPCTransactionCounter : NSObject {
    NSObject<OS_os_transaction> *_osTransaction;
    NSLock *_countLock;
    NSUInteger _count;
}




-(NSUInteger)count;
-(id)init;
-(void)dealloc;
-(void)decrement;
-(void)increment:(id)arg0 ;


@end


#endif