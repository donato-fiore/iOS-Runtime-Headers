// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSPHONESUBSCRIPTIONSELECTOR_H
#define IDSPHONESUBSCRIPTIONSELECTOR_H


#import <Foundation/Foundation.h>

#import "IDSXPCDaemonController.h"

@interface IDSPhoneSubscriptionSelector : NSObject

@property (retain, nonatomic) IDSXPCDaemonController *syncDaemonController; // ivar: _syncDaemonController
@property (copy, nonatomic) id *syncDaemonControllerBuilder; // ivar: _syncDaemonControllerBuilder


-(BOOL)disableTemporaryPhoneAlias:(id)arg0 withError:(*id)arg1 ;
-(BOOL)enableTemporaryPhoneAlias:(id)arg0 withError:(*id)arg1 ;
-(BOOL)removeTemporaryPhoneAlias:(id)arg0 withError:(*id)arg1 ;
-(id)init;
-(id)initWithSyncDaemonControllerBuilder:(id)arg0 ;
-(id)selectSubscription:(id)arg0 withError:(*id)arg1 ;
-(id)selectedSubscriptionsWithError:(*id)arg0 ;
-(id)setSelectedSubscriptions:(id)arg0 withError:(*id)arg1 ;
-(id)unselectSubscription:(id)arg0 withError:(*id)arg1 ;
-(id)unselectedTemporaryPhoneAliasesWithError:(*id)arg0 ;
-(void)_performSyncAction:(id)arg0 ;
-(void)disableTemporaryPhoneAlias:(id)arg0 withCompletion:(id)arg1 ;
-(void)enableTemporaryPhoneAlias:(id)arg0 withCompletion:(id)arg1 ;
-(void)removeTemporaryPhoneAlias:(id)arg0 withCompletion:(id)arg1 ;
-(void)requestSelectedSubscriptionsWithCompletion:(id)arg0 ;
-(void)requestUnselectedTemporaryPhoneAliasesWithError:(id)arg0 ;
-(void)selectSubscription:(id)arg0 withCompletion:(id)arg1 ;
-(void)setSelectedSubscriptions:(id)arg0 withCompletion:(id)arg1 ;
-(void)unselectSubscription:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif