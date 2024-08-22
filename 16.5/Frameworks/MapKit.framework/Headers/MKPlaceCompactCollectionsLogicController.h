// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPLACECOMPACTCOLLECTIONSLOGICCONTROLLER_H
#define MKPLACECOMPACTCOLLECTIONSLOGICCONTROLLER_H

@class NSArray, NSString, GEOGuideLocation;
@protocol MKPlaceBatchConsumer, MKCompactCollectionDataProvider, MKCompactCollectionDataUpdater;

#import <Foundation/Foundation.h>

#import "MKPlaceBatchController.h"

@interface MKPlaceCompactCollectionsLogicController : NSObject <MKPlaceBatchConsumer, MKCompactCollectionDataProvider, MKCompactCollectionDataUpdater>



@property (retain, nonatomic) MKPlaceBatchController *batchController; // ivar: _batchController
@property (retain, nonatomic) NSArray *batchableLocations; // ivar: _batchableLocations
@property (nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *flattenedIdentifiersForBatching; // ivar: _flattenedIdentifiersForBatching
@property (weak, nonatomic) NSObject<MKPlaceBatchConsumer> *guideConsumer; // ivar: _guideConsumer
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger initialDisplayCount; // ivar: _initialDisplayCount
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (retain, nonatomic) GEOGuideLocation *selectedGuideLocation; // ivar: _selectedGuideLocation
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *viewModels; // ivar: _viewModels


-(NSUInteger)numberOfSections;
-(id)buildBatchingStructureForResult:(id)arg0 ;
-(id)buildViewModelsFromGuideLocations:(id)arg0 ;
-(id)compactCollectionAtIndex:(NSUInteger)arg0 sectionIndex:(NSUInteger)arg1 ;
-(id)compactCollectionsInSection:(NSUInteger)arg0 ;
-(id)initWithGuideLocations:(id)arg0 context:(NSInteger)arg1 ;
-(id)initWithGuideLocationsResult:(id)arg0 context:(NSInteger)arg1 usingCollectionFetcher:(id)arg2 usingGuideConsumer:(id)arg3 usingBatchSize:(NSUInteger)arg4 selectedGuideLocation:(id)arg5 ;
-(id)titleForSectionFromTitle:(id)arg0 ;
-(void)createBatchControllerIfNeededUsingIdentifiers:(id)arg0 usingCollectionFetcher:(id)arg1 usingGuideConsumer:(id)arg2 batchSize:(NSUInteger)arg3 ;
-(void)dismissedCompactCollections;
-(void)shouldConsumeBatch:(BOOL)arg0 fetchedBatch:(id)arg1 ;
-(void)willDisplayCellAtIndexpath:(id)arg0 ;


@end


#endif