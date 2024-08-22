// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCCARRIERBUNDLEHELPER_H
#define PCCARRIERBUNDLEHELPER_H

@class CoreTelephonyClient, CTXPCServiceSubscriptionContext, NSHashTable, CTBundle, NSDictionary, NSString;
@protocol CoreTelephonyClientDataDelegate, CoreTelephonyClientCarrierBundleDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PCCarrierBundleHelper : NSObject <CoreTelephonyClientDataDelegate, CoreTelephonyClientCarrierBundleDelegate>

 {
    CoreTelephonyClient *_ctClient;
    NSObject<OS_dispatch_queue> *_queue;
    CTXPCServiceSubscriptionContext *_currentDataContext;
    NSHashTable *_delegates;
    CTBundle *_bundle;
}


@property (copy, nonatomic) NSDictionary *cachedPushSettings; // ivar: _cachedPushSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)helper;
-(BOOL)boolValueFromPushBundleForKey:(id)arg0 error:(*id)arg1 ;
-(id)copyValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)copyValueFromPushBundleForKey:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)_processCarrierBundleChange:(id)arg0 ;
-(void)_updateCurrentDataSimContext:(id)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)currentDataSimChanged:(id)arg0 ;
-(void)operatorBundleChange:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif