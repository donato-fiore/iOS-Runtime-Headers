// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSPEAKERGROUPINGVIEWCONTROLLER_H
#define HUSPEAKERGROUPINGVIEWCONTROLLER_H

@protocol HUPresentationDelegateHost, HUCollectionLayoutManagerDelegate, HUMediaGroupEditorViewControllerDelegate, HUPresentationDelegate;


#import "HUItemCollectionViewController.h"

@interface HUSpeakerGroupingViewController : HUItemCollectionViewController <HUPresentationDelegateHost, HUCollectionLayoutManagerDelegate>

 {
    ? mediaAccessoryItem;
    ? roomSpeakersModuleController;
    ? mediaGroupBuilder;
    ? speakerGroupingItemManager;
    ? $__lazy_storage_$_collectionLayoutManager;
    ? editingName;
    ? headerReuseIdentifier;
}


@property (nonatomic, weak) NSObject<HUMediaGroupEditorViewControllerDelegate> *delegate; // ivar: delegate
@property (nonatomic, weak) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: presentationDelegate


-(id)initUsingCompositionalLayoutWithItemManager:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(id)initWithMediaAccessoryItem:(id)arg0 presentationDelegate:(id)arg1 ;


@end


#endif