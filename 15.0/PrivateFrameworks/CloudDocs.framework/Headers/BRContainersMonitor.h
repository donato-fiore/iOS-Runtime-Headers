// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCONTAINERSMONITOR_H
#define BRCONTAINERSMONITOR_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BRContainersMonitor : NSObject {
    NSMutableDictionary *_observersByContainerID;
    NSMutableDictionary *_notifyTokenByContainerID;
    NSObject<OS_dispatch_queue> *_queue;
}




+(BOOL)isContainerID:(id)arg0 ;
+(BOOL)isContainerIDForeground:(id)arg0 ;
+(id)bundleIDFromPrimaryIdentifier:(id)arg0 secondaryIdentifier:(id)arg1 ;
+(id)containerIDFromPrimaryIdentifier:(id)arg0 secondaryIdentifier:(id)arg1 ;
-(id)init;
-(void)addObserver:(id)arg0 forContainerID:(id)arg1 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 forContainerID:(id)arg1 ;


@end


#endif