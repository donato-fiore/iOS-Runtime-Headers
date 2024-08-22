// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDMESSAGEREPOSITORYQUERYHANDLER_H
#define EDMESSAGEREPOSITORYQUERYHANDLER_H

@class NSString, NSSet, EMObjectID, EFQuery, EFLocked;
@protocol EFCancelable, EDMessageRepositoryQueryHandler, EMMessageListItemQueryResultsObserver;

#import <Foundation/Foundation.h>

#import "EDPersistenceHookRegistry.h"
#import "EDMessagePersistence.h"
#import "EDRemindMeNotificationController.h"

@interface EDMessageRepositoryQueryHandler : NSObject <EFCancelable, EDMessageRepositoryQueryHandler>

 {
    atomic_flag _didStart;
}


@property (readonly, nonatomic) NSInteger dateSortOrder; // ivar: _dateSortOrder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // ivar: _hookRegistry
@property (readonly, copy, nonatomic) NSSet *mailboxes; // ivar: _mailboxes
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly, nonatomic) EMObjectID *observationIdentifier; // ivar: _observationIdentifier
@property (readonly, copy, nonatomic) EFQuery *query; // ivar: _query
@property (readonly, nonatomic) EDRemindMeNotificationController *remindMeNotificationController; // ivar: _remindMeNotificationController
@property (readonly, nonatomic) NSObject<EMMessageListItemQueryResultsObserver> *resultsObserver; // ivar: _resultsObserver
@property (retain, nonatomic) EFLocked *summaryLoadersMapTable; // ivar: _summaryLoadersMapTable
@property (readonly) Class superclass;


-(BOOL)keyPathsAffectSorting:(id)arg0 ;
-(BOOL)start;
-(id)_distinctObjectIDs:(id)arg0 queryHandlerLog:(id)arg1 ;
-(id)initWithQuery:(id)arg0 messagePersistence:(id)arg1 hookRegistry:(id)arg2 remindMeNotificationController:(id)arg3 observer:(id)arg4 observationIdentifier:(id)arg5 ;
-(id)messageReconciliationQueries;
-(id)threadReconciliationQueries;
-(void)cancel;
-(void)dealloc;
-(void)requestSummaryForMessageObjectID:(id)arg0 ;
-(void)tearDown;
-(void)test_tearDown;


@end


#endif