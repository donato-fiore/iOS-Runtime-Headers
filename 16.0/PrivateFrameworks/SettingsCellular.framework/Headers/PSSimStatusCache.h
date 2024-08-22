// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSSIMSTATUSCACHE_H
#define PSSIMSTATUSCACHE_H

@class CoreTelephonyClient, CTXPCServiceSubscriptionContext, NSString, NSMutableDictionary, CTXPCServiceSubscriptionInfo;
@protocol CoreTelephonyClientDelegate, CoreTelephonyClientSubscriberDelegate;

#import <Foundation/Foundation.h>


@interface PSSimStatusCache : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSubscriberDelegate>



@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // ivar: _coreTelephonyClient
@property (retain) CTXPCServiceSubscriptionContext *currentDataSubscriptionContext; // ivar: _currentDataSubscriptionContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAnySimPresent; // ivar: _isAnySimPresent
@property (readonly, nonatomic) BOOL isDualSimCapable;
@property (readonly, nonatomic) BOOL isSIMMissing;
@property (retain) NSMutableDictionary *simHardwareTypeDict; // ivar: _simHardwareTypeDict
@property (retain) NSMutableDictionary *simStatusDict; // ivar: _simStatusDict
@property (copy) CTXPCServiceSubscriptionInfo *subscriptionInfo; // ivar: _subscriptionInfo
@property (readonly) Class superclass;
@property (retain) CTXPCServiceSubscriptionContext *userDefaultVoiceSubscriptionContext; // ivar: _userDefaultVoiceSubscriptionContext


+(id)sharedInstance;
-(BOOL)isSlotActiveDataSlot:(NSInteger)arg0 ;
-(NSInteger)simHardwareInfo:(id)arg0 ;
-(id)activeDataSubscriptionContext;
-(id)defaultVoiceSubscriptionContext;
-(id)getLogger;
-(id)init;
-(id)initPrivate;
-(id)initWithCoreTelephonyClient:(id)arg0 ;
-(id)simStatus:(id)arg0 ;
-(id)subscriptionContexts;
-(id)subscriptionsInUse;
-(void)clearSubscriptionContextCache;
-(void)currentDataSimChanged:(id)arg0 ;
-(void)fetchActiveDataSubscriptionContextIfNeeded;
-(void)fetchDefaultVoiceSubscriptionContextIfNeeded;
-(void)fetchSimHardwareInfo;
-(void)fetchSimStatus;
-(void)fetchSubscriptionContexts;
-(void)preferredDataSimChanged:(id)arg0 ;
-(void)simStatusDidChange:(id)arg0 status:(id)arg1 ;
-(void)updateIsAnySimPresent;
-(void)willEnterForeground;


@end


#endif