// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKAACCOUNTPROVIDER_H
#define SKAACCOUNTPROVIDER_H

@class NSString;
@protocol SKAAccountProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SKAAccountProvider : NSObject <SKAAccountProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *tokenFetchQueue; // ivar: _tokenFetchQueue


+(id)logger;
-(BOOL)_shouldAttemptReauth;
-(NSInteger)_authResetTime;
-(NSInteger)_maxReauthCount;
-(id)_jwtTokenForPrimaryAccountForIdentifier:(id)arg0 withError:(*id)arg1 ;
-(id)_primarySystemiCloudAccountWithError:(*id)arg0 ;
-(id)init;
-(id)presenceJwtTokenForPrimaryAccountWithError:(*id)arg0 ;
-(id)statusJwtTokenForPrimaryAccountWithError:(*id)arg0 ;
-(void)_markReauthAttempt;
-(void)refreshCredentialForPrimaryAccountWithCompletion:(id)arg0 ;


@end


#endif