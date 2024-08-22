// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMULTICAMERARECORDINGOPTIONSITEMMANAGER_H
#define HUMULTICAMERARECORDINGOPTIONSITEMMANAGER_H

@class HFItemManager, NSMutableArray, NSString;
@protocol HUCameraRecordingSettingsModuleDelegate;



@interface HUMultiCameraRecordingOptionsItemManager : HFItemManager <HUCameraRecordingSettingsModuleDelegate>



@property (retain, nonatomic) NSMutableArray *cameraRecordingItemModules; // ivar: _cameraRecordingItemModules
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(void)cameraRecordingSettingsModule:(id)arg0 didUpdateItem:(id)arg1 ;


@end


#endif