// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMDEBUGCOLLECTIONVIEWCONTROLLER_H
#define PMDEBUGCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSArray, UIAlertController, PHAssetCollection, PHFetchResult, NSString, NSDictionary, NSURL, UIProgressView, NSMutableDictionary, UIBarButtonItem, UIView;
@protocol PMDebugCollectionViewControllerProtocol;


#import "MiroAutoEditController.h"
#import "MiroBlueprint.h"
#import "MiroMemory.h"
#import "MiroPickList.h"
#import "VEKProduction.h"
#import "Project.h"
#import "VEKResult.h"

@interface PMDebugCollectionViewController : UICollectionViewController <PMDebugCollectionViewControllerProtocol>

 {
    NSArray *_prohibitedDataExportLocations;
}


@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (nonatomic) NSInteger allAssetCount; // ivar: _allAssetCount
@property (retain, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (retain, nonatomic) MiroAutoEditController *autoEditController; // ivar: _autoEditController
@property (retain, nonatomic) MiroBlueprint *blueprint; // ivar: _blueprint
@property (nonatomic) Buckets buckets; // ivar: _buckets
@property BOOL cancelled; // ivar: _cancelled
@property (retain, nonatomic) PHFetchResult *curatedAssets; // ivar: _curatedAssets
@property (nonatomic) NSUInteger currentSortType; // ivar: _currentSortType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSDictionary *freezeRanges; // ivar: _freezeRanges
@property (nonatomic) BOOL hackReuseCell; // ivar: _hackReuseCell
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSaveMode; // ivar: _isSaveMode
@property (retain, nonatomic) NSURL *localPersistentFile; // ivar: _localPersistentFile
@property (retain, nonatomic) MiroMemory *memory; // ivar: _memory
@property (nonatomic) NSInteger pickedItemCount; // ivar: _pickedItemCount
@property (retain, nonatomic) MiroPickList *picklist; // ivar: _picklist
@property (retain, nonatomic) VEKProduction *production; // ivar: _production
@property (retain, nonatomic) UIProgressView *progressView; // ivar: _progressView
@property (retain, nonatomic) Project *project; // ivar: _project
@property (retain, nonatomic) NSMutableDictionary *projectMoodNamedTransitions; // ivar: _projectMoodNamedTransitions
@property (retain, nonatomic) VEKResult *result; // ivar: _result
@property (weak, nonatomic) UIBarButtonItem *sortBarButton; // ivar: _sortBarButton
@property (retain, nonatomic) NSArray *sortTitles; // ivar: _sortTitles
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly) Class superclass;
@property BOOL syncPreview; // ivar: _syncPreview
@property (retain, nonatomic) UIView *textContainerView; // ivar: _textContainerView
@property (nonatomic) BOOL textOnly; // ivar: _textOnly


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)_getCurrentCountOfItems;
-(NSUInteger)numberRowsWithCurrentCount;
-(id)_framingTestingCSV;
-(id)allAssets;
-(id)allAssetsAsArray;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)createDebugPageWithInfoWithStartingIndex:(NSUInteger)arg0 andEndingIndex:(NSUInteger)arg1 ;
-(id)createKBFramingToAssetMapWithAspect:(id)arg0 ;
-(id)createKBPlaybackSizeToAssetMap;
-(id)logFeaturedPeopleInMemory;
-(id)makeEnhancedStringFromPlainOne:(id)arg0 ;
-(id)makeEnhancedStringFromPlainOne:(id)arg0 size:(int)arg1 ;
-(id)prettyTransitionNameFromID:(id)arg0 fromBlueprint:(id)arg1 ;
-(id)renderBoundingBoxToImage:(id)arg0 ;
-(id)renderBoundingBoxToImage:(id)arg0 metadataRects:(id)arg1 normalized:(BOOL)arg2 ;
-(id)replaceEmojiWithPrintName:(id)arg0 ;
-(id)requestedSongString;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_exportFramingDecisions;
-(void)bringUpActions:(id)arg0 ;
-(void)bringUpSortOptions:(id)arg0 ;
-(void)closeMemoryTransition:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)createDebugGraphics;
-(void)didReceiveMemoryWarning;
-(void)done:(id)arg0 ;
-(void)drawImageInContext:(id)arg0 andFrame:(struct CGRect )arg1 ;
-(void)drawSeperatingBorderInRect:(struct CGRect )arg0 withColor:(id)arg1 ;
-(void)fixPopoverForViewController:(id)arg0 withSender:(id)arg1 ;
-(void)image:(id)arg0 didFinishSavingWithError:(id)arg1 contextInfo:(*void)arg2 ;
-(void)pickInfoAndAsset:(*id)arg0 asset:(*id)arg1 fromIndexPath:(*id)arg2 ;
-(void)presentAirDropControllerWithDebugString:(id)arg0 ;
-(void)presentAirdropControllerWithDebugImage:(id)arg0 ;
-(void)presentAirdropControllerWithDebugImageArray:(id)arg0 ;
-(void)presentModelImageViewWithImage:(id)arg0 ;
-(void)processSaliencyAO;
-(void)renderKBRects;
-(void)saveDebugPanelForMemory:(id)arg0 ;
-(void)showMemoryTransitions;
-(void)showProject;
-(void)showScoreLog;
-(void)showTextVersion;
-(void)showTextViewWith:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)writeTextToImageContextWithSize:(struct CGSize )arg0 ;
-(void)writeTextToImageContextWithSize:(struct CGSize )arg0 andCell:(id)arg1 andLocation:(struct CGPoint )arg2 ;


@end


#endif