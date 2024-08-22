// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CERTUICONNECTIONDELEGATE_H
#define CERTUICONNECTIONDELEGATE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CertUITrustManager.h"

@interface CertUIConnectionDelegate : NSObject {
    CertUITrustManager *_trustManager;
    ? _delegateRespondsTo;
}


@property (copy, nonatomic) NSString *connectionDisplayName; // ivar: _connectionDisplayName
@property (weak, nonatomic) id *forwardingDelegate; // ivar: _forwardingDelegate


+(id)defaultServiceForProtocol:(id)arg0 ;
-(BOOL)connection:(id)arg0 canAuthenticateAgainstProtectionSpace:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(void)_continueConnectionWithResponse:(int)arg0 challenge:(id)arg1 service:(id)arg2 ;
-(void)connection:(id)arg0 didReceiveAuthenticationChallenge:(id)arg1 ;


@end


#endif