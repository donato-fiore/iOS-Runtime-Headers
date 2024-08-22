// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDMAILBOXPERSISTENCE_H
#define EDMAILBOXPERSISTENCE_H

@class NSSet, NSMutableDictionary, NSString;
@protocol EDMailboxProviderDelegate, EMMailboxTypeResolver;

#import <Foundation/Foundation.h>

#import "EDMailboxProvider.h"

@interface EDMailboxPersistence : NSObject <EDMailboxProviderDelegate, EMMailboxTypeResolver>

 {
    os_unfair_lock_s _changeObserversByIdentifierLock;
}


@property (readonly, nonatomic) NSSet *allMailboxObjectIDs;
@property (retain, nonatomic) NSMutableDictionary *changeObserversByIdentifier; // ivar: _changeObserversByIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EDMailboxProvider *mailboxProvider; // ivar: _mailboxProvider
@property (readonly) Class superclass;


-(BOOL)createMailbox:(id)arg0 parentMailboxID:(id)arg1 ;
-(BOOL)deleteMailbox:(id)arg0 ;
-(BOOL)moveMailbox:(id)arg0 newParentMailboxID:(id)arg1 ;
-(BOOL)renameMailbox:(id)arg0 newName:(id)arg1 ;
-(NSInteger)mailboxTypeForMailboxObjectID:(id)arg0 ;
-(id)allMailboxes;
-(id)initWithMailboxProvider:(id)arg0 ;
-(id)legacyMailboxForMailboxURL:(id)arg0 ;
-(id)legacyMailboxForObjectID:(id)arg0 ;
-(id)mailboxDatabaseIDsForMailboxObjectIDs:(id)arg0 createIfNecessary:(BOOL)arg1 ;
-(id)mailboxObjectIDsForMailboxType:(NSInteger)arg0 ;
-(id)userCreatedMailboxObjectIDs;
-(void)addChangeObserver:(id)arg0 withIdentifier:(id)arg1 ;
-(void)allMailboxesWithCompletionHandler:(id)arg0 ;
-(void)fetchMailboxLists;
-(void)mailboxListInvalidated;
-(void)removeChangeObserverWithIdentifier:(id)arg0 ;
-(void)serverCountsForMailboxScope:(id)arg0 block:(id)arg1 ;
-(void)test_tearDown;


@end


#endif