// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFACCESSORYSETTINGMUSICADAPTER_H
#define HFACCESSORYSETTINGMUSICADAPTER_H

@class NSString;
@protocol HFAccessorySettingAdapterDisplayArbitrating;


#import "HFAccessorySettingAdapter.h"

@interface HFAccessorySettingMusicAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)areAllAccessoriesLoggedIntoSameAccount:(id)arg0 ;
+(BOOL)areAllAccessoriesLoggedOut:(id)arg0 ;
-(BOOL)shouldShowSettingsEntity:(id)arg0 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 keyPaths:(id)arg1 mode:(NSUInteger)arg2 updateHandler:(id)arg3 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 keyPaths:(id)arg1 updateHandler:(id)arg2 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 mode:(NSUInteger)arg1 ;


@end


#endif