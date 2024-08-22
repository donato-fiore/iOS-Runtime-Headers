// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11SESSIONCOREP33_4CCBD309304C86708E1086DB2B0619886CLIENT_H
#define _TTC11SESSIONCOREP33_4CCBD309304C86708E1086DB2B0619886CLIENT_H

@protocol _TtP11ActivityKit26ActivityPushTokenXPCServer_;

#import <Foundation/Foundation.h>


@interface _TtC11SessionCoreP33_4CCBD309304C86708E1086DB2B0619886Client : NSObject <_TtP11ActivityKit26ActivityPushTokenXPCServer_>

 {
    ? connection;
    ? pushServer;
    ? processManager;
    ? activityStore;
}




-(BOOL)registerForPushTokensAndReturnError:(*id)arg0 ;
-(id)init;


@end


#endif