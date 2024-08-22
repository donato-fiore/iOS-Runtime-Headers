// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPPROVIDERMONITOR_H
#define FPPROVIDERMONITOR_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FPProviderMonitor : NSObject {
    NSMutableDictionary *_observersByContainerID;
    NSMutableDictionary *_notifyTokenByContainerID;
    NSObject<OS_dispatch_queue> *_queue;
}




+(BOOL)isProviderIDForeground:(id)arg0 ;
+(id)providerIDForApplication:(id)arg0 sharedContainerIdentifier:(id)arg1 ;
-(BOOL)supportsWakesForProviderID:(id)arg0 ;
-(BOOL)wakeProviderID:(id)arg0 forSessionIdentifier:(id)arg1 ;
-(id)init;
-(void)addObserver:(id)arg0 forProviderID:(id)arg1 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 forProviderID:(id)arg1 ;


@end


#endif