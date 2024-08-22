// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC26AUTHENTICATIONSERVICESCORE20ASCABLEAUTHENTICATORP33_84AFAA0745E7F5997DD6543D9C2808DD10APSWRAPPER_H
#define _TTCC26AUTHENTICATIONSERVICESCORE20ASCABLEAUTHENTICATORP33_84AFAA0745E7F5997DD6543D9C2808DD10APSWRAPPER_H

@protocol APSConnectionDelegate;

#import <Foundation/Foundation.h>


@interface _TtCC26AuthenticationServicesCore20ASCABLEAuthenticatorP33_84AFAA0745E7F5997DD6543D9C2808DD10APSWrapper : NSObject <APSConnectionDelegate>

 {
    ? authenticator;
}




-(id)init;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;


@end


#endif