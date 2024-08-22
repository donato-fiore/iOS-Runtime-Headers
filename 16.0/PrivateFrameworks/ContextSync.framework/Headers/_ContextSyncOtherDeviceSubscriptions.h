// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CONTEXTSYNCOTHERDEVICESUBSCRIPTIONS_H
#define _CONTEXTSYNCOTHERDEVICESUBSCRIPTIONS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _ContextSyncOtherDeviceSubscriptions : NSObject

@property (retain, nonatomic) NSMutableDictionary *deviceToDSLSubscriptions; // ivar: _deviceToDSLSubscriptions


+(id)deviceToDSLSubscription;
+(id)subscriptionWithDevice:(id)arg0 forWakeSubscription:(id)arg1 ;
-(BOOL)addWake:(BOOL)arg0 forIdentifier:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)hasWakingIdentifierForDevice:(id)arg0 ;
-(BOOL)isIdentifierWaking:(id)arg0 forDevice:(id)arg1 ;
-(BOOL)removeAllDSLsForDevice:(id)arg0 ;
-(BOOL)removeIdentifier:(id)arg0 forDevice:(id)arg1 ;
-(id)lastChangeDateForIdentifier:(id)arg0 forDevice:(id)arg1 ;
-(id)subscribedDevices;
-(id)subscriptionsOnDevice:(id)arg0 ;
-(id)wakeStateForIdentifier:(id)arg0 forDevice:(id)arg1 ;


@end


#endif