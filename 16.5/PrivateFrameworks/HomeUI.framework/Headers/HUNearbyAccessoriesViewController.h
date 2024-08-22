// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUNEARBYACCESSORIESVIEWCONTROLLER_H
#define HUNEARBYACCESSORIESVIEWCONTROLLER_H

@protocol HUPresentationDelegateHost, HUCollectionLayoutManagerDelegate, HUPresentationDelegate;


#import "HUControllableItemCollectionViewController.h"

@interface HUNearbyAccessoriesViewController : HUControllableItemCollectionViewController <HUPresentationDelegateHost, HUCollectionLayoutManagerDelegate>

 {
    ? nearbyAccessoriesDelegate;
    ? currentAccessory;
    ? supportsQuickControls;
    ? layoutManager;
    ? userInfoConstraints;
    ? _userInfoDescription;
    ? _userInfoHeading;
}


@property (nonatomic, retain) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: presentationDelegate


-(BOOL)presentationCoordinator:(id)arg0 shouldBeginLongPressPresentationWithContext:(id)arg1 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginPresentationWithContext:(id)arg1 ;
-(BOOL)presentationCoordinatorShouldProvideCancellationFeedback:(id)arg0 ;
-(BOOL)shouldShowHeaderForSection:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)displayedItemsInSection:(id)arg0 ;
-(id)initUsingCompositionalLayoutWithItemManager:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(id)initWithSourceItem:(id)arg0 supportsQuickControls:(BOOL)arg1 ;
-(id)layoutSectionForSection:(NSInteger)arg0 layoutEnvironment:(id)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)displayEditorWithSender:(id)arg0 ;
-(void)doneButtonPressedWithSender:(id)arg0 ;
-(void)itemManager:(id)arg0 didUpdateResultsForSourceItem:(id)arg1 ;
-(void)updateViewConstraints;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif