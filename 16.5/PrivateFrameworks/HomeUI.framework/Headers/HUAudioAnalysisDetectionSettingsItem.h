// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUAUDIOANALYSISDETECTIONSETTINGSITEM_H
#define HUAUDIOANALYSISDETECTIONSETTINGSITEM_H

@class HFItem, HMAccessory;



@interface HUAudioAnalysisDetectionSettingsItem : HFItem

@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NSUInteger audioDetectionType; // ivar: _audioDetectionType


-(id)_localizedStringFromDetectionType:(NSUInteger)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithDetectionType:(NSUInteger)arg0 accessory:(id)arg1 ;


@end


#endif