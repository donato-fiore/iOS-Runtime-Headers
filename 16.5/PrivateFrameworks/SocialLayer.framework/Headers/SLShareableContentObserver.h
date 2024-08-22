// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLSHAREABLECONTENTOBSERVER_H
#define SLSHAREABLECONTENTOBSERVER_H

@class NSString;
@protocol NSUserActivityObserver, SLDServiceProxyDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SLDServiceProxy.h"

@interface SLShareableContentObserver : NSObject <NSUserActivityObserver, SLDServiceProxyDelegate>

 {
    SLDServiceProxy *_serviceProxy;
    NSObject<OS_dispatch_queue> *_serviceQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsRefresh; // ivar: _needsRefresh
@property (readonly, nonatomic) SLDServiceProxy *serviceProxy;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


+(id)sharedObserver;
-(BOOL)applicationIsActive;
-(BOOL)needsToRefresh;
-(BOOL)needsToResume;
-(id)init;
-(void)addObservers;
-(void)connectAndRefreshNow;
-(void)didBecomeActiveNotification:(id)arg0 ;
-(void)didEnterBackgroundNotification:(id)arg0 ;
-(void)pause;
-(void)refreshIfNeeded;
-(void)reset;
-(void)resumeIfNeeded;
-(void)serviceProxyDidConnect:(id)arg0 ;
-(void)serviceProxyDidDisconnect:(id)arg0 ;
-(void)userActivityWasCreated:(id)arg0 ;
-(void)willResignActiveNotification:(id)arg0 ;


@end


#endif