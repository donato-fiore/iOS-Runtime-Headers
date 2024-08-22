// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKWALRUSCONTROLLER_H
#define AKWALRUSCONTROLLER_H

@class AAFXPCSession, NSString;
@protocol AAFXPCSessionDelegate;

#import <Foundation/Foundation.h>


@interface AKWalrusController : NSObject <AAFXPCSessionDelegate>

 {
    AAFXPCSession *_remoteService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)PCSAuthContextForWebSessionIdentifier:(id)arg0 serviceName:(id)arg1 completion:(id)arg2 ;
-(void)PCSAuthContextForWebSessionUUID:(id)arg0 serviceName:(id)arg1 completion:(id)arg2 ;
-(void)postWalrusStateUpdateToServerWithContext:(id)arg0 urlBagKey:(id)arg1 username:(id)arg2 password:(id)arg3 completion:(id)arg4 ;
-(void)removeAllPCSAuthCredentialWithCompletion:(id)arg0 ;
-(void)verifyEnableWalrusAllowedWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif