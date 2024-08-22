// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POCKETAPILOGIN_H
#define POCKETAPILOGIN_H

@class NSOperationQueue, NSString;
@protocol NSSecureCoding, PocketAPIDelegate;

#import <Foundation/Foundation.h>

#import "PocketAPI.h"

@interface PocketAPILogin : NSObject <NSSecureCoding, PocketAPIDelegate>

 {
    NSOperationQueue *operationQueue;
    id<PocketAPIDelegate> *delegate;
    BOOL didStart;
    BOOL didFinish;
    BOOL reverseAuth;
}


@property (readonly, retain, nonatomic) PocketAPI *API; // ivar: API
@property (readonly, retain, nonatomic) NSString *accessToken; // ivar: accessToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) NSString *requestToken; // ivar: requestToken
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSString *uuid; // ivar: uuid


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithAPI:(id)arg0 delegate:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)redirectURL;
-(void)_setReverseAuth:(BOOL)arg0 ;
-(void)convertRequestTokenToAccessToken;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchRequestToken;
-(void)loginDidFinish:(BOOL)arg0 ;
-(void)loginDidStart;
-(void)pocketAPI:(id)arg0 hadLoginError:(id)arg1 ;
-(void)pocketAPI:(id)arg0 receivedRequestToken:(id)arg1 ;
-(void)pocketAPILoggedIn:(id)arg0 ;


@end


#endif