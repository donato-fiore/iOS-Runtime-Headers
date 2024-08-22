// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUICDPSTINGRAYREMOTEUICONTROLLER_H
#define AAUICDPSTINGRAYREMOTEUICONTROLLER_H

@class ACAccount;

#import <Foundation/Foundation.h>

#import "AAUIServerUIHookHandler.h"

@interface AAUICDPStingrayRemoteUIController : NSObject {
    AAUIServerUIHookHandler *_serverHookHandler;
    ACAccount *_account;
}




-(id)initWithRemoteUIController:(id)arg0 ;
-(id)initWithRemoteUIController:(id)arg0 appleAccount:(id)arg1 ;
-(void)attachAllHandlers;
-(void)attachAuthHandler:(id)arg0 ;
-(void)attachPasscodeHandler:(id)arg0 ;
-(void)attachRecoveryKeyHandler:(id)arg0 ;
-(void)attachRepairHandler:(id)arg0 ;
-(void)processObjectModel:(id)arg0 isModal:(BOOL)arg1 ;
-(void)processObjectModel:(id)arg0 isModal:(BOOL)arg1 completion:(id)arg2 ;
-(void)setPresentingController:(id)arg0 ;


@end


#endif