// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19APPSTOREKITINTERNAL29PERSONALIZEDMEDIATOKENSERVICE_H
#define _TTC19APPSTOREKITINTERNAL29PERSONALIZEDMEDIATOKENSERVICE_H

@protocol AMSMediaTokenServiceProtocol;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal29PersonalizedMediaTokenService : NSObject <AMSMediaTokenServiceProtocol>

 {
    ? tokenService;
    ? accounts;
    ? queue;
}




-(id)fetchMediaToken;
-(id)init;
-(void)accountsDidChange;
-(void)invalidateMediaToken;


@end


#endif