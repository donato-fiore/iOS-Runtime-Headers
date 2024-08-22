// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOCKREMOTEGLOBALSETTINGSPROVIDER_H
#define MOCKREMOTEGLOBALSETTINGSPROVIDER_H

@class NSString;
@protocol BLTRemoteGlobalSettingsProvider, BLTRemoteGlobalSettingsSyncServerLocalEndpoint;

#import <Foundation/Foundation.h>


@interface MockRemoteGlobalSettingsProvider : NSObject <BLTRemoteGlobalSettingsProvider, BLTRemoteGlobalSettingsSyncServerLocalEndpoint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger effectiveGlobalScheduledDeliverySetting; // ivar: _effectiveGlobalScheduledDeliverySetting
@property (nonatomic) NSInteger globalScheduledDeliverySetting; // ivar: _globalScheduledDeliverySetting
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif