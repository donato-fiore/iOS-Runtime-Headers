// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKAACCOUNTPROVIDER_H
#define SKAACCOUNTPROVIDER_H

@class NSString;
@protocol SKAAccountProviding;

#import <Foundation/Foundation.h>


@interface SKAAccountProvider : NSObject <SKAAccountProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logger;
-(BOOL)_shouldAttemptReauth;
-(id)_primarySystemiCloudAccountWithError:(*id)arg0 ;
-(id)init;
-(id)jwtTokenForPrimaryAccountWithError:(*id)arg0 ;
-(void)_markReauthAttempt;
-(void)refreshCredentialForPrimaryAccountWithCompletion:(id)arg0 ;


@end


#endif