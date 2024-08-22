// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUGRIDSTATUSLISTVIEWCONTROLLER_H
#define HUGRIDSTATUSLISTVIEWCONTROLLER_H

@class HFWallpaperSlice, NSString, UIVisualEffectView, HMRoom, HFHomeStatusItemManager;
@protocol HFItemManagerDelegate, HUBackgroundEffectViewGrouping, HUHomeKitObjectPresenting;


#import "HUControllableItemCollectionViewController.h"
#import "HUGridLayoutOptions.h"
#import "HUWallpaperView_legacy.h"

@interface HUGridStatusListViewController : HUControllableItemCollectionViewController <HFItemManagerDelegate, HUBackgroundEffectViewGrouping, HUHomeKitObjectPresenting>



@property (retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice;
@property (retain, nonatomic) HFWallpaperSlice *darkModeBlurredWallpaperSlice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (retain, nonatomic) HUWallpaperView_legacy *legacyWallpaperView;
@property (retain, nonatomic) UIVisualEffectView *outlineStyleBlurGroupingEffectView; // ivar: _outlineStyleBlurGroupingEffectView
@property (readonly, nonatomic) HMRoom *room; // ivar: _room
@property (retain, nonatomic) HFHomeStatusItemManager *statusItemManager; // ivar: _statusItemManager
@property (readonly) Class superclass;


+(NSUInteger)updateMode;
-(BOOL)_canSkipStatusDetailsForItem:(id)arg0 ;
-(BOOL)_statusItemRepresentsOnlyResidentIPads:(id)arg0 ;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginPresentationWithContext:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)_dismissPresentedViewControllersAnimated:(BOOL)arg0 ;
-(id)_performTapActionForItem:(id)arg0 tappedArea:(id)arg1 ;
-(id)_presentDetailsForHomeKitObject:(id)arg0 fromStatusItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)_presentHomeKitObject:(id)arg0 fromStatusItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)collectionView:(id)arg0 gridLayout:(id)arg1 backgroundEffectGroupingAtIndexPath:(id)arg2 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(id)hu_preloadContent;
-(id)initWithRoom:(id)arg0 ;
-(id)itemManager:(id)arg0 futureToUpdateItems:(id)arg1 itemUpdateOptions:(id)arg2 ;
-(id)presentHomeKitObject:(id)arg0 destination:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(id)presentStatusDetailsForStatusItemClass:(Class)arg0 animated:(BOOL)arg1 ;
-(id)quickControlPresentationContextForItem:(id)arg0 atIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_internalSetLayoutOptions:(id)arg0 ;
-(void)backgroundEffectAddCaptureDependent:(id)arg0 forBackgroundEffectIdentifier:(id)arg1 ;
-(void)backgroundEffectRemoveCaptureDependent:(id)arg0 forBackgroundEffectIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)diffableDataItemManager:(id)arg0 didUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 ;
-(void)itemManager:(id)arg0 didUpdateResultsForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif