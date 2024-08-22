// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMEDIASYSTEMEDITORVIEWCONTROLLER_H
#define HUMEDIASYSTEMEDITORVIEWCONTROLLER_H

@class HFMediaSystemBuilder;
@protocol HUPresentationDelegateHost, HUMediaSystemEditorViewControllerDelegate, HUPresentationDelegate;


#import "HUItemCollectionViewController.h"

@interface HUMediaSystemEditorViewController : HUItemCollectionViewController <HUPresentationDelegateHost>

 {
    ? accessoryModule;
    ? selectionController;
    ? $__lazy_storage_$_helper;
}


@property (nonatomic, weak) NSObject<HUMediaSystemEditorViewControllerDelegate> *delegate; // ivar: delegate
@property (nonatomic, readonly) HFMediaSystemBuilder *mediaSystemBuilder;
@property (nonatomic, weak) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: presentationDelegate


-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)createMediaSystem;
-(id)initUsingCompositionalLayoutWithItemManager:(id)arg0 ;
-(id)initWithAccessories:(id)arg0 home:(id)arg1 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(id)initWithMediaSystemBuilder:(id)arg0 staticAccessories:(id)arg1 ;
-(id)listContentConfigurationForSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)createMediaSystemWithAccessory:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif