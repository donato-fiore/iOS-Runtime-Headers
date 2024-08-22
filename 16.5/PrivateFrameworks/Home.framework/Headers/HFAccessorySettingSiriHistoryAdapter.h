// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFACCESSORYSETTINGSIRIHISTORYADAPTER_H
#define HFACCESSORYSETTINGSIRIHISTORYADAPTER_H

@class NSString;
@protocol HFAccessorySettingAdapterDisplayArbitrating;


#import "HFAccessorySettingAdapter.h"

@interface HFAccessorySettingSiriHistoryAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldShowSettingsEntity:(id)arg0 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 keyPaths:(id)arg1 mode:(NSUInteger)arg2 updateHandler:(id)arg3 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 mode:(NSUInteger)arg1 ;


@end


#endif