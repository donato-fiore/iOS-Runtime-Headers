// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTERGALLERYDATAPROVIDER_H
#define PBFPOSTERGALLERYDATAPROVIDER_H

@class NSHashTable, NSString, NSMutableOrderedSet, NSMutableDictionary, NSOrderedSet;
@protocol NSCopying, NSMutableCopying, PBFPosterPreviewGenerator, PBFComplicationSnapshotProviding, PBFPosterSnapshotProviding;

#import <Foundation/Foundation.h>


@interface PBFPosterGalleryDataProvider : NSObject <NSCopying, NSMutableCopying, PBFPosterPreviewGenerator>

 {
    NSHashTable *_observers;
    NSInteger _transactionsCount;
    NSInteger _changeCount;
}


@property (retain, nonatomic) NSObject<PBFComplicationSnapshotProviding> *complicationSnapshotProvider; // ivar: _complicationSnapshotProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger numberOfSections;
@property (retain, nonatomic) NSMutableOrderedSet *orderedSectionIdentifiers; // ivar: _orderedSectionIdentifiers
@property (retain, nonatomic) NSMutableDictionary *posterPreviewForPosterUniqueIdentifier; // ivar: _posterPreviewForPosterUniqueIdentifier
@property (retain, nonatomic) NSMutableDictionary *sectionIdentifierToItems; // ivar: _sectionIdentifierToItems
@property (retain, nonatomic) NSMutableDictionary *sectionIdentifierToLocalizedSubtitle; // ivar: _sectionIdentifierToLocalizedSubtitle
@property (retain, nonatomic) NSMutableDictionary *sectionIdentifierToLocalizedTitle; // ivar: _sectionIdentifierToLocalizedTitle
@property (retain, nonatomic) NSMutableDictionary *sectionIdentifierToSectionType; // ivar: _sectionIdentifierToSectionType
@property (readonly, nonatomic) NSOrderedSet *sectionIdentifiers;
@property (retain, nonatomic) NSObject<PBFPosterSnapshotProviding> *snapshotProvider; // ivar: _snapshotProvider
@property (readonly) Class superclass;


+(id)demoPreviewProvider;
-(BOOL)sectionShowsDescriptionLabel:(id)arg0 ;
-(BOOL)sectionShowsTitleLabel:(id)arg0 ;
-(NSInteger)sectionTypeForSectionWithIdentifier:(id)arg0 ;
-(NSUInteger)numberOfItemsInSectionWithIdentifier:(id)arg0 ;
-(NSUInteger)sectionIndexForIdentifier:(id)arg0 ;
-(id)buildSnapshot;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)itemsForSectionWithIdentifier:(id)arg0 ;
-(id)localizedSubtitleForSectionWithIdentifier:(id)arg0 ;
-(id)localizedTitleForSectionWithIdentifier:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)posterPreviewsForPath:(id)arg0 ;
-(id)preparedComplicationPreviewImagesForPreview:(id)arg0 ;
-(id)preparedSnapshotForPosterPreview:(id)arg0 ;
-(id)previewForPreviewUniqueIdentifier:(id)arg0 ;
-(id)sectionIdentifierForIndex:(NSInteger)arg0 ;
-(void)_decrementTransactionCount:(BOOL)arg0 ;
-(void)_incrementTransactionCount:(BOOL)arg0 ;
-(void)_markChangeDidOccur;
-(void)_notifyObserversDidUpdate;
-(void)_notifyObserversWillUpdate;
-(void)addObserver:(id)arg0 ;
// -(void)fetchComplicationPreviewImagesForPreview:(id)arg0 complicationSnapshotReceivedHandler:(id)arg1 errorHandler:(unk)arg2 completion:(id)arg3  ;
-(void)fetchSnapshotForPosterPreview:(id)arg0 completion:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif