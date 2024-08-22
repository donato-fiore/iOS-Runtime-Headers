// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSHAREDCREDENTIALSGROUPCONTROLLER_H
#define PKSHAREDCREDENTIALSGROUPCONTROLLER_H

@class NSHashTable, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKContactResolver.h"
#import "PKPaymentWebService.h"
#import "PKAppletSubcredential.h"
#import "PKPaymentPass.h"

@interface PKSharedCredentialsGroupController : NSObject {
    PKContactResolver *_contactResolver;
    PKPaymentWebService *_webService;
    PKAppletSubcredential *_credential;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_delegates;
    os_unfair_lock_s _delegateLock;
}


@property (readonly, nonatomic) NSArray *groups; // ivar: _groups
@property (readonly, nonatomic) NSArray *nonLocalGroups;
@property (readonly, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (readonly, nonatomic) BOOL sharingEnabled; // ivar: _sharingEnabled


-(NSUInteger)numberOfOutstandingSharingSession;
-(id)contactForGroup:(id)arg0 ;
-(id)initWithPass:(id)arg0 contactResolver:(id)arg1 webService:(id)arg2 queue:(id)arg3 ;
-(void)addDelegate:(id)arg0 ;
-(void)canSendInvitationWithCompletion:(id)arg0 ;
-(void)didUpdateGroups;
-(void)fetchContactForGroup:(id)arg0 withCompletion:(id)arg1 ;
-(void)immobilizerTokenCountWithCompletion:(id)arg0 ;
-(void)parseCredentialsOnPass:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)revokeGroup:(id)arg0 withCompletion:(id)arg1 ;
-(void)updateGroupsWithCredential:(id)arg0 ;


@end


#endif