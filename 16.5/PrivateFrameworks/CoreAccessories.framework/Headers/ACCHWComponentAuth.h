// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACCHWCOMPONENTAUTH_H
#define ACCHWCOMPONENTAUTH_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface ACCHWComponentAuth : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)sharedManager;
-(id)_init;
-(id)init;
-(void)authenticateBatteryWithChallenge:(id)arg0 completionHandler:(id)arg1 ;
-(void)authenticateTouchControllerWithChallenge:(id)arg0 completionHandler:(id)arg1 ;
// -(void)authenticateTouchControllerWithChallenge:(id)arg0 completionHandler:(id)arg1 updateRegistry:(unk)arg2  ;
-(void)authenticateVeridianWithChallenge:(id)arg0 completionHandler:(id)arg1 ;
-(void)signVeridianChallenge:(id)arg0 completionHandler:(id)arg1 ;
-(void)verifyBatteryMatch:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif