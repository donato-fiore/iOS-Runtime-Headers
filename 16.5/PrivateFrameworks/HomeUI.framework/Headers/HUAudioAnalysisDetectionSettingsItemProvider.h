// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUAUDIOANALYSISDETECTIONSETTINGSITEMPROVIDER_H
#define HUAUDIOANALYSISDETECTIONSETTINGSITEMPROVIDER_H

@class HFItemProvider, HMAccessory, NSMutableSet;



@interface HUAudioAnalysisDetectionSettingsItemProvider : HFItemProvider

@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NSMutableSet *items; // ivar: _items


-(id)init;
-(id)initWithAccessory:(id)arg0 ;
-(id)reloadItems;


@end


#endif