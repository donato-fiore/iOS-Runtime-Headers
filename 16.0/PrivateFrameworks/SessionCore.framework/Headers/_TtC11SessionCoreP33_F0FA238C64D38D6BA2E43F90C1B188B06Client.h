// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11SESSIONCOREP33_F0FA238C64D38D6BA2E43F90C1B188B06CLIENT_H
#define _TTC11SESSIONCOREP33_F0FA238C64D38D6BA2E43F90C1B188B06CLIENT_H

@protocol _TtP11ActivityKit29ActivityInputServiceXPCServer_;

#import <Foundation/Foundation.h>


@interface _TtC11SessionCoreP33_F0FA238C64D38D6BA2E43F90C1B188B06Client : NSObject <_TtP11ActivityKit29ActivityInputServiceXPCServer_>

 {
    ? delegate;
    ? connection;
    ? targetQueue;
    ? queue;
    ? activityAuthorizer;
    ? requester;
    ? backoffPolicy;
    ? backoffBudget;
    ? ephemeralActivityIdentifiers;
}




-(id)init;
-(id)requestActivityWithRequest:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)endActivityWithId:(id)arg0 payload:(id)arg1 options:(id)arg2 ;
-(void)updateActivityWithId:(id)arg0 payload:(id)arg1 ;


@end


#endif