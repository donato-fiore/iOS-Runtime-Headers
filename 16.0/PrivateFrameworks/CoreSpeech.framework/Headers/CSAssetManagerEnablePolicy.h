// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSASSETMANAGERENABLEPOLICY_H
#define CSASSETMANAGERENABLEPOLICY_H

@class CSPolicy;



@interface CSAssetManagerEnablePolicy : CSPolicy



-(BOOL)_shouldCheckNetworkAvailability;
-(id)init;
-(void)_addAssetManagerEnabledConditions;
-(void)_subscribeEventMonitors;


@end


#endif