// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUDOORBELLCHIMEDEVICESITEMMANAGER_H
#define HUDOORBELLCHIMEDEVICESITEMMANAGER_H

@class HFItemManager, NSString;
@protocol HFMediaAccessoryCommonSettingsDelegate;



@interface HUDoorbellChimeDevicesItemManager : HFItemManager <HFMediaAccessoryCommonSettingsDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)enableDoorbellChime:(BOOL)arg0 forItem:(id)arg1 ;
-(void)mediaProfileContainer:(id)arg0 didUpdateSettingKeypath:(id)arg1 value:(id)arg2 ;


@end


#endif