// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSTARKMANAGER_H
#define CKSTARKMANAGER_H

@class NSString;
@protocol CPTemplateApplicationSceneDelegate, CPInterfaceControllerDelegate, UISceneDelegate;

#import <Foundation/Foundation.h>

#import "CKStarkConversationController.h"

@interface CKStarkManager : NSObject <CPTemplateApplicationSceneDelegate, CPInterfaceControllerDelegate, UISceneDelegate>



@property (retain, nonatomic) CKStarkConversationController *conversationController; // ivar: _conversationController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isCarPlayConnected;
+(id)_directActionSource;
+(void)_activateSiriWithContext:(id)arg0 ;
+(void)activateForConversation:(id)arg0 ;
+(void)activateForRecipient:(id)arg0 ;
-(void)openSMSURL:(id)arg0 ;
-(void)openURL:(id)arg0 sourceApplication:(id)arg1 ;
-(void)scene:(id)arg0 openURLContexts:(id)arg1 ;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;
-(void)templateApplicationScene:(id)arg0 didConnectInterfaceController:(id)arg1 ;
-(void)templateApplicationScene:(id)arg0 didDisconnectInterfaceController:(id)arg1 ;


@end


#endif