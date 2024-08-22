// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCAMERARECORDINGOPTIONSITEMMANAGER_H
#define HUCAMERARECORDINGOPTIONSITEMMANAGER_H

@class HFItemManager, NSString;
@protocol HUCameraRecordingSettingsModuleDelegate;


#import "HUCameraRecordingSettingsModule.h"

@interface HUCameraRecordingOptionsItemManager : HFItemManager <HUCameraRecordingSettingsModuleDelegate>



@property (retain, nonatomic) HUCameraRecordingSettingsModule *cameraRecordingItemModule; // ivar: _cameraRecordingItemModule
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger displayStyle; // ivar: _displayStyle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(void)cameraRecordingSettingsModule:(id)arg0 didUpdateItem:(id)arg1 ;


@end


#endif