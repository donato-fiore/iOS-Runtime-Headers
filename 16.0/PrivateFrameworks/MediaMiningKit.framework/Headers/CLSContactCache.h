// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSCONTACTCACHE_H
#define CLSCONTACTCACHE_H

@class NSPredicate;


#import "CLSDBCache.h"

@interface CLSContactCache : CLSDBCache

@property (retain, nonatomic) NSPredicate *entryPredicateWithContactIdentifier; // ivar: _entryPredicateWithContactIdentifier
@property (retain, nonatomic) NSPredicate *entryPredicateWithContactIdentifiers; // ivar: _entryPredicateWithContactIdentifiers
@property (retain, nonatomic) NSPredicate *entryPredicateWithUpdateTimestamp; // ivar: _entryPredicateWithUpdateTimestamp


-(BOOL)_updateHasPicture:(BOOL)arg0 forEntry:(id)arg1 ;
-(BOOL)insertContactWithNoProfilePicture:(id)arg0 ;
-(BOOL)insertFaceprintAnalysisResult:(id)arg0 forContactIdentifier:(id)arg1 ;
-(BOOL)setLastHistoryToken:(id)arg0 ;
-(NSUInteger)numberOfCachedContacts;
-(id)cachedContactForContactIdentifier:(id)arg0 ;
-(id)dataModelName;
-(id)init;
-(id)lastHistoryToken;
-(void)enumerateCachedEntriesUsingBlock:(id)arg0 ;
-(void)invalidateCacheItemForContactIdentifier:(id)arg0 ;
-(void)invalidateCacheItemsBeforeDateWithTimestamp:(CGFloat)arg0 ;
-(void)invalidateCacheItemsForContactIdentifiers:(id)arg0 ;


@end


#endif