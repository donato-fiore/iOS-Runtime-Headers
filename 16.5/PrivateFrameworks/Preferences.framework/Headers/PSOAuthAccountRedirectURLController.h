// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSOAUTHACCOUNTREDIRECTURLCONTROLLER_H
#define PSOAUTHACCOUNTREDIRECTURLCONTROLLER_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface PSOAuthAccountRedirectURLController : NSObject

@property (retain, nonatomic) NSMapTable *redirectHandlerMap; // ivar: _redirectHandlerMap


+(id)sharedInstance;
-(BOOL)handleOAuthRedirectURL:(id)arg0 ;
-(id)_redirectURLFromURL:(id)arg0 ;
-(id)init;
-(void)registerOAuthClientForRedirectURL:(id)arg0 redirectHandler:(id)arg1 ;
-(void)unRegisterOAuthClientForRedirectURL:(id)arg0 ;


@end


#endif