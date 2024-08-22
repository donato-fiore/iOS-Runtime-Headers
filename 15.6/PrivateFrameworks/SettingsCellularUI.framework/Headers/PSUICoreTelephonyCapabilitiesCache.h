// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUICORETELEPHONYCAPABILITIESCACHE_H
#define PSUICORETELEPHONYCAPABILITIESCACHE_H

@class Logger, CoreTelephonyClient, NSString, PSSimStatusCache;
@protocol CoreTelephonyClientCapabilitiesDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CTCapability.h"

@interface PSUICoreTelephonyCapabilitiesCache : NSObject <CoreTelephonyClientCapabilitiesDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    Logger *_logger;
}


@property (retain, nonatomic) CoreTelephonyClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PSSimStatusCache *simStatusCache; // ivar: _simStatusCache
@property (readonly) Class superclass;
@property (retain) CTCapability *volteCapability; // ivar: _volteCapability


+(id)sharedInstance;
-(BOOL)canSetCapabilityForContext:(id)arg0 cache:(id)arg1 ;
-(BOOL)canSetCapabilityVoLTE:(id)arg0 ;
-(BOOL)cannotChangeVoLTESettingCallCarrier:(id)arg0 ;
-(BOOL)capabilityEnabledForContext:(id)arg0 cache:(id)arg1 ;
-(BOOL)capabilityEnabledVoLTE:(id)arg0 ;
-(BOOL)fetchDeviceAndPlan5GSupport:(id)arg0 ;
-(BOOL)getCapabilityInfo:(id)arg0 forContext:(id)arg1 cache:(id)arg2 ;
-(BOOL)isVoLTEStillProvisioningForContext:(id)arg0 ;
-(id)getLogger;
-(id)init;
-(id)initPrivate;
-(void)clearCache;
-(void)context:(id)arg0 capabilitiesChanged:(id)arg1 ;
-(void)fetchCanSetCapabilityWithCache:(id)arg0 ;
-(void)fetchCapabilityEnabledWithCache:(id)arg0 ;
-(void)setCapabilityEnabledForContext:(id)arg0 cache:(id)arg1 enabled:(BOOL)arg2 ;
-(void)setCapabilityVoLTE:(id)arg0 enabled:(BOOL)arg1 ;
-(void)willEnterForeground;


@end


#endif