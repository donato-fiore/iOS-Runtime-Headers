// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKCLOUDUTILITIES_H
#define _DKCLOUDUTILITIES_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_DKThrottledActivity.h"

@interface _DKCloudUtilities : NSObject {
    NSObject<OS_dispatch_queue> *_fetchQueue;
    _DKThrottledActivity *_activityThrottler;
    BOOL _supportsDeviceToDeviceEncryption;
    BOOL _isSingleDevice;
}


@property (readonly, nonatomic) BOOL isCloudSyncAvailable;
@property (readonly, nonatomic) BOOL isSingleDevice;
@property (readonly, nonatomic) BOOL isSiriCloudSyncEnabled;
@property (readonly, nonatomic) BOOL supportsDeviceToDeviceEncryption;


+(BOOL)isCloudKitEnabled;
+(BOOL)isSyncAvailableAndEnabled;
+(BOOL)isSyncAvailableAndEnabledWithVerboseLogging:(BOOL)arg0 ;
+(BOOL)isUnitTesting;
+(id)containerIdentifier;
+(id)sharedInstance;
+(void)setCloudKitEnabled:(BOOL)arg0 ;
+(void)setUnitTesting:(BOOL)arg0 ;
-(id)init;
-(void)_accountDidChange:(id)arg0 ;
-(void)dealloc;
-(void)deleteRemoteStateWithReply:(id)arg0 ;
-(void)setCloudSyncAvailable:(BOOL)arg0 ;


@end


#endif