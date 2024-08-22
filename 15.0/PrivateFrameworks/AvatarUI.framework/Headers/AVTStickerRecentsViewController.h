// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTSTICKERRECENTSVIEWCONTROLLER_H
#define AVTSTICKERRECENTSVIEWCONTROLLER_H

@class UIViewController, UICollectionView, UICollectionViewFlowLayout, NSString, NSArray, CALayer, AVTStickerGenerator;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, AVTStickerBackendDelegate, AVTStickerRecentsOverlayDelegate, AVTAvatarStoreInternal, NSObject, AVTStickerRecentsItem, AVTResourceCache, AVTAvatarRecord, AVTStickerRecentsViewControllerDelegate, OS_dispatch_queue;


#import "AVTStickerConfigurationProvider.h"
#import "AVTUIEnvironment.h"
#import "AVTUIStickerGeneratorPool.h"
#import "AVTClippableImageStore.h"
#import "AVTStickerRecentsOverlayView.h"
#import "AVTStickerRecentsLayout.h"
#import "AVTStickerRecentsMigrator.h"
#import "AVTSerialTaskScheduler.h"

@interface AVTStickerRecentsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AVTStickerBackendDelegate, AVTStickerRecentsOverlayDelegate>



@property (readonly, nonatomic) NSObject<AVTAvatarStoreInternal> *avatarStore; // ivar: _avatarStore
@property (retain, nonatomic) NSObject<NSObject> *avatarStoreChangeObserver; // ivar: _avatarStoreChangeObserver
@property (retain, nonatomic) NSObject<AVTStickerRecentsItem> *buttonItem; // ivar: _buttonItem
@property (readonly, nonatomic) NSObject<AVTResourceCache> *cache; // ivar: _cache
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // ivar: _collectionViewLayout
@property (retain, nonatomic) AVTStickerConfigurationProvider *configurationProvider; // ivar: _configurationProvider
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<AVTAvatarRecord> *defaultMemoji; // ivar: _defaultMemoji
@property (weak, nonatomic) NSObject<AVTStickerRecentsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *displayItems; // ivar: _displayItems
@property (retain, nonatomic) CALayer *edgeMaskLayer; // ivar: _edgeMaskLayer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *encodingQueue; // ivar: _encodingQueue
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (retain, nonatomic) AVTUIStickerGeneratorPool *generatorPool; // ivar: _generatorPool
@property (nonatomic) BOOL hasFetchedDefaultMemoji; // ivar: _hasFetchedDefaultMemoji
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVTClippableImageStore *imageStore; // ivar: _imageStore
@property (retain, nonatomic) AVTStickerRecentsOverlayView *overlayView; // ivar: _overlayView
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recentsWorkQueue; // ivar: _recentsWorkQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue; // ivar: _renderingQueue
@property (nonatomic) BOOL showPrereleaseSticker; // ivar: _showPrereleaseSticker
@property (readonly, nonatomic) AVTStickerGenerator *stickerGenerator; // ivar: _stickerGenerator
@property (retain, nonatomic) NSArray *stickerItems; // ivar: _stickerItems
@property (readonly, nonatomic) AVTStickerRecentsLayout *stickerRecentsLayout; // ivar: _stickerRecentsLayout
@property (retain, nonatomic) AVTStickerRecentsMigrator *stickerRecentsMigrator; // ivar: _stickerRecentsMigrator
@property (readonly) Class superclass;
@property (retain, nonatomic) AVTSerialTaskScheduler *taskScheduler; // ivar: _taskScheduler


+(id)imageStoreWithEnvironment:(id)arg0 ;
+(id)layoutForSize:(struct CGSize )arg0 ;
+(id)stickerCacheWithEnvironment:(id)arg0 ;
+(id)stickerForRecentItem:(id)arg0 ;
+(id)stickerRecentsController;
+(id)stickerRecentsControllerForStore:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithAvatarStore:(id)arg0 environment:(id)arg1 ;
-(id)placeholderItems;
-(id)recentStickersWithCount:(NSInteger)arg0 ;
-(struct UIEdgeInsets )edgeInsetsForContainerSize:(struct CGSize )arg0 ;
-(void)beginObservingAvatarStoreChanges;
-(void)buildRecentsItemsWithCompletionBlock:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)determineOverlayTypeWithCompletionBlock:(id)arg0 ;
-(void)dismissOverlayViewAnimated:(BOOL)arg0 ;
-(void)endObservingAvatarStoreChanges;
-(void)fetchDefaultMemojiIfNeeded;
-(void)overlayDidTapCloseButton:(id)arg0 ;
-(void)overlayDidTapContentView:(id)arg0 ;
-(void)overlayDidTapContinueButton:(id)arg0 ;
-(void)recentStickersDidChange:(id)arg0 ;
-(void)setupRenderingDependentPieces;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateDisplayItems;
-(void)updateItemSizeForContainerSize:(struct CGSize )arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif