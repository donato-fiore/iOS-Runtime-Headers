// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTREGUTILITIES_H
#define FTREGUTILITIES_H


#import <Foundation/Foundation.h>


@interface FTRegUtilities : NSObject



+(id)serviceWithType:(NSInteger)arg0 ;
+(id)standaloneAuthorizationControllerWithRegController:(id)arg0 authID:(id)arg1 token:(id)arg2 ;
+(id)standaloneNewPasswordControllerWithRegController:(id)arg0 appleID:(id)arg1 ;
+(void)authorizationController:(id)arg0 authorizedAccount:(BOOL)arg1 ;
+(void)changePasswordControllerDidCancel:(id)arg0 ;
+(void)changePasswordControllerDidFinish:(id)arg0 withAppleID:(id)arg1 authID:(id)arg2 authToken:(id)arg3 ;


@end


#endif