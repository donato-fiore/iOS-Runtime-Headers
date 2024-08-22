// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCAMERARECORDINGSETTINGSMODULE_H
#define HUCAMERARECORDINGSETTINGSMODULE_H

@class NSArray, NSSet, NSString, UIViewController;
@protocol HUCameraSettingsModule, HUCameraRecordingSettingsModuleDelegate;


#import "HUExpandableItemContainerModule.h"
#import "HULocationDeviceManager.h"
#import "HUCameraRecordingOptionsItem.h"
#import "HUCameraPresenceRecordingSettingsModule.h"

@interface HUCameraRecordingSettingsModule : HUExpandableItemContainerModule <HUCameraSettingsModule>



@property (readonly, nonatomic) NSUInteger awayAccessModeSetting;
@property (readonly, nonatomic) NSArray *cameraPresenceItems; // ivar: _cameraPresenceItems
@property (readonly, nonatomic) NSSet *cameraProfiles; // ivar: _cameraProfiles
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUCameraRecordingSettingsModuleDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger displayStyle; // ivar: _displayStyle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *itemProviders; // ivar: _itemProviders
@property (retain, nonatomic) HULocationDeviceManager *locationDeviceManager; // ivar: _locationDeviceManager
@property (retain, nonatomic) NSString *locationDeviceName; // ivar: _locationDeviceName
@property (readonly, nonatomic) NSString *longestCameraPresenceItemTitle; // ivar: _longestCameraPresenceItemTitle
@property (readonly, nonatomic) NSString *longestCameraUsageOptionItemTitle; // ivar: _longestCameraUsageOptionItemTitle
@property (readonly, nonatomic) NSArray *presenceModules;
@property (readonly, nonatomic) NSUInteger presentAccessModeSetting;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (readonly, nonatomic) HUCameraRecordingOptionsItem *recordingOptionsItem; // ivar: _recordingOptionsItem
@property (readonly) Class superclass;
@property (retain, nonatomic) HUCameraPresenceRecordingSettingsModule *whenAwaySectionModule; // ivar: _whenAwaySectionModule
@property (retain, nonatomic) HUCameraPresenceRecordingSettingsModule *whenHomeSectionModule; // ivar: _whenHomeSectionModule


-(BOOL)isItemHeader:(id)arg0 ;
-(id)_attributedFooterTitle;
-(id)_expandingSectionModuleForPresenceType:(NSUInteger)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)didSelectItem:(id)arg0 ;
-(id)expandableModules;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 cameraProfiles:(id)arg1 displayStyle:(NSUInteger)arg2 ;
-(void)_buildItemProviders;


@end


#endif