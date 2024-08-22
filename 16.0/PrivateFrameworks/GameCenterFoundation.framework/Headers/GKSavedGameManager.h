// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKSAVEDGAMEMANAGER_H
#define GKSAVEDGAMEMANAGER_H

@class NSMutableDictionary, NSMutableArray, NSMetadataQuery, NSURL;

#import <Foundation/Foundation.h>


@interface GKSavedGameManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *documents; // ivar: _documents
@property (retain, nonatomic) NSMutableArray *fetchHandlers; // ivar: _fetchHandlers
@property (retain, nonatomic) NSMetadataQuery *query; // ivar: _query
@property (nonatomic) NSInteger queryDisableCount; // ivar: _queryDisableCount
@property (retain, nonatomic) NSURL *ubiquityURL; // ivar: _ubiquityURL
@property (nonatomic) BOOL ubiquityUnavailable; // ivar: _ubiquityUnavailable


+(id)sharedManager;
-(id)currentDocumentWithName:(id)arg0 ;
-(id)documentForSavedGame:(id)arg0 ;
-(id)documentToSaveWithName:(id)arg0 ;
-(id)errorForNoUbiquity;
-(id)fileURLForName:(id)arg0 ;
-(id)init;
-(id)savedGameForDocument:(id)arg0 ;
-(id)savedGameForDocuments:(id)arg0 ;
-(id)savedGamesWithName:(id)arg0 ;
-(void)addDocument:(id)arg0 ;
-(void)callFetchHandlers;
-(void)dealloc;
-(void)deleteSavedGamesWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)disableQueryUpdates;
-(void)documentConflictStateChanged:(id)arg0 ;
-(void)documentModified:(id)arg0 ;
-(void)enableQueryUpdates;
-(void)fetchSavedGamesWithCompletionHandler:(id)arg0 ;
-(void)loadDataForSavedGame:(id)arg0 completionHandler:(id)arg1 ;
-(void)queryDidFinishGathering:(id)arg0 ;
-(void)queryDidUpdate:(id)arg0 ;
-(void)removeDocument:(id)arg0 ;
-(void)resolveConflictingSavedGames:(id)arg0 withData:(id)arg1 completionHandler:(id)arg2 ;
-(void)saveGameData:(id)arg0 withName:(id)arg1 completionHandler:(id)arg2 ;
-(void)setupUbiquity;
-(void)startSavedGameQuery;
-(void)ubiquityAvailabilityChanged:(id)arg0 ;
-(void)updateSavedGameDocumentsForQueryWithHandler:(id)arg0 ;


@end


#endif