// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUWALLPAPERGALLERYDEBUGVIEWCONTROLLER_H
#define PUWALLPAPERGALLERYDEBUGVIEWCONTROLLER_H

@class UICollectionViewController, NSDictionary, NSArray;


#import "PUWallpaperDebugViewSpec.h"

@interface PUWallpaperGalleryDebugViewController : UICollectionViewController

@property (retain, nonatomic) NSDictionary *keyAssetBySuggestionUUID; // ivar: _keyAssetBySuggestionUUID
@property (retain, nonatomic) PUWallpaperDebugViewSpec *spec; // ivar: _spec
@property (retain, nonatomic) NSArray *suggestions; // ivar: _suggestions


-(BOOL)shouldAutorotate;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)navigationControllerSupportedInterfaceOrientations:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithSpec:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)viewDidLoad;


@end


#endif