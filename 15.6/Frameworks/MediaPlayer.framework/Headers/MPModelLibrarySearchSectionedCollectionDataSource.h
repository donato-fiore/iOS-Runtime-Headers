// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELLIBRARYSEARCHSECTIONEDCOLLECTIONDATASOURCE_H
#define MPMODELLIBRARYSEARCHSECTIONEDCOLLECTIONDATASOURCE_H

@class NSString, NSArray;
@protocol MPLazySectionedCollectionDataSource;

#import <Foundation/Foundation.h>

#import "MPModelLibrarySearchRequest.h"

@interface MPModelLibrarySearchSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) MPModelLibrarySearchRequest *request; // ivar: _request
@property (readonly, copy, nonatomic) NSArray *resultContainers; // ivar: _resultContainers
@property (readonly) Class superclass;


-(BOOL)hasMoreResultsForSectionAtIndex:(NSInteger)arg0 ;
-(NSInteger)searchWeightForIndexPath:(id)arg0 ;
-(NSUInteger)numberOfItemsInSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)identifiersForItemAtIndexPath:(id)arg0 ;
-(id)initWithEntitiesQueryResultContainers:(id)arg0 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)sectionAtIndex:(NSUInteger)arg0 ;


@end


#endif