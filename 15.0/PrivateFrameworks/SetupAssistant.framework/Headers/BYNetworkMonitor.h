// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BYNETWORKMONITOR_H
#define BYNETWORKMONITOR_H

@class NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BYNetworkMonitor : NSObject {
    *__SCNetworkReachability _reachability;
    NSHashTable *_observers;
    int _currentNetworkType;
    NSMutableDictionary *_networkTypeBlocks;
    NSObject<OS_dispatch_queue> *_networkTypeQueue;
}




+(BOOL)holdsWiFiAssertion;
+(id)sharedInstance;
+(void)setHoldsWiFiAssertion:(BOOL)arg0 ;
-(id)init;
-(int)_networkTypeFromFlags:(unsigned int)arg0 ;
-(int)currentNetworkType;
-(void)_initNetworkObservation;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)setCurrentNetworkType:(int)arg0 ;
-(void)withMinimumNetworkType:(int)arg0 timeout:(CGFloat)arg1 runBlock:(id)arg2 ;


@end


#endif