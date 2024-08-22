// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HPSAPPLECONNECTCONTROLLER_H
#define HPSAPPLECONNECTCONTROLLER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HPSAppleConnectController : NSObject

@property (readonly, copy, nonatomic) NSString *accountID; // ivar: _accountID
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) BOOL isCarryOrLiveOnUser;
@property (readonly, copy, nonatomic) NSString *password; // ivar: _password


+(id)sharedInstance;
-(id)init;
-(void)_readCachedCredentials;
-(void)_saveCredentials;
-(void)clearCredentialsSyncToKeychain:(BOOL)arg0 ;
-(void)dealloc;
-(void)tokenWithError:(id)arg0 ;
-(void)validateWithCompletionHandler:(id)arg0 ;


@end


#endif