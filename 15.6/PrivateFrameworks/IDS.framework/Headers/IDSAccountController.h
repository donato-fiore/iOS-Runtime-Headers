// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSACCOUNTCONTROLLER_H
#define IDSACCOUNTCONTROLLER_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "_IDSAccountController.h"

@interface IDSAccountController : NSObject {
    _IDSAccountController *_internal;
}


@property (readonly, nonatomic) NSSet *accounts;


-(id)_initWithService:(id)arg0 ;
-(id)_initWithService:(id)arg0 onIDSQueue:(BOOL)arg1 ;
-(id)_internal;
-(id)accountWithLoginID:(id)arg0 service:(id)arg1 ;
-(id)accountWithUniqueID:(id)arg0 ;
-(id)enabledAccounts;
-(id)initWithService:(id)arg0 ;
-(id)serviceName;
-(void)_disableAccount:(id)arg0 ;
-(void)_enableAccount:(id)arg0 ;
-(void)_removeAccount:(id)arg0 ;
-(void)addAccount:(id)arg0 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)disableAccount:(id)arg0 ;
-(void)enableAccount:(id)arg0 ;
-(void)removeAccount:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)setupAccountWithLoginID:(id)arg0 aliases:(id)arg1 password:(id)arg2 completionHandler:(id)arg3 ;
-(void)setupAccountWithLoginID:(id)arg0 password:(id)arg1 completionHandler:(id)arg2 ;
-(void)setupAccountWithSetupParameters:(id)arg0 aliases:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif