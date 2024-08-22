// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROKEYASSETSUGGESTIONSCOLLECTIONSVIEWCONTROLLER_H
#define MIROKEYASSETSUGGESTIONSCOLLECTIONSVIEWCONTROLLER_H



#import "MiroAssetSuggestionsCollectionViewController.h"

@interface MiroKeyAssetSuggestionsCollectionsViewController : MiroAssetSuggestionsCollectionViewController

@property BOOL viewInitialLayout; // ivar: _viewInitialLayout


-(BOOL)collectionView:(id)arg0 shouldDeselectItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_customizeKeyAssetPickerLayoutWithSize:(struct CGSize )arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif