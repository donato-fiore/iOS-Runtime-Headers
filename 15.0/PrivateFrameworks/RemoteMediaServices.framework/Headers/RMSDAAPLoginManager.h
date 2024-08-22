// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMSDAAPLOGINMANAGER_H
#define RMSDAAPLOGINMANAGER_H


#import <Foundation/Foundation.h>

#import "RMSDAAPRequestManager.h"
#import "RMSFairPlaySession.h"

@interface RMSDAAPLoginManager : NSObject {
    RMSDAAPRequestManager *_requestManager;
    RMSFairPlaySession *_fairPlaySession;
    BOOL _isFairPlayRequired;
}




-(BOOL)_isFairplayRequiredForServerInfo:(id)arg0 ;
-(id)initWithRequestManager:(id)arg0 ;
-(void)_continueFairPlayHandshakeWithData:(id)arg0 completionHandler:(id)arg1 ;
-(void)_requestControlInterfaceWithCompletionHandler:(id)arg0 ;
-(void)_requestFairPlayHandshake:(id)arg0 ;
-(void)_requestLoginWithCompletionHandler:(id)arg0 ;
-(void)_requestServerInfoWithCompletionHandler:(id)arg0 ;
-(void)loginWithCompletionHandler:(id)arg0 ;


@end


#endif