// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11SESSIONCOREP33_3EB6553D2992046DCD21680C8109860026AUTHORIZATIONSERVICECLIENT_H
#define _TTC11SESSIONCOREP33_3EB6553D2992046DCD21680C8109860026AUTHORIZATIONSERVICECLIENT_H

@protocol _TtP11ActivityKit30ActivityAuthorizationXPCServer_;

#import <Foundation/Foundation.h>


@interface _TtC11SessionCoreP33_3EB6553D2992046DCD21680C8109860026AuthorizationServiceClient : NSObject <_TtP11ActivityKit30ActivityAuthorizationXPCServer_>

 {
    ? connection;
    ? authorizationManager;
}




-(BOOL)areActivitiesEnabledForBundleId:(id)arg0 ;
-(BOOL)areActivitiesEnabledForCurrentProcess;
-(BOOL)setActivitiesAuthorizationFor:(id)arg0 with:(id)arg1 error:(*id)arg2 ;
-(BOOL)supportsActivitiesForBundleId:(id)arg0 ;
-(id)init;


@end


#endif