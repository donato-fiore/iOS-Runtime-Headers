// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSEARCHZEROKEYWORDDATASOURCE_H
#define PUSEARCHZEROKEYWORDDATASOURCE_H

@class NSArray;
@protocol PUSearchZeroKeywordChangeDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PUSearchZeroKeywordDataSource : NSObject

@property (weak, nonatomic) NSObject<PUSearchZeroKeywordChangeDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL fetchInProgress; // ivar: _fetchInProgress
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue; // ivar: _fetchQueue
@property (copy, nonatomic) NSArray *sections; // ivar: _sections


+(id)_dateViewModelForKeywordDictionary:(id)arg0 ;
+(id)_fetchAssetCollectionsForIdentifiers:(id)arg0 ;
+(id)_fetchAssetsWithLocalIdentifiers:(id)arg0 ;
+(id)_fetchFinalMergeTargetPersonForPersonLocalIdentifier:(id)arg0 ;
+(id)_fetchKeyAssetForSceneIdentifier:(int)arg0 ;
+(id)_fetchKeyAssetOfAssetCollection:(id)arg0 withOptions:(id)arg1 ;
+(id)_fetchOptionsForPersonFetching;
+(id)_holidayViewModelForKeywordDictionary:(id)arg0 ;
+(id)_homeViewModelForKeywordDictionary:(id)arg0 ;
+(id)_meaningViewModelForKeywordDictionary:(id)arg0 ;
+(id)_personViewModelForKeywordDictionary:(id)arg0 person:(id)arg1 ;
+(id)_personsByLocalIdentifiers:(id)arg0 allUniqueLocalIdentifiers:(id)arg1 ;
+(id)_personsForLocalIdentifiers:(id)arg0 ;
+(id)_placeViewModelForKeywordDictionary:(id)arg0 ;
+(id)_sceneViewModelForKeywordDictionary:(id)arg0 ;
+(id)_seasonViewModelForKeywordDictionary:(id)arg0 ;
+(id)_sectionsForZeroKeywords:(id)arg0 personsByLocalIdentifier:(id)arg1 ;
+(id)_socialGroupViewModelForKeywordDictionary:(id)arg0 peopleByKeyword:(id)arg1 ;
+(id)_socialGroupsByKeywordwithPersonsByLocalIdentifier:(id)arg0 socialGroupZeroKeywords:(id)arg1 ;
+(id)_uniquePersonLocalIdentifiersForZeroKeywords:(id)arg0 ;
+(id)_zeroKeywordsFromDefaultKeywordStore;
+(id)zeroKeywordLog;
+(void)_fetchAssetsForAssetViewModels:(id)arg0 ;
+(void)_fetchKeyAssetsForAssetCollectionViewModels:(id)arg0 ;
-(BOOL)_shouldFetchItems;
-(BOOL)hasZeroKeywords;
-(NSInteger)indexForPlaceKey:(id)arg0 ;
-(NSInteger)sectionForSectionType:(NSInteger)arg0 ;
-(NSInteger)sectionTypeForSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfItemsInSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)_zeroKeywordsFromDefaultKeywordStore;
-(id)debugDictionary;
-(id)description;
-(id)init;
-(id)tapToRadarAttachments;
-(id)titleForSection:(NSUInteger)arg0 ;
-(id)viewModelForIndexPath:(id)arg0 ;
-(void)fetchItems;
-(void)ppt_prepareZeroKeywordRequest:(id)arg0 ;


@end


#endif