// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RKRANKINGDATAMANAGER_H
#define RKRANKINGDATAMANAGER_H

@class NSManagedObjectContext, NSPersistentStore, NSPersistentStoreCoordinator;

#import <Foundation/Foundation.h>


@interface RKRankingDataManager : NSObject

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (retain, nonatomic) NSPersistentStore *persistentStore; // ivar: _persistentStore
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // ivar: _persistentStoreCoordinator


-(NSUInteger)getNumberOfEntriesInDB;
-(id)fetchRankingInfoForCategory:(id)arg0 ;
-(id)fetchRankingInfoFromDB;
-(id)initWithDatabaseFilename:(id)arg0 ;
-(id)initWithLanguageID:(id)arg0 ;
-(void)flushRankingData;
-(void)insertRankingInfoFromDictionary:(id)arg0 ;
-(void)insertRankingInfoFromDictionary:(id)arg0 withDate:(id)arg1 ;
-(void)pruneUserDatabase;
-(void)resetRankingData;


@end


#endif