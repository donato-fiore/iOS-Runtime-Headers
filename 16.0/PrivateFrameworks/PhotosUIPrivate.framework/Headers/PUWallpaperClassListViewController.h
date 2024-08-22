// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUWALLPAPERCLASSLISTVIEWCONTROLLER_H
#define PUWALLPAPERCLASSLISTVIEWCONTROLLER_H

@class UICollectionViewController, NSArray, NSString, NSMutableDictionary;
@protocol UINavigationControllerDelegate, PUWallpaperClassDataSourceDelegate;


#import "PUProgressIndicatorView.h"
#import "PUWallpaperDebugViewSpec.h"

@interface PUWallpaperClassListViewController : UICollectionViewController <UINavigationControllerDelegate, PUWallpaperClassDataSourceDelegate>



@property (retain, nonatomic) NSArray *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *keyAssetBySuggestionUUID; // ivar: _keyAssetBySuggestionUUID
@property (retain, nonatomic) PUProgressIndicatorView *progressIndicator; // ivar: _progressIndicator
@property (retain, nonatomic) PUWallpaperDebugViewSpec *spec; // ivar: _spec
@property (readonly) Class superclass;


-(BOOL)shouldAutorotate;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)navigationControllerSupportedInterfaceOrientations:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)contextMenuConfigurationForItemAtIndexPath:(id)arg0 ;
-(id)createDataSources;
-(id)initWithSpec:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dataSourceChanged:(id)arg0 ;
-(void)hideProgressIndicator;
-(void)showProgressIndicator:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif