// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICAUTHENTICATION_H
#define ICAUTHENTICATION_H


#import <Foundation/Foundation.h>


@interface ICAuthentication : NSObject

@property (readonly, nonatomic, getter=isAuthenticating) BOOL authenticating;
@property (retain, nonatomic) id *currentAuthenticationController; // ivar: _currentAuthenticationController


+(id)shared;
-(void)authenticateBiometricsWithPrompt:(id)arg0 displayWindow:(id)arg1 completionHandler:(id)arg2 ;
-(void)authenticateCloudPasswordWithPrompt:(id)arg0 displayWindow:(id)arg1 completionHandler:(id)arg2 ;
-(void)authenticateCustomPasswordWithPrompt:(id)arg0 displayWindow:(id)arg1 completionHandler:(id)arg2 ;
-(void)authenticateDevicePasswordWithPrompt:(id)arg0 displayWindow:(id)arg1 completionHandler:(id)arg2 ;
-(void)authenticateWithPrompt:(id)arg0 displayWindow:(id)arg1 completionHandler:(id)arg2 ;
-(void)didAuthenticateBiometricsWithPrompt:(id)arg0 error:(id)arg1 displayWindow:(id)arg2 completionHandler:(id)arg3 ;
-(void)didAuthenticateCloudPasswordWithPrompt:(id)arg0 result:(NSUInteger)arg1 displayWindow:(id)arg2 completionHandler:(id)arg3 ;
-(void)didAuthenticateCustomPasswordWithPrompt:(id)arg0 result:(NSUInteger)arg1 displayWindow:(id)arg2 completionHandler:(id)arg3 ;
-(void)didAuthenticateDevicePasswordWithPrompt:(id)arg0 error:(id)arg1 displayWindow:(id)arg2 completionHandler:(id)arg3 ;
-(void)didAuthenticateWithPrompt:(id)arg0 result:(NSUInteger)arg1 displayWindow:(id)arg2 completionHandler:(id)arg3 ;
-(void)requestAllowBiometricsIfNeededForAccount:(id)arg0 completionHandler:(id)arg1 ;
-(void)setBiometricsEnabled:(BOOL)arg0 account:(id)arg1 ;
-(void)setCustomPasswordWithPrompt:(id)arg0 displayWindow:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateUserRecordForAccount:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif