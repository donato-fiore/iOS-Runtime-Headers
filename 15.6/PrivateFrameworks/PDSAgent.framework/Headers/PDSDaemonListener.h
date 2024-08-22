// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDSDAEMONLISTENER_H
#define PDSDAEMONLISTENER_H

@class NSArray;
@protocol PDSRemote;

#import <Foundation/Foundation.h>

#import "PDSEntryStore.h"
#import "PDSUserTracker.h"

@interface PDSDaemonListener : NSObject <PDSRemote>



@property (readonly, nonatomic) BOOL bypassClientIDCheck; // ivar: _bypassClientIDCheck
@property (retain, nonatomic) NSArray *clientIDs; // ivar: _clientIDs
@property (retain, nonatomic) PDSEntryStore *entryStore; // ivar: _entryStore
@property (retain, nonatomic) PDSUserTracker *userTracker; // ivar: _userTracker


-(id)initWithClientIDs:(id)arg0 entryStore:(id)arg1 userTracker:(id)arg2 ;
-(id)initWithEntryStore:(id)arg0 userTracker:(id)arg1 ;
-(void)activeUsersWithClientID:(id)arg0 withCompletion:(id)arg1 ;
-(void)batchUpdateEntries:(id)arg0 forClientID:(id)arg1 withCompletion:(id)arg2 ;
-(void)entriesForClientID:(id)arg0 withCompletion:(id)arg1 ;
-(void)entriesForUser:(id)arg0 clientID:(id)arg1 withCompletion:(id)arg2 ;
-(void)removeAllEntriesForUser:(id)arg0 withClientID:(id)arg1 withCompletion:(id)arg2 ;
-(void)storeEntries:(id)arg0 deleteEntries:(id)arg1 withCompletion:(id)arg2 ;
-(void)usersWithClientID:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif