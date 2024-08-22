// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMAPIDEFAULTSECTIONEDCOLLECTIONDATASOURCE_H
#define NMAPIDEFAULTSECTIONEDCOLLECTIONDATASOURCE_H

@class NSArray, ICURLBag, NSMutableArray, NSMutableDictionary, NSCache, NSString;
@protocol MPLazySectionedCollectionDataSource;

#import <Foundation/Foundation.h>

#import "NMAPIRequest.h"

@interface NMAPIDefaultSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource>

 {
    NMAPIRequest *_request;
    NSArray *_results;
    ICURLBag *_storeURLBag;
    NSMutableArray *_sectionResultIDs;
    NSMutableDictionary *_sectionResults;
    NSMutableArray *_sectionedItemResultIDs;
    NSMutableDictionary *_itemResults;
    NSCache *_cachedSections;
    NSCache *_cachedItems;
    NSMutableDictionary *_importedIdentifierSets;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isSupportedItem:(id)arg0 ;
-(NSUInteger)numberOfItemsInSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)_musicURLWithPartialURLString:(id)arg0 ;
-(id)_storeBrowseSectionWithDictionary:(id)arg0 ;
-(id)initWithRequest:(id)arg0 results:(id)arg1 storeURLBag:(id)arg2 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)sectionAtIndex:(NSUInteger)arg0 ;
-(void)_addItemsFromArray:(id)arg0 ;
-(void)_addSectionWithIdentifier:(id)arg0 dictionary:(id)arg1 ;
-(void)_parseResults;
-(void)_updateImportedIdentifierSetsWithIdentifier:(id)arg0 dictionary:(id)arg1 ;


@end


#endif