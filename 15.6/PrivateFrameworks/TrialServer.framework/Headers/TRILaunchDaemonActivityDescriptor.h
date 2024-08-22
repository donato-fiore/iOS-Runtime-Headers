// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRILAUNCHDAEMONACTIVITYDESCRIPTOR_H
#define TRILAUNCHDAEMONACTIVITYDESCRIPTOR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRILaunchDaemonActivityDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger supportedTaskCapabilities; // ivar: _supportedTaskCapabilities


+(id)cellularDescriptor;
+(id)clientHotfixCellularAllowBatteryDescriptor;
+(id)clientHotfixWifiDescriptor;
+(id)clientTriggeredCellularDescriptor;
+(id)clientTriggeredWifiDescriptor;
+(id)inexpensiveNetworkingDescriptor;
+(id)launchDaemonActivityDescriptorWithName:(id)arg0 supportedTaskCapabilities:(NSUInteger)arg1 ;
+(id)postUpgradeDescriptor;
+(id)postUpgradeDescriptorRequireInexpensiveNetworking;
+(id)recurrentRollbackDescriptor;
+(id)retryFailuresDescriptor;
+(id)setupAssistantFetchDescriptor;
+(id)taskQueueDescriptor;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLaunchDaemonActivityDescriptor:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementName:(id)arg0 ;
-(id)copyWithReplacementSupportedTaskCapabilities:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 supportedTaskCapabilities:(NSUInteger)arg1 ;


@end


#endif