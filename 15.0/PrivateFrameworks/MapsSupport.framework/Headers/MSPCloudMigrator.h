// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPCLOUDMIGRATOR_H
#define MSPCLOUDMIGRATOR_H

@class NSArray, NSString, NSOrderedSet;
@protocol MSPCloudContainerObserver;

#import <Foundation/Foundation.h>

#import "MSPJournal.h"

@interface MSPCloudMigrator : NSObject <MSPCloudContainerObserver>



@property (retain, nonatomic) NSArray *containers; // ivar: _containers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MSPJournal *journal; // ivar: _journal
@property (retain, nonatomic) NSOrderedSet *migratedFavoriteIdentifiers; // ivar: _migratedFavoriteIdentifiers
@property (readonly) Class superclass;


-(id)initWithCloudContainers:(id)arg0 ;
-(id)initWithContainers:(id)arg0 ;
-(void)_performMigrationsForCollectionsContainerWithCompletion:(id)arg0 ;
-(void)_performMigrationsForFavoritesContainerWithCompletion:(id)arg0 ;
-(void)_performMigrationsForHistoryContainerWithCompletion:(id)arg0 ;
-(void)_performMigrationsForPinnedPlacesContainerWithCompletion:(id)arg0 ;
-(void)_performPreSyncMigrationsForCollectionsContainerWithCompletion:(id)arg0 ;
-(void)_performPreSyncMigrationsForFavoritesContainerWithCompletion:(id)arg0 ;
-(void)_performPreSyncMigrationsForHistoryContainerWithCompletion:(id)arg0 ;
-(void)cloudContainer:(id)arg0 didFetchChanges:(id)arg1 ;
-(void)cloudContainerDidChange:(id)arg0 ;
-(void)performMigrationsWithCompletion:(id)arg0 ;
-(void)performPreSyncMigrationsWithCompletion:(id)arg0 ;


@end


#endif