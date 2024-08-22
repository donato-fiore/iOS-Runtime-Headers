// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCUSEREVENTHISTORYSTORAGE_H
#define FCUSEREVENTHISTORYSTORAGE_H

@class NSURL, NSString, NSDate, NFLazy, NSHashTable, NSArray;
@protocol FCUserEventHistoryStorageType;

#import <Foundation/Foundation.h>

#import "FCUserEventHistoryMetadata.h"

@interface FCUserEventHistoryStorage : NSObject <FCUserEventHistoryStorageType>



@property (readonly, nonatomic) NSURL *baseDirectoryURL;
@property (nonatomic) NSUInteger currentSize; // ivar: _currentSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *earliestSessionDate;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NFLazy *lazyRootDirectory; // ivar: _lazyRootDirectory
@property (retain, nonatomic) FCUserEventHistoryMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSArray *prunedSessionIDs; // ivar: _prunedSessionIDs
@property (nonatomic) NSUInteger prunedSessionSize; // ivar: _prunedSessionSize
@property (readonly, nonatomic) NSArray *sessionIDs;
@property (readonly, nonatomic) NSArray *sessions;
@property (readonly, nonatomic) NSUInteger size;
@property (readonly) Class superclass;


-(id)_deleteSessions:(id)arg0 pruned:(BOOL)arg1 ;
-(id)_filePathForSessionID:(id)arg0 ;
-(id)initWithPrivateDataDirectory:(id)arg0 ;
-(id)pruneWithPolicies:(id)arg0 ;
-(id)rootDirectory;
-(void)_pruneSessions:(id)arg0 ;
-(void)_pruneToMaxSessionAge:(NSUInteger)arg0 ;
-(void)_pruneToMaxSessionCount:(NSUInteger)arg0 ;
-(void)_pruneToMaxSize:(NSInteger)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)clearAllSessions;
-(void)clearHistory;
-(void)clearSessionsWithIDs:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)storeSessionID:(id)arg0 compressedSessionData:(id)arg1 notify:(BOOL)arg2 ;
-(void)storeSessionID:(id)arg0 sessionData:(id)arg1 ;
-(void)writeJSON:(id)arg0 ;


@end


#endif