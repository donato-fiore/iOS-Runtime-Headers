// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSTRANSACTIONSTORE_H
#define SSTRANSACTIONSTORE_H

@class NSCountedSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSTransactionStore : NSObject {
    NSCountedSet *_transactionCount;
    NSMutableDictionary *_transactionStore;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}




+(id)defaultStore;
-(id)init;
-(void)releaseKeepAliveWithTransactionID:(id)arg0 ;
-(void)takeKeepAliveWithTransactionID:(id)arg0 ;


@end


#endif