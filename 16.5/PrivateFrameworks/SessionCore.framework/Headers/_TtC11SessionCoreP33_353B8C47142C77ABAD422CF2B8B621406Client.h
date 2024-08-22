// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11SESSIONCOREP33_353B8C47142C77ABAD422CF2B8B621406CLIENT_H
#define _TTC11SESSIONCOREP33_353B8C47142C77ABAD422CF2B8B621406CLIENT_H

@protocol ACAlertXPCServer;

#import <Foundation/Foundation.h>


@interface _TtC11SessionCoreP33_353B8C47142C77ABAD422CF2B8B621406Client : NSObject <ACAlertXPCServer>

 {
    ? delegate;
    ? connection;
}




-(id)init;
-(void)requestAlertDismissalWithActivityIdentifier:(id)arg0 ;


@end


#endif