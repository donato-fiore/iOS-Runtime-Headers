// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SMCCORETELEPHONYCLIENT_H
#define SMCCORETELEPHONYCLIENT_H

@class CoreTelephonyClient, NSString, CTXPCServiceSubscriptionContext;
@protocol CoreTelephonyClientDelegate, CoreTelephonyClientDataDelegate, SMCCoreTelephonyClientDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SMCCoreTelephonyClient : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientDataDelegate>



@property (nonatomic) BOOL cellularDataEnabled; // ivar: _cellularDataEnabled
@property (readonly, nonatomic) CoreTelephonyClient *ctClient; // ivar: _ctClient
@property (readonly, nonatomic) *__CTServerConnection ctServerConnection; // ivar: _ctServerConnection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SMCCoreTelephonyClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *preferredDataSubscriptionContext; // ivar: _preferredDataSubscriptionContext
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL roaming; // ivar: _roaming
@property (readonly) Class superclass;


-(BOOL)_getRoamingFromDataStatus:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(struct ? )cellularDataEnabled:(char *)arg0 ;
-(void)_updatePreferredDataSubscriptionContext;
-(void)activate;
-(void)activeSubscriptionsDidChange;
-(void)dataSettingsChanged:(id)arg0 ;
-(void)dataStatus:(id)arg0 dataStatusInfo:(id)arg1 ;
-(void)internetDataStatus:(id)arg0 ;
-(void)roaming:(char *)arg0 error:(*id)arg1 ;
-(void)servingNetworkChanged:(id)arg0 ;


@end


#endif