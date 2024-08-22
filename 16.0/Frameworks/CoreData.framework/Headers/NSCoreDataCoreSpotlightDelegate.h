// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCOREDATACORESPOTLIGHTDELEGATE_H
#define NSCOREDATACORESPOTLIGHTDELEGATE_H

@class NSString, NSURL, NSDictionary;

#import <Foundation/Foundation.h>

#import "NSPersistentStoreCoordinator.h"
#import "NSPersistentStoreDescription.h"
#import "NSManagedObjectContext.h"
#import "PFCSSearchableIndexProvider.h"

@interface NSCoreDataCoreSpotlightDelegate : NSObject {
    NSPersistentStoreCoordinator *_coordinator;
    NSPersistentStoreDescription *_description;
    NSString *_storeIdentifier;
    NSManagedObjectContext *_context__;
    NSString *_domainIdentifier;
    NSString *_indexName;
    NSString *_bundleIdentifier;
    NSString *_protectionClass;
    BOOL _supportsPersistentHistory;
    BOOL _usesSharedCoordinatorStack;
    BOOL _usesPrivateIndex;
    NSURL *_indexURL;
    int __indexerThrottle;
    NSDictionary *_indexedPropertyNamesByEntity;
}


@property (retain, nonatomic) PFCSSearchableIndexProvider *indexProvider; // ivar: _indexProvider
@property (copy) NSURL *indexURL;
@property (readonly, getter=isIndexingEnabled) BOOL indexingEnabled; // ivar: _enabled


+(void)initialize;
-(BOOL)usePrivateIndex;
-(id)attributeSetForObject:(id)arg0 ;
-(id)bundleIdentifier;
-(id)domainIdentifier;
-(id)indexName;
-(id)indexedPropertyNamesByEntityNameUsingModel:(id)arg0 ;
-(id)init;
-(id)initForStoreWithDescription:(id)arg0 coordinator:(id)arg1 ;
-(id)initForStoreWithDescription:(id)arg0 model:(id)arg1 ;
-(id)protectionClass;
-(int)_indexerThrottle;
-(void)dealloc;
-(void)deleteSpotlightIndexWithCompletionHandler:(id)arg0 ;
-(void)indexSearchableItemsToCurrentHistoryToken;
-(void)searchableIndex:(id)arg0 reindexAllSearchableItemsWithAcknowledgementHandler:(id)arg1 ;
-(void)searchableIndex:(id)arg0 reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(id)arg2 ;
-(void)startSpotlightIndexing;
-(void)stopSpotlightIndexing;


@end


#endif