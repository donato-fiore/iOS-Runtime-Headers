// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKPEOPLEDETAILCOMPLICATIONPICKERDATASOURCE_H
#define NTKPEOPLEDETAILCOMPLICATIONPICKERDATASOURCE_H

@class CNContactStoreDataSource, NSArray, NSString, NSIndexPath, UITableView;
@protocol UITableViewDataSource;

#import <Foundation/Foundation.h>

#import "NTKComplicationPickerDetailViewConfiguration.h"
#import "NTKCFaceDetailComplicationCellProvider.h"

@interface NTKPeopleDetailComplicationPickerDataSource : NSObject <UITableViewDataSource>



@property (readonly, nonatomic) CNContactStoreDataSource *allContactsDataSource; // ivar: _allContactsDataSource
@property (readonly, nonatomic) NSArray *allFavoriteContacts; // ivar: _allFavoriteContacts
@property (readonly, nonatomic) NTKComplicationPickerDetailViewConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NTKCFaceDetailComplicationCellProvider *pickerCellProvider; // ivar: _pickerCellProvider
@property (readonly, nonatomic) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


+(id)_descriptorForRequiredKeysWithDescription:(id)arg0 ;
+(id)_newDataSourceWithName:(id)arg0 ;
+(id)sharedFormatter;
-(BOOL)_favoritesSectionNeeded;
-(BOOL)_isFavoriteAtIndexPath:(id)arg0 ;
-(BOOL)_itemIsSelectedAtIndexPath:(id)arg0 ;
-(NSInteger)_contactIndexForIdentifier:(id)arg0 inContactList:(id)arg1 ;
-(NSInteger)_numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)_sectionForTitleIndex:(NSInteger)arg0 ;
-(NSInteger)_totalSectionCount;
-(NSInteger)collectionView:(id)arg0 sectionForSectionTitleIndex:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_allContactsSections;
-(id)_contactAtIndexPath:(id)arg0 ;
-(id)_indexPathForIdentifier:(id)arg0 ;
-(id)_sectionIndexTitles;
-(id)complicationItemForIndexPath:(id)arg0 ;
-(id)initWithTableView:(id)arg0 detailConfiguration:(id)arg1 ;
-(id)sectionIndexTitlesForCollectionView:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_contactStoreChanged:(id)arg0 ;
-(void)_favoritesChanged:(id)arg0 ;
-(void)_reloadData;


@end


#endif