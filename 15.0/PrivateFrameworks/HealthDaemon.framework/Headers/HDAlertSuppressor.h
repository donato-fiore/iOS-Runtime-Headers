// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDALERTSUPPRESSOR_H
#define HDALERTSUPPRESSOR_H

@class HDAssertionManager, NSMutableSet, NSString;
@protocol HDProcessStateObserver, HDAssertionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDDaemon.h"

@interface HDAlertSuppressor : NSObject <HDProcessStateObserver, HDAssertionObserver>

 {
    HDDaemon *_daemon;
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    NSMutableSet *_waitingForSuspension;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createAndTakeAssertionForOwnerIdentifier:(id)arg0 processBundleIdentifier:(id)arg1 ;
-(id)initWithDaemon:(id)arg0 ;
-(void)assertionManager:(id)arg0 assertionInvalidated:(id)arg1 ;
-(void)assertionManager:(id)arg0 assertionTaken:(id)arg1 ;
-(void)dealloc;
-(void)processDidEnterBackground:(id)arg0 ;
-(void)processDidEnterForeground:(id)arg0 ;
-(void)processResumed:(id)arg0 ;
-(void)processSuspended:(id)arg0 ;
-(void)processTerminated:(id)arg0 ;


@end


#endif