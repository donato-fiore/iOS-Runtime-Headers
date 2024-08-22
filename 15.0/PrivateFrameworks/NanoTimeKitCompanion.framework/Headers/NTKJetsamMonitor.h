// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKJETSAMMONITOR_H
#define NTKJETSAMMONITOR_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NTKJetsamInfoFetcher.h"

@interface NTKJetsamMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_monitorQ;
    NSObject<OS_dispatch_source> *_monitorTimer;
    int _transactionCount;
    NTKJetsamInfoFetcher *_fetcher;
}




+(id)sharedJetsamMonitor;
-(id)init;
-(void)decrementTransactionCount;
-(void)incrementTransactionCount;


@end


#endif