// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDSCDCACHECONTAINER_H
#define PDSCDCACHECONTAINER_H

@class NSPersistentContainer, NSURL, NSString;
@protocol PDSCDCache, PDSKVStore;

#import <Foundation/Foundation.h>


@interface PDSCDCacheContainer : NSObject <PDSCDCache, PDSKVStore>



@property (weak, nonatomic) NSPersistentContainer *container; // ivar: _container
@property (retain, nonatomic) NSURL *containingPath; // ivar: _containingPath
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_deleteEntry:(id)arg0 context:(id)arg1 withError:(*id)arg2 ;
// -(BOOL)_storeEntry:(id)arg0 transitionBlock:(id)arg1 context:(unk)arg2 withError:(id)arg3  ;
-(BOOL)_updateAllEntriesWithState:(unsigned char)arg0 toState:(unsigned char)arg1 withError:(*id)arg2 ;
-(BOOL)_updateEntryState:(unsigned char)arg0 forUser:(id)arg1 clientID:(id)arg2 withError:(*id)arg3 ;
-(BOOL)deleteEntriesForUser:(id)arg0 withState:(unsigned char)arg1 withError:(*id)arg2 ;
-(BOOL)deleteEntry:(id)arg0 withError:(*id)arg1 ;
-(BOOL)hasActiveEntries;
-(BOOL)hasPendingEntries;
// -(BOOL)storeEntries:(id)arg0 transitionBlock:(id)arg1 deleteEntries:(unk)arg2 withError:(id)arg3  ;
// -(BOOL)storeEntry:(id)arg0 transitionBlock:(id)arg1 withError:(unk)arg2  ;
-(BOOL)storeEntry:(id)arg0 withError:(*id)arg1 ;
-(BOOL)updateAllEntriesWithState:(unsigned char)arg0 toState:(unsigned char)arg1 withError:(*id)arg2 ;
-(BOOL)updateEntryState:(unsigned char)arg0 forUser:(id)arg1 clientID:(id)arg2 withError:(*id)arg3 ;
-(BOOL)updateEntryState:(unsigned char)arg0 forUser:(id)arg1 withError:(*id)arg2 ;
-(id)_cdRegistrationsMatchingEntry:(id)arg0 inContext:(id)arg1 ;
-(id)_cdRegistrationsMatchingUser:(id)arg0 withClientID:(id)arg1 inContext:(id)arg2 ;
-(id)_cdUsersMatchingUserID:(id)arg0 userType:(short)arg1 inContext:(id)arg2 ;
-(id)_entriesFromRegistrations:(id)arg0 inContext:(id)arg1 ;
-(id)_loadUsersIncludingOnlyActive:(BOOL)arg0 ;
-(id)_usersForClientID:(id)arg0 activeOnly:(BOOL)arg1 ;
-(id)allStoredValues;
-(id)dataForKey:(id)arg0 ;
-(id)initWithContainingPath:(id)arg0 ;
-(id)loadAllActiveUsers;
-(id)loadAllActiveUsersForClientID:(id)arg0 ;
-(id)loadAllEntries;
-(id)loadAllEntriesForClientID:(id)arg0 ;
-(id)loadAllEntriesUser:(id)arg0 ;
-(id)loadAllEntriesUser:(id)arg0 withClientID:(id)arg1 ;
-(id)loadAllUsers;
-(id)loadAllUsersForClientID:(id)arg0 ;
-(id)loadPendingEntries;
-(id)loadWithError:(*id)arg0 ;
-(id)numberForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)_KVEntryForKey:(id)arg0 withBlock:(id)arg1 ;
-(void)_syncBlockWithContext:(id)arg0 ;
-(void)deleteCache;
-(void)setData:(id)arg0 forKey:(id)arg1 ;
-(void)setNumber:(id)arg0 forKey:(id)arg1 ;
-(void)setString:(id)arg0 forKey:(id)arg1 ;


@end


#endif