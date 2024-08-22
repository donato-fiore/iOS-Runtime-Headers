// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCTELEPHONYINTERFACE_H
#define VCTELEPHONYINTERFACE_H

@class CoreTelephonyClient, CTXPCServiceSubscriptionContext, NSString;
@protocol CoreTelephonyClientDataDelegate, OS_dispatch_queue, VCTelephonyInterfaceDelegate;

#import <Foundation/Foundation.h>


@interface VCTelephonyInterface : NSObject <CoreTelephonyClientDataDelegate>

 {
    id *_delegate;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    *__CTServerConnection _connection;
    CoreTelephonyClient *_coreTelephonyClient;
    NSInteger _subscriptionSlot;
    NSInteger _ctSubscriptionSlot;
    CTXPCServiceSubscriptionContext *_ctSubscriptionContext;
}


@property (readonly, copy) NSString *debugDescription;
@property NSObject<VCTelephonyInterfaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)ctSubscriptionSlotForSubscriptionSlot:(NSInteger)arg0 ;
+(NSInteger)telephonyLinkDirectionForCtDirection:(int)arg0 ;
+(int)ctDirectionForTelephonyLinkDirection:(NSInteger)arg0 ;
-(BOOL)registerForNotifications;
-(id)init;
-(id)initWithTelephonySubscriptionSlot:(NSInteger)arg0 ;
-(id)translateVocoderTypeToCoreAudioType:(id)arg0 ;
-(void)anbrActivationState:(id)arg0 enabled:(BOOL)arg1 ;
-(void)anbrBitrateRecommendation:(id)arg0 bitrate:(id)arg1 direction:(int)arg2 ;
-(void)dealloc;
-(void)getAnbrActivationStateWithCompletionHandler:(id)arg0 ;
-(void)handleTelephonyNotification:(id)arg0 withInfo:(id)arg1 ;
-(void)handleVocoderNotificationWithInfo:(id)arg0 ;
-(void)notifyCodecModeChangeEventToCT:(struct _VCAudioCodecModeChangeEvent )arg0 ;
-(void)queryAnbrBitrateRecommendation:(unsigned int)arg0 direction:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)unregisterForNotifications;


@end


#endif