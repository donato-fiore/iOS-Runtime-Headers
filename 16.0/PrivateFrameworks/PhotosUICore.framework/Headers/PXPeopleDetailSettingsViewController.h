// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEDETAILSETTINGSVIEWCONTROLLER_H
#define PXPEOPLEDETAILSETTINGSVIEWCONTROLLER_H

@class UIViewController, UICollectionView, NSString, NSArray;
@protocol PXPeopleDataSourceDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout;


#import "PXPeoplePersonDataSource.h"
#import "PXPeopleSuggestionDataSource.h"

@interface PXPeopleDetailSettingsViewController : UIViewController <PXPeopleDataSourceDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>



@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) PXPeoplePersonDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *personDetectionTypes; // ivar: _personDetectionTypes
@property (retain, nonatomic) PXPeopleSuggestionDataSource *suggestionDataSource; // ivar: _suggestionDataSource
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)init;
-(id)initWithDataSourceReloadBlock:(id)arg0 ;
-(id)initWithPersonDetectionType:(short)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)commonInit;
-(void)commonInitWithDataSourceReloadBlock:(id)arg0 ;
-(void)loadSuggestionsForPerson:(id)arg0 ;
-(void)peopleDataSource:(id)arg0 didApplyIncrementalChanges:(id)arg1 ;
-(void)peopleDataSourceMembersChanged:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif