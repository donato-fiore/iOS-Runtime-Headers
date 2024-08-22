// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCONTAINEDACCESSORYELEMENTSGRIDVIEWCONTROLLER_H
#define HUCONTAINEDACCESSORYELEMENTSGRIDVIEWCONTROLLER_H

@class HFMediaAccessoryItem, HFItem<HUServiceContainerItem><NSCopying>;
@protocol HUDetailsPresentationDelegateHost, HUPresentationDelegate, HUContainedAccessoryElementsGridViewControllerDelegate;


#import "HUControllableItemCollectionViewController.h"

@interface HUContainedAccessoryElementsGridViewController : HUControllableItemCollectionViewController <HUDetailsPresentationDelegateHost>

 {
    ? isPresentedModally;
    ? $__lazy_storage_$_collectionLayoutManager;
}


@property (nonatomic, retain) HFMediaAccessoryItem *mediaItem; // ivar: mediaItem
@property (nonatomic, retain) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: presentationDelegate
@property (nonatomic) BOOL requiresPresentingViewControllerDismissal; // ivar: requiresPresentingViewControllerDismissal
@property (nonatomic, retain) HFItem<HUServiceContainerItem><NSCopying> *serviceContainingItem; // ivar: serviceContainingItem
@property (nonatomic, weak) NSObject<HUContainedAccessoryElementsGridViewControllerDelegate> *serviceGridDelegate; // ivar: serviceGridDelegate


-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(id)initUsingCompositionalLayoutWithItemManager:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(id)initWithMediaItem:(id)arg0 isPresentedModally:(BOOL)arg1 valueSource:(id)arg2 ;
-(id)initWithServiceContainingItem:(id)arg0 isPresentedModally:(BOOL)arg1 valueSource:(id)arg2 ;
-(id)initWithServiceContainingItem:(id)arg0 mediaItem:(id)arg1 isPresentedModally:(BOOL)arg2 valueSource:(id)arg3 ;
-(id)layoutSectionForSection:(NSInteger)arg0 layoutEnvironment:(id)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)itemManagerDidUpdate:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif