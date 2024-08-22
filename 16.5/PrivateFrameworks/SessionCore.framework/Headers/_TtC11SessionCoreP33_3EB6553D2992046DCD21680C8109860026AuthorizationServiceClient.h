// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11SESSIONCOREP33_3EB6553D2992046DCD21680C8109860026AUTHORIZATIONSERVICECLIENT_H
#define _TTC11SESSIONCOREP33_3EB6553D2992046DCD21680C8109860026AUTHORIZATIONSERVICECLIENT_H

@protocol ACActivityAuthorizationXPCServer;

#import <Foundation/Foundation.h>


@interface _TtC11SessionCoreP33_3EB6553D2992046DCD21680C8109860026AuthorizationServiceClient : NSObject <ACActivityAuthorizationXPCServer>

 {
    ? connection;
    ? authorizationManager;
    ? cancellables;
}




-(BOOL)areActivitiesEnabledForBundleIdentifier:(id)arg0 ;
-(BOOL)areActivitiesEnabledForCurrentProcess;
-(BOOL)areFrequentPushesEnabledForBundleIdentifier:(id)arg0 ;
-(BOOL)areFrequentPushesEnabledForCurrentProcess;
-(BOOL)setActivitiesAuthorizationForBundleIdentifier:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)setFrequentPushesEnabledForBundleIdentifier:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)init;


@end


#endif