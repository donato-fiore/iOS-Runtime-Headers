// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDMAILBOXPREDICTIONCONTROLLER_H
#define EDMAILBOXPREDICTIONCONTROLLER_H

@class NSString;
@protocol EDMessageChangeHookResponder, EFLoggable, OS_dispatch_queue, EDMailboxPredictionQueryAdapter, EMUserProfileProvider;

#import <Foundation/Foundation.h>

#import "EDCachingMailboxPredictor.h"
#import "EDPersistenceHookRegistry.h"
#import "EDMailboxPersistence.h"
#import "EDMessagePersistence.h"

@interface EDMailboxPredictionController : NSObject <EDMessageChangeHookResponder, EFLoggable>



@property (readonly, nonatomic) EDCachingMailboxPredictor *cachingPredictor; // ivar: _cachingPredictor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // ivar: _hookRegistry
@property (readonly, nonatomic) EDMailboxPersistence *mailboxPersistence; // ivar: _mailboxPersistence
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (readonly, nonatomic) NSObject<EDMailboxPredictionQueryAdapter> *queryAdapter; // ivar: _queryAdapter
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<EMUserProfileProvider> *userProfileProvider; // ivar: _userProfileProvider


+(id)log;
-(id)_accountsForMessages:(id)arg0 ;
-(id)_createPredictor;
-(id)_processPredictionForMessages:(id)arg0 ;
-(id)initWithMessagePersistence:(id)arg0 mailboxPersistence:(id)arg1 hookRegistry:(id)arg2 userProfileProvider:(id)arg3 ;
-(id)predictMailboxForMovingObjectIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)_invalidateCacheForAddedMessage:(id)arg0 ;
-(void)_predictMailboxForMovingMessages:(id)arg0 cancelationToken:(id)arg1 completionHandler:(id)arg2 ;
-(void)persistenceWillAddNewMessage:(id)arg0 fromExistingMessage:(BOOL)arg1 ;


@end


#endif