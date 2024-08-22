// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SABUNDLEMANAGER_H
#define SABUNDLEMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SABundleManager : NSObject {
    NSMutableDictionary *_assertionMap;
}




+(id)approvedBundleIdsForService:(struct __CFString *)arg0 ;
+(id)bundleURLForAuditToken:(struct ? )arg0 ;
+(id)bundleURLForCurrentConnection;
+(id)locationBundle;
-(id)init;
-(void)addAssertion:(id)arg0 forProcessId:(int)arg1 ;
-(void)cleanupInvalidAssertions;
-(void)openApplicationInBackgroundWithBundleId:(id)arg0 withReason:(NSInteger)arg1 ;
-(void)openApplicationInForegroundWithBundleId:(id)arg0 withReason:(NSInteger)arg1 ;
-(void)wakeApprovedAppsWithReason:(NSInteger)arg0 ;


@end


#endif