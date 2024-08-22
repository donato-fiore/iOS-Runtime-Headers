// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDMESSAGEQUERYTRANSFORMER_H
#define EDMESSAGEQUERYTRANSFORMER_H

@protocol EDAccountsProvider, EMVIPManager;

#import <Foundation/Foundation.h>

#import "EDMailboxPersistence.h"
#import "EDMessagePersistence.h"

@interface EDMessageQueryTransformer : NSObject

@property (readonly, nonatomic) NSObject<EDAccountsProvider> *accountsProvider; // ivar: _accountsProvider
@property (readonly, nonatomic) EDMailboxPersistence *mailboxPersistence; // ivar: _mailboxPersistence
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly, nonatomic) NSObject<EMVIPManager> *vipManager; // ivar: _vipManager


-(id)initWithAccountsProvider:(id)arg0 mailboxPersistence:(id)arg1 messagePersistence:(id)arg2 vipManager:(id)arg3 ;
-(id)simplifyAndPredicate:(id)arg0 ;
-(id)simplifyCompoundPredicate:(id)arg0 ;
-(id)simplifyNotPredicate:(id)arg0 ;
-(id)simplifyOrPredicate:(id)arg0 ;
-(id)simplifySingleSubpredicate:(id)arg0 ;
-(id)transformComparisonPredicate:(id)arg0 ;
-(id)transformCompoundPredicate:(id)arg0 ;
-(id)transformPredicate:(id)arg0 ;
-(id)transformSubpredicates:(id)arg0 ;


@end


#endif