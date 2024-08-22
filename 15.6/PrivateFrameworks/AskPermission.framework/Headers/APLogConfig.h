// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APLOGCONFIG_H
#define APLOGCONFIG_H

@class NSString;
@protocol NSCopying, NSMutableCopying, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface APLogConfig : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSObject<OS_os_log> *OSLogObject;
@property (retain, nonatomic) NSObject<OS_os_log> *backingOSLogObject; // ivar: _backingOSLogObject
@property (copy, nonatomic) NSString *category; // ivar: _category
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyAccessQueue; // ivar: _propertyAccessQueue
@property (copy, nonatomic) NSString *subsystem; // ivar: _subsystem


+(id)_createLogConfigWithBaseConfig:(id)arg0 subystem:(id)arg1 category:(id)arg2 ;
+(id)_createLogConfigWithSubsystem:(id)arg0 category:(id)arg1 ;
+(id)sharedConfig;
+(id)sharedDaemonConfig;
+(id)sharedExtensionConfig;
+(id)sharedFrameworkConfig;
+(id)sharedPluginConfig;
+(id)sharedSettingsConfig;
+(id)sharedUIServiceConfig;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif