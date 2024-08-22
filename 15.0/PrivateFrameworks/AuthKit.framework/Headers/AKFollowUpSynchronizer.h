// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKFOLLOWUPSYNCHRONIZER_H
#define AKFOLLOWUPSYNCHRONIZER_H

@class NSString;
@protocol AKAppleIDAuthenticationDelegate, AKFollowUpProvider;

#import <Foundation/Foundation.h>

#import "AKAppleIDAuthenticationController.h"

@interface AKFollowUpSynchronizer : NSObject <AKAppleIDAuthenticationDelegate>



@property (retain, nonatomic) AKAppleIDAuthenticationController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<AKFollowUpProvider> *followupProvider; // ivar: _followupProvider
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)updateSynchronizeTimeForAccount:(id)arg0 inStore:(id)arg1 ;
+(void)updateSynchronizeTimeNoSaveForAccount:(id)arg0 ;
-(BOOL)authenticationController:(id)arg0 shouldContinueWithAuthenticationResults:(id)arg1 error:(id)arg2 forContext:(id)arg3 ;
-(BOOL)shouldSynchronizeForAccount:(id)arg0 ;
-(BOOL)synchronizeFollowUpsForAccount:(id)arg0 inStore:(id)arg1 error:(*id)arg2 ;
-(id)_authController;


@end


#endif