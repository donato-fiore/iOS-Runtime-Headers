// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCAMERASMARTDETECTIONSETTINGSITEMPROVIDER_H
#define HUCAMERASMARTDETECTIONSETTINGSITEMPROVIDER_H

@class HFItemProvider, NSSet, NSMutableSet;



@interface HUCameraSmartDetectionSettingsItemProvider : HFItemProvider

@property (readonly, copy, nonatomic) NSSet *cameraProfiles; // ivar: _cameraProfiles
@property (readonly, nonatomic) NSUInteger settingsContext; // ivar: _settingsContext
@property (readonly, nonatomic) NSMutableSet *smartDetectionSettingsItems; // ivar: _smartDetectionSettingsItems


-(BOOL)_homeSupportsPackageDetection;
-(id)init;
-(id)initWithCameraProfiles:(id)arg0 settingsContext:(NSUInteger)arg1 ;
-(id)items;
-(id)reloadItems;


@end


#endif