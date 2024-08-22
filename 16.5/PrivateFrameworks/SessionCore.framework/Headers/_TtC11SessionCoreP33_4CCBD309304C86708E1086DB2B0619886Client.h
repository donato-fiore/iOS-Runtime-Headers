// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11SESSIONCOREP33_4CCBD309304C86708E1086DB2B0619886CLIENT_H
#define _TTC11SESSIONCOREP33_4CCBD309304C86708E1086DB2B0619886CLIENT_H

@protocol ACActivityPushTokenXPCServer;

#import <Foundation/Foundation.h>


@interface _TtC11SessionCoreP33_4CCBD309304C86708E1086DB2B0619886Client : NSObject <ACActivityPushTokenXPCServer>

 {
    ? connection;
    ? pushServer;
    ? processManager;
    ? activityStore;
}




-(BOOL)registerForPushTokensWithError:(*id)arg0 ;
-(id)init;


@end


#endif