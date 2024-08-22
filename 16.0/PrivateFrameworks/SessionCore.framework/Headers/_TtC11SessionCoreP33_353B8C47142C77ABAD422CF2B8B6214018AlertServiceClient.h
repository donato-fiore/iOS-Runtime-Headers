// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11SESSIONCOREP33_353B8C47142C77ABAD422CF2B8B6214018ALERTSERVICECLIENT_H
#define _TTC11SESSIONCOREP33_353B8C47142C77ABAD422CF2B8B6214018ALERTSERVICECLIENT_H

@protocol _TtP11ActivityKit14AlertXPCServer_;

#import <Foundation/Foundation.h>


@interface _TtC11SessionCoreP33_353B8C47142C77ABAD422CF2B8B6214018AlertServiceClient : NSObject <_TtP11ActivityKit14AlertXPCServer_>

 {
    ? delegate;
    ? connection;
}




-(id)init;
-(void)requestAlertDismissalWithActivityIdentifier:(id)arg0 ;


@end


#endif