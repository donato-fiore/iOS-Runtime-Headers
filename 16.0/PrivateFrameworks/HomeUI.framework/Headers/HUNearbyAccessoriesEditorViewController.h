// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUNEARBYACCESSORIESEDITORVIEWCONTROLLER_H
#define HUNEARBYACCESSORIESEDITORVIEWCONTROLLER_H

@protocol HUCollectionLayoutManagerDelegate;


#import "HUItemCollectionViewController.h"

@interface HUNearbyAccessoriesEditorViewController : HUItemCollectionViewController <HUCollectionLayoutManagerDelegate>

 {
    ? EmptySetIdentifier;
    ? NearbyAccessoryCustomUUIDStrings;
    ? accessoryElementModule;
    ? instructionModule;
    ? selectionController;
    ? layoutManager;
    ? primaryAccessory;
    ? completionHandler;
}




-(BOOL)shouldShowHeaderForSection:(id)arg0 ;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)displayedItemsInSection:(id)arg0 ;
-(id)hu_preloadContent;
-(id)initUsingCompositionalLayoutWithItemManager:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(id)initWithPrimaryAccessory:(id)arg0 completionHandler:(id)arg1 ;
-(id)layoutSectionForSection:(NSInteger)arg0 layoutEnvironment:(id)arg1 ;
-(void)cancelEditingWithSender:(id)arg0 ;
-(void)dismissEditorWithSender:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif