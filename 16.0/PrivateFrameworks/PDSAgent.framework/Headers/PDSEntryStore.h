// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDSENTRYSTORE_H
#define PDSENTRYSTORE_H

@protocol PDSCDCache, PDSEntryStoreDelegate;

#import <Foundation/Foundation.h>


@interface PDSEntryStore : NSObject

@property (retain, nonatomic) NSObject<PDSCDCache> *cache; // ivar: _cache
@property (weak, nonatomic) NSObject<PDSEntryStoreDelegate> *delegate; // ivar: _delegate


-(BOOL)_permitTransitionFromState:(unsigned char)arg0 toState:(unsigned char)arg1 ;
-(BOOL)deleteEntriesForUser:(id)arg0 withState:(unsigned char)arg1 withError:(*id)arg2 ;
-(BOOL)deleteEntry:(id)arg0 withError:(*id)arg1 ;
-(BOOL)hasActiveEntries;
-(BOOL)hasPendingEntries;
-(BOOL)storeEntries:(id)arg0 deleteEntries:(id)arg1 withError:(*id)arg2 ;
-(BOOL)storeEntry:(id)arg0 withError:(*id)arg1 ;
-(BOOL)updateAllEntriesWithState:(unsigned char)arg0 toState:(unsigned char)arg1 withError:(*id)arg2 ;
-(BOOL)updateEntryState:(unsigned char)arg0 forUser:(id)arg1 clientID:(id)arg2 withError:(*id)arg3 ;
-(id)activeUsers;
-(id)activeUsersWithClientID:(id)arg0 ;
-(id)entries;
-(id)entriesForUser:(id)arg0 ;
-(id)entriesForUser:(id)arg0 withClientID:(id)arg1 ;
-(id)entriesWithClientID:(id)arg0 ;
-(id)initWithCache:(id)arg0 ;
-(id)users;
-(id)usersWithClientID:(id)arg0 ;


@end


#endif