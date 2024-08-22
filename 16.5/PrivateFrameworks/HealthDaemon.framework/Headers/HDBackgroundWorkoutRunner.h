// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDBACKGROUNDWORKOUTRUNNER_H
#define HDBACKGROUNDWORKOUTRUNNER_H

@class HDAssertionManager, NSString;
@protocol HDProcessStateObserver, HDAssertionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDDaemon.h"

@interface HDBackgroundWorkoutRunner : NSObject <HDProcessStateObserver, HDAssertionObserver>

 {
    HDDaemon *_daemon;
    HDAssertionManager *_assertionManager;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasBackgroundPermissionForBundleIdentifier:(id)arg0 errorOut:(*id)arg1 ;
-(id)initWithDaemon:(id)arg0 ;
-(id)takeBackgroundRunningAssertionForOwnerIdentifier:(id)arg0 client:(id)arg1 includeCoreLocationAssertion:(BOOL)arg2 ;
-(void)assertionManager:(id)arg0 assertionInvalidated:(id)arg1 ;
-(void)assertionManager:(id)arg0 assertionTaken:(id)arg1 ;
-(void)dealloc;
-(void)processDidEnterForeground:(id)arg0 ;


@end


#endif