// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSERVICEGROUPEDITORVIEWCONTROLLER_H
#define HUSERVICEGROUPEDITORVIEWCONTROLLER_H

@protocol HUPresentationDelegateHost, HUCollectionLayoutManagerDelegate, HUPresentationDelegate, HUServiceGroupEditorViewControllerDelegate;


#import "HUItemCollectionViewController.h"

@interface HUServiceGroupEditorViewController : HUItemCollectionViewController <HUPresentationDelegateHost, HUCollectionLayoutManagerDelegate>

 {
    ? editingName;
    ? $__lazy_storage_$_collectionLayoutManager;
}


@property (nonatomic, weak) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: presentationDelegate
@property (nonatomic, weak) NSObject<HUServiceGroupEditorViewControllerDelegate> *serviceGroupEditorDelegate; // ivar: serviceGroupEditorDelegate


+(id)forCreatingNewServiceGroupWithServices:(id)arg0 inHome:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg0 ;
-(BOOL)shouldShowHeaderForSection:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)displayedItemsInSection:(id)arg0 ;
-(id)initUsingCompositionalLayoutWithItemManager:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(id)initWithServiceGroupBuilder:(id)arg0 ;
-(id)layoutSectionForSection:(NSInteger)arg0 layoutEnvironment:(id)arg1 ;
-(id)listContentConfigurationForSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(void)cancelWithSender:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)doneWithSender:(id)arg0 ;
-(void)itemManagerDidUpdate:(id)arg0 ;
-(void)textDidChange:(id)arg0 forTextField:(id)arg1 item:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg0 item:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif