// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCAMERASMARTDETECTIONSETTINGSITEM_H
#define HUCAMERASMARTDETECTIONSETTINGSITEM_H

@class HFItem, NSSet, HFCameraSignificantEventConfiguration;



@interface HUCameraSmartDetectionSettingsItem : HFItem

@property (readonly, copy, nonatomic) NSSet *cameraProfiles; // ivar: _cameraProfiles
@property (readonly, nonatomic) NSUInteger settingsContext; // ivar: _settingsContext
@property (readonly, copy, nonatomic) HFCameraSignificantEventConfiguration *significantEventConfiguration; // ivar: _significantEventConfiguration


-(BOOL)_isHiddenForCurrentsignificantEventConfiguration:(id)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithSignificantEventConfiguration:(id)arg0 cameraProfiles:(id)arg1 settingsContext:(NSUInteger)arg2 ;


@end


#endif