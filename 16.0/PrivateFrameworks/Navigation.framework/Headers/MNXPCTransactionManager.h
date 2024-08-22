// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNXPCTRANSACTIONMANAGER_H
#define MNXPCTRANSACTIONMANAGER_H

@class NSHashTable;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface MNXPCTransactionManager : NSObject {
    NSObject<OS_os_transaction> *_xpcTransaction;
    NSHashTable *_requesters;
}




+(id)sharedInstance;
-(void)addHighMemoryThresholdRequest:(id)arg0 ;
-(void)removeHighMemoryThresholdRequest:(id)arg0 afterDelay:(CGFloat)arg1 ;


@end


#endif