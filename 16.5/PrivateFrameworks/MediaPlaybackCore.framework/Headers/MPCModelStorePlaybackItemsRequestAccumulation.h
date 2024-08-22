// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMODELSTOREPLAYBACKITEMSREQUESTACCUMULATION_H
#define MPCMODELSTOREPLAYBACKITEMSREQUESTACCUMULATION_H

@class MPSectionedCollection, MPPropertySet, NSString, NSDictionary, MPLibraryObjectDatabase, ICURLAggregatedPerformanceMetrics;
@protocol MPLazySectionedCollectionDataSource, MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider;

#import <Foundation/Foundation.h>


@interface MPCModelStorePlaybackItemsRequestAccumulation : NSObject <MPLazySectionedCollectionDataSource>

 {
    MPSectionedCollection *_progressiveResults;
    id<MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> *_trustID;
    MPSectionedCollection *_requestedSectionedModelObjects;
    MPPropertySet *_properties;
    MPPropertySet *_personalizationProperties;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *equivalencyMapping; // ivar: _equivalencyMapping
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MPLibraryObjectDatabase *libraryObjectDatabase; // ivar: _libraryObjectDatabase
@property (readonly, nonatomic) ICURLAggregatedPerformanceMetrics *performanceMetrics; // ivar: _performanceMetrics
@property (readonly, copy, nonatomic) MPSectionedCollection *results;
@property (readonly) Class superclass;


-(NSUInteger)numberOfItemsInSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)identifiersForItemAtIndexPath:(id)arg0 ;
-(id)identifiersForSectionAtIndex:(NSInteger)arg0 ;
-(id)initWithProgressiveResults:(id)arg0 equivalencyMapping:(id)arg1 request:(id)arg2 libraryObjectDatabase:(id)arg3 performanceMetrics:(id)arg4 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)sectionAtIndex:(NSUInteger)arg0 ;


@end


#endif