// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPREACHABILITYMONITOR_H
#define FPREACHABILITYMONITOR_H

@class NSHashTable, NSNumber;
@protocol OS_dispatch_queue, NSObject;

#import <Foundation/Foundation.h>


@interface FPReachabilityMonitor : NSObject {
    NSHashTable *_reachabilityObservers;
    *__SCNetworkReachability _reachabilityRef;
    NSObject<OS_dispatch_queue> *_queue;
    id<NSObject> *_accountDidChangeNotificationObserver;
    NSNumber *_isCellularEnabledForDocumentsAndData;
}


@property (nonatomic) unsigned int reachabilityFlags; // ivar: _reachabilityFlags


+(BOOL)isNetworkReachableForFlags:(unsigned int)arg0 ;
+(id)_notifAccountStore;
+(id)sharedReachabilityMonitor;
-(BOOL)_isCellularAllowedForBR;
-(BOOL)isNetworkReachableForBundle:(id)arg0 ;
-(id)init;
-(void)_accountDidChange;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;


@end


#endif