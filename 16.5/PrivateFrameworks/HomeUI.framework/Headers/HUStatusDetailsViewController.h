// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSTATUSDETAILSVIEWCONTROLLER_H
#define HUSTATUSDETAILSVIEWCONTROLLER_H

@protocol HUStatusDetailsViewControllerDelegate;


#import "HUControllableItemCollectionViewController.h"

@interface HUStatusDetailsViewController : HUControllableItemCollectionViewController {
    ? $__lazy_storage_$_collectionLayoutManager;
}


@property (nonatomic, weak) NSObject<HUStatusDetailsViewControllerDelegate> *statusDetailsDelegate; // ivar: statusDetailsDelegate


-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint )arg1 view:(id)arg2 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(id)initUsingCompositionalLayoutWithItemManager:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(id)initWithStatusItem:(id)arg0 delegate:(id)arg1 ;
-(id)layoutSectionForSection:(NSInteger)arg0 layoutEnvironment:(id)arg1 ;
-(id)prepareToPerformToggleActionForItem:(id)arg0 sourceItem:(id)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)doneButtonPressed:(id)arg0 ;
-(void)presentationCoordinator:(id)arg0 willBeginPresentationWithContext:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif