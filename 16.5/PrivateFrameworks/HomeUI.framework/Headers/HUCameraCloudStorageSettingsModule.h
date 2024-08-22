// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCAMERACLOUDSTORAGESETTINGSMODULE_H
#define HUCAMERACLOUDSTORAGESETTINGSMODULE_H

@class HFItemModule, NSSet, HFItemProvider, NSString, UIViewController;
@protocol HUCameraSettingsModule;



@interface HUCameraCloudStorageSettingsModule : HFItemModule <HUCameraSettingsModule>

 {
    NSSet *_itemProviders;
}


@property (readonly, nonatomic) NSSet *cameraProfiles; // ivar: _cameraProfiles
@property (readonly, nonatomic) HFItemProvider *cloudStorageSectionSettingsItemProvider; // ivar: _cloudStorageSectionSettingsItemProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger displayStyle;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (readonly) Class superclass;


-(BOOL)isItemHeader:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)didSelectItem:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 cameraProfiles:(id)arg1 ;
-(id)itemProviders;
-(id)removeAllCameraRecordings;


@end


#endif