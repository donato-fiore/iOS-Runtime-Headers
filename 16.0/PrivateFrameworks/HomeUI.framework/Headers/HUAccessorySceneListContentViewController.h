// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUACCESSORYSCENELISTCONTENTVIEWCONTROLLER_H
#define HUACCESSORYSCENELISTCONTENTVIEWCONTROLLER_H

@class NSString, HFItem, NSSet, HFItem<HFServiceLikeItem>;
@protocol HUServiceGridItemManagerDelegate, HUSceneEditorDelegate, HUAccessorySceneListContentViewControllerDelegate;


#import "HUSelectableServiceGridViewController.h"
#import "HUAccessorySceneListContentItemManager.h"

@interface HUAccessorySceneListContentViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate, HUSceneEditorDelegate>



@property (retain, nonatomic) NSString *analyticsPresentationContext; // ivar: _analyticsPresentationContext
@property (readonly, nonatomic) NSUInteger contentSource; // ivar: _contentSource
@property (retain, nonatomic) HFItem *currentlyOpenedItem; // ivar: _currentlyOpenedItem
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUAccessorySceneListContentViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeTopMargin; // ivar: _includeTopMargin
@property (readonly, nonatomic) HUAccessorySceneListContentItemManager *itemManager;
@property (nonatomic) BOOL persistAddedSuggestions; // ivar: _persistAddedSuggestions
@property (readonly, copy, nonatomic) NSSet *selectedActionSetBuilders;
@property (readonly, nonatomic) NSUInteger selectionType; // ivar: _selectionType
@property (readonly, copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem; // ivar: _serviceLikeItem
@property (readonly) Class superclass;


+(id)computeNumberOfItemsToDisplayForContentSource:(NSUInteger)arg0 serviceLikeItem:(id)arg1 home:(id)arg2 ;
-(BOOL)canSelectItem:(id)arg0 indexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint )arg1 view:(id)arg2 ;
-(NSUInteger)itemTypeForItem:(id)arg0 ;
-(id)commitChangesToSelectedActionBuilders;
-(id)initWithServiceLikeItem:(id)arg0 contentSource:(NSUInteger)arg1 selectionType:(NSUInteger)arg2 ;
-(id)layoutOptionsForSection:(NSInteger)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)didChangeSelection;
-(void)sceneEditor:(id)arg0 didCommitActionSet:(id)arg1 ;


@end


#endif