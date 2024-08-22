// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUICDPSTINGRAYREMOTEUICONTROLLER_H
#define AAUICDPSTINGRAYREMOTEUICONTROLLER_H

@class RUIServerHookHandler, ACAccount;

#import <Foundation/Foundation.h>


@interface AAUICDPStingrayRemoteUIController : NSObject {
    RUIServerHookHandler *_serverHookHandler;
    ACAccount *_account;
}




-(id)initWithRemoteUIController:(id)arg0 ;
-(id)initWithRemoteUIController:(id)arg0 appleAccount:(id)arg1 ;
-(id)initWithRemoteUIController:(id)arg0 appleAccount:(id)arg1 hooks:(id)arg2 ;
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