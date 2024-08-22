// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPPRIVACYPROXYTOKENREGISTRATION_H
#define NSPPRIVACYPROXYTOKENREGISTRATION_H

@class NSString, NWNetworkAgentRegistration;
@protocol NSPPrivacyProxyTokenAgentDelegate, NSPPrivacyProxyTokenRegistrationDelegate;

#import <Foundation/Foundation.h>

#import "NSPPrivacyProxyTokenAgent.h"

@interface NSPPrivacyProxyTokenRegistration : NSObject <NSPPrivacyProxyTokenAgentDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<NSPPrivacyProxyTokenRegistrationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSPPrivacyProxyTokenAgent *tokenAgent; // ivar: _tokenAgent
@property (retain, nonatomic) NWNetworkAgentRegistration *tokenAgentRegistration; // ivar: _tokenAgentRegistration


-(NSUInteger)tokenCount;
-(id)initWithAgentUUID:(id)arg0 agentDescription:(id)arg1 delegate:(id)arg2 ;
-(void)addToken:(id)arg0 ;
-(void)flushTokens;
-(void)registerTokenAgent:(NSUInteger)arg0 ;
-(void)reportErrorForAgent:(id)arg0 error:(int)arg1 withOptions:(id)arg2 ;
-(void)teardownTokenAgent;
-(void)tokenLowWaterMarkReachedForAgent:(id)arg0 ;


@end


#endif