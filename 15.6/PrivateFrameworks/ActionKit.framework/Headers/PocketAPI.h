// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POCKETAPI_H
#define POCKETAPI_H

@class NSString, NSOperationQueue;

#import <Foundation/Foundation.h>

#import "PocketAPILogin.h"

@interface PocketAPI : NSObject {
    PocketAPILogin *currentLogin;
    NSString *userAgent;
}


@property (retain, nonatomic) NSString *URLScheme; // ivar: URLScheme
@property (retain, nonatomic) NSString *consumerKey; // ivar: consumerKey
@property (readonly, nonatomic, getter=isLoggedIn) BOOL loggedIn;
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: operationQueue
@property (readonly, copy, nonatomic) NSString *username;


+(id)pkt_hashForConsumerKey:(id)arg0 accessToken:(id)arg1 ;
+(id)sharedAPI;
-(BOOL)handleOpenURL:(id)arg0 ;
-(NSUInteger)appID;
-(id)init;
-(id)methodOperationWithAPIMethod:(id)arg0 forHTTPMethod:(int)arg1 arguments:(id)arg2 delegate:(id)arg3 ;
-(id)methodOperationWithAPIMethod:(id)arg0 forHTTPMethod:(int)arg1 arguments:(id)arg2 handler:(id)arg3 ;
-(id)pkt_actionDictionaryWithName:(id)arg0 parameters:(id)arg1 ;
-(id)pkt_deviceName;
-(id)pkt_deviceOSVersion;
-(id)pkt_getKeychainValueForKey:(id)arg0 ;
-(id)pkt_getKeychainValueForKey:(id)arg0 serviceName:(id)arg1 ;
-(id)pkt_getToken;
-(id)pkt_loadCurrentLoginFromDefaults;
-(id)pkt_userAgent;
-(id)saveOperationWithURL:(id)arg0 delegate:(id)arg1 ;
-(id)saveOperationWithURL:(id)arg0 handler:(id)arg1 ;
-(id)saveOperationWithURL:(id)arg0 title:(id)arg1 delegate:(id)arg2 ;
-(id)saveOperationWithURL:(id)arg0 title:(id)arg1 handler:(id)arg2 ;
-(id)saveOperationWithURL:(id)arg0 title:(id)arg1 tweetID:(id)arg2 delegate:(id)arg3 ;
-(id)saveOperationWithURL:(id)arg0 title:(id)arg1 tweetID:(id)arg2 handler:(id)arg3 ;
-(void)callAPIMethod:(id)arg0 withHTTPMethod:(int)arg1 arguments:(id)arg2 delegate:(id)arg3 ;
-(void)callAPIMethod:(id)arg0 withHTTPMethod:(int)arg1 arguments:(id)arg2 handler:(id)arg3 ;
-(void)dealloc;
-(void)loginWithDelegate:(id)arg0 ;
-(void)loginWithHandler:(id)arg0 ;
-(void)logout;
-(void)pkt_loggedInWithUsername:(id)arg0 token:(id)arg1 ;
-(void)pkt_migrateAccountToAccessTokenWithUsername:(id)arg0 password:(id)arg1 delegate:(id)arg2 ;
-(void)pkt_migrateAccountToAccessTokenWithUsername:(id)arg0 password:(id)arg1 handler:(id)arg2 ;
-(void)pkt_saveCurrentLoginToDefaults;
-(void)pkt_setKeychainValue:(id)arg0 forKey:(id)arg1 ;
-(void)pkt_setKeychainValue:(id)arg0 forKey:(id)arg1 serviceName:(id)arg2 ;
-(void)saveURL:(id)arg0 delegate:(id)arg1 ;
-(void)saveURL:(id)arg0 handler:(id)arg1 ;
-(void)saveURL:(id)arg0 withTitle:(id)arg1 delegate:(id)arg2 ;
-(void)saveURL:(id)arg0 withTitle:(id)arg1 handler:(id)arg2 ;
-(void)saveURL:(id)arg0 withTitle:(id)arg1 tweetID:(id)arg2 delegate:(id)arg3 ;
-(void)saveURL:(id)arg0 withTitle:(id)arg1 tweetID:(id)arg2 handler:(id)arg3 ;


@end


#endif