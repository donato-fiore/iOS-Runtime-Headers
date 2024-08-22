// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCAMERARECORDINGOPTIONSMODULE_H
#define HUCAMERARECORDINGOPTIONSMODULE_H

@class HFItemModule, NSSet, NSString, UIViewController, HFStaticItem, HFStaticItemProvider;
@protocol HUCameraSettingsModule;


#import "HUCameraCloudStorageSettingsModule.h"
#import "HUCameraSmartDetectionSettingsModule.h"

@interface HUCameraRecordingOptionsModule : HFItemModule <HUCameraSettingsModule>



@property (readonly, nonatomic) NSSet *cameraProfiles; // ivar: _cameraProfiles
@property (readonly, nonatomic) HUCameraCloudStorageSettingsModule *cloudStorageModule; // ivar: _cloudStorageModule
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger displayStyle;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *itemProviders; // ivar: _itemProviders
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) HFStaticItem *recordAudioItem; // ivar: _recordAudioItem
@property (retain, nonatomic) HFStaticItemProvider *recordAudioItemProvider; // ivar: _recordAudioItemProvider
@property (readonly, nonatomic) HUCameraSmartDetectionSettingsModule *smartDetectionModule; // ivar: _smartDetectionModule
@property (readonly) Class superclass;


-(BOOL)isItemHeader:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)didSelectItem:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 cameraProfiles:(id)arg1 ;
-(void)_buildItemProviders;
-(void)updateRecordAudioValue:(BOOL)arg0 ;


@end


#endif