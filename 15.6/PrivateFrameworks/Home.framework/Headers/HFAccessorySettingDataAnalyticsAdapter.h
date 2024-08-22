// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFACCESSORYSETTINGDATAANALYTICSADAPTER_H
#define HFACCESSORYSETTINGDATAANALYTICSADAPTER_H

@class NSString;
@protocol HFAccessorySettingAdapterDisplayArbitrating;


#import "HFAccessorySettingAdapter.h"

@interface HFAccessorySettingDataAnalyticsAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldShowSettingsEntity:(id)arg0 ;
-(id)customizeSections:(id)arg0 forEntity:(id)arg1 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 mode:(NSUInteger)arg1 ;
-(void)configureSection:(id)arg0 forEntity:(id)arg1 ;


@end


#endif