// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMFEATUREFLAGS_H
#define RMFEATUREFLAGS_H


#import <Foundation/Foundation.h>


@interface RMFeatureFlags : NSObject



+(BOOL)hasBridgeOS;
+(BOOL)isAppleInternal;
+(BOOL)isCreateAccountInSettingsEnabled;
+(BOOL)isDeviceChannelEnabled;
+(BOOL)isEnabled;
+(BOOL)isFileConduitEnabled;
+(BOOL)isHTTPConduitEnabled;


@end


#endif