// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUFACERECOGNITIONUSERPHOTOSLIBRARYSETTINGSITEMMANAGER_H
#define HUFACERECOGNITIONUSERPHOTOSLIBRARYSETTINGSITEMMANAGER_H

@class HFItemManager, HFStaticItem, HMHome, HFStaticItemProvider, HMUser;


#import "HUFaceRecognitionUserPhotosLibrarySettingsModule.h"

@interface HUFaceRecognitionUserPhotosLibrarySettingsItemManager : HFItemManager

@property (retain, nonatomic) HFStaticItem *addNamesInPhotosLibraryItem; // ivar: _addNamesInPhotosLibraryItem
@property (readonly, nonatomic) HMHome *overrideHome; // ivar: _overrideHome
@property (readonly, nonatomic) HUFaceRecognitionUserPhotosLibrarySettingsModule *photosLibrarySettingsModule; // ivar: _photosLibrarySettingsModule
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider; // ivar: _staticItemProvider
@property (readonly, nonatomic) HMUser *user;


-(id)_buildItemModulesForHome:(id)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_homeFuture;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)setImportPhotosLibraryEnabled:(BOOL)arg0 ;
-(id)setSharePhotosLibraryEnabled:(BOOL)arg0 ;


@end


#endif