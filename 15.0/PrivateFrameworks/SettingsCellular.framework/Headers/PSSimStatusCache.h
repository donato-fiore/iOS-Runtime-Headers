// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSSIMSTATUSCACHE_H
#define PSSIMSTATUSCACHE_H

@class CoreTelephonyClient, NSString, NSMutableDictionary, CTXPCServiceSubscriptionInfo;
@protocol CoreTelephonyClientDelegate, CoreTelephonyClientSubscriberDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "Logger.h"

@interface PSSimStatusCache : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSubscriberDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    Logger *_logger;
}


@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // ivar: _coreTelephonyClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAnySimPresent; // ivar: _isAnySimPresent
@property (readonly, nonatomic) BOOL isDualSimCapable;
@property (readonly, nonatomic) BOOL isSIMMissing;
@property (retain) NSMutableDictionary *simStatusDict; // ivar: _simStatusDict
@property (copy) CTXPCServiceSubscriptionInfo *subscriptionInfo; // ivar: _subscriptionInfo
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)activeDataSubscriptionContext;
-(id)getLogger;
-(id)init;
-(id)initPrivate;
-(id)simStatus:(id)arg0 ;
-(id)subscriptionContexts;
-(id)subscriptionsInUse;
-(void)fetchSimStatus;
-(void)fetchSubscriptionContexts;
-(void)simStatusDidChange:(id)arg0 status:(id)arg1 ;
-(void)updateIsAnySimPresent;
-(void)willEnterForeground;


@end


#endif