// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSELECTABLESERVICEGRIDVIEWCONTROLLER_H
#define HUSELECTABLESERVICEGRIDVIEWCONTROLLER_H

@class NSString, HFMutableSetDiff, HFSetDiff;
@protocol HUServiceGridItemManagerDelegate;


#import "HUServiceGridViewController.h"
#import "HUServiceGridItemManager.h"

@interface HUSelectableServiceGridViewController : HUServiceGridViewController <HUServiceGridItemManagerDelegate>



@property (nonatomic) BOOL allowsEmptySelection; // ivar: _allowsEmptySelection
@property (nonatomic) BOOL allowsMultipleSelection; // ivar: _allowsMultipleSelection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFMutableSetDiff *mutableSelectedItems; // ivar: _mutableSelectedItems
@property (retain, nonatomic) HFSetDiff *selectedItems;
@property (weak, nonatomic) HUServiceGridItemManager *serviceGridItemManager; // ivar: _serviceGridItemManager
@property (readonly) Class superclass;


+(id)defaultItemProviderCreatorWithOptions:(SEL)arg0 ;
+(id)itemServiceTypesToHide;
+(id)transformationBlockWithOptions:(SEL)arg0 ;
-(BOOL)_wantsToggleButtonForSection:(NSUInteger)arg0 ;
-(BOOL)canSelectItem:(id)arg0 indexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint )arg1 ;
-(BOOL)serviceGridItemManager:(id)arg0 shouldHideItem:(id)arg1 ;
-(CGFloat)headerViewHeightForSectionIndex:(NSUInteger)arg0 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithItemManager:(id)arg0 ;
-(id)initWithServiceGridItemManager:(id)arg0 ;
-(void)_addAllServicesInSectionFromButton:(id)arg0 ;
-(void)_addItemToSelection:(id)arg0 ;
-(void)_deleteItemFromSelection:(id)arg0 ;
-(void)_removeAllServicesInSectionFromButton:(id)arg0 ;
-(void)_setSelected:(BOOL)arg0 forItemsInSection:(NSInteger)arg1 ;
-(void)_updateSelectionState:(BOOL)arg0 forCell:(id)arg1 ;
-(void)_updateToggleStateForSection:(NSInteger)arg0 headerViewCell:(id)arg1 ;
-(void)addItemToSelection:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)deleteItemFromSelection:(id)arg0 ;
-(void)didChangeSelection;
-(void)didDeselectItem:(id)arg0 ;
-(void)didSelectItem:(id)arg0 ;
-(void)itemManagerDidUpdate:(id)arg0 ;


@end


#endif