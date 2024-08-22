// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKAPPLIBRARYCORE_H
#define WLKAPPLIBRARYCORE_H

@class NSXPCConnection, PSSSSubscriptionManagerInternal;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WLKAppLibraryCore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    PSSSSubscriptionManagerInternal *_subscriptionManager;
}




+(id)sharedInstance;
-(id)_connection;
-(id)_nonConformingBundleList;
-(id)_otherBundlesOfInterest;
-(id)init;
-(void)_fetchApplicationsInProcess:(id)arg0 ;
-(void)fetchApplications:(id)arg0 ;


@end


#endif