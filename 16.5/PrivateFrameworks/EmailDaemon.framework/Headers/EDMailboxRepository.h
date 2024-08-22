// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDMAILBOXREPOSITORY_H
#define EDMAILBOXREPOSITORY_H

@class NSString;
@protocol EFLoggable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EDMailboxPersistence.h"

@interface EDMailboxRepository : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EDMailboxPersistence *mailboxPersistence; // ivar: _mailboxPersistence
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serializationQueue; // ivar: _serializationQueue
@property (readonly) Class superclass;


+(id)log;
-(BOOL)_performCreateMailboxChangeAction:(id)arg0 ;
-(BOOL)_performDeleteMailboxChangeAction:(id)arg0 ;
-(BOOL)_performMoveMailboxChangeAction:(id)arg0 ;
-(BOOL)_performRenameMailboxChangeAction:(id)arg0 ;
-(id)initWithMailboxPersistence:(id)arg0 ;
-(void)cancelObservation:(id)arg0 ;
-(void)getMailboxesWithCompletion:(id)arg0 ;
-(void)mailboxObjectIDsForMailboxType:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)mailboxTypeForMailboxObjectID:(id)arg0 completionHandler:(id)arg1 ;
-(void)performMailboxChangeAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)refreshMailboxList;
-(void)startObservingMailboxChangesWithChangeObserver:(id)arg0 observationIdentifier:(id)arg1 ;


@end


#endif