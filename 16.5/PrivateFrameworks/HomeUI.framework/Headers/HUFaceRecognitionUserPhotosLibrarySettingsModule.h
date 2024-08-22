// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUFACERECOGNITIONUSERPHOTOSLIBRARYSETTINGSMODULE_H
#define HUFACERECOGNITIONUSERPHOTOSLIBRARYSETTINGSMODULE_H

@class HFItemModule, NSSet, HFItemProvider, HMHome, HFStaticItem;



@interface HUFaceRecognitionUserPhotosLibrarySettingsModule : HFItemModule {
    NSSet *_itemProviders;
}


@property (retain, nonatomic) HFItemProvider *allowPhotosLibraryAccessItemProvider; // ivar: _allowPhotosLibraryAccessItemProvider
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HFStaticItem *photoLibraryAccessEveryoneInThisHome; // ivar: _photoLibraryAccessEveryoneInThisHome
@property (retain, nonatomic) HFStaticItem *photoLibraryAccessNever; // ivar: _photoLibraryAccessNever
@property (retain, nonatomic) HFStaticItem *photoLibraryAccessOnlyMe; // ivar: _photoLibraryAccessOnlyMe
@property (nonatomic) BOOL shouldUseProxCardPresentationStyle; // ivar: _shouldUseProxCardPresentationStyle


-(id)_updatePhotosLibrarySettingsForItem:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)didSelectItem:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 ;
-(id)itemProviders;


@end


#endif