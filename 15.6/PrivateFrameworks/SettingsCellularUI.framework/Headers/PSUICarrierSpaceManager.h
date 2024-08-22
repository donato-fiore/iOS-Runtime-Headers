// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUICARRIERSPACEMANAGER_H
#define PSUICARRIERSPACEMANAGER_H

@class CTCarrierSpaceCapabilities, CTCarrierSpaceUsageInfo, CTCarrierSpacePlansInfo, CTCarrierSpaceAppsInfo, NSNumber, CTCarrierSpaceUserConsentFlowInfo, CoreTelephonyClient, CTCarrierSpaceClient, NSString;
@protocol CTCarrierSpaceClientDelegate, CoreTelephonyClientSubscriberDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PSUIAppInstallController.h"

@interface PSUICarrierSpaceManager : NSObject <CTCarrierSpaceClientDelegate, CoreTelephonyClientSubscriberDelegate>

 {
    NSObject<OS_dispatch_queue> *_carrierSpaceQueue;
    CTCarrierSpaceCapabilities *_capabilities;
    CTCarrierSpaceUsageInfo *_usageInfo;
    CTCarrierSpacePlansInfo *_plansInfo;
    CTCarrierSpaceAppsInfo *_appsInfo;
    PSUIAppInstallController *_carrierAppInstallController;
    NSNumber *_hasUserConsent;
    CTCarrierSpaceUserConsentFlowInfo *_userConsentFlowInfo;
    NSNumber *_userConsentResponse;
    *__CTServerConnection _serverConnection;
    CoreTelephonyClient *_coreTelephonyClient;
}


@property (retain, nonatomic) CTCarrierSpaceClient *carrierSpaceClient; // ivar: _carrierSpaceClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isCarrierMetricTypeValid:(int)arg0 ;
+(NSInteger)bytesFromString:(id)arg0 carrierSpaceUnits:(NSInteger)arg1 ;
+(id)getNSURLSessionConfiguration;
+(id)sharedManager;
+(int)carrierMetricTypeForString:(id)arg0 ;
-(BOOL)hasUserConsent;
-(BOOL)planChangeIsRestricted;
-(BOOL)supportsSweetgum;
-(id)appsInfo;
-(id)capabilities;
-(id)carrierAppInstallController;
-(id)descriptionForPlanMetrics:(id)arg0 ;
-(id)init;
-(id)localizedDataStringFromBytes:(NSUInteger)arg0 ;
-(id)planMetrics;
-(id)plansInfo;
-(id)subscribedDomesticPlanOptions;
-(id)subscribedPlanOptions;
-(id)usageInfo;
-(id)userConsentFlowInfo;
-(void)appsDidChange;
-(void)capabilitiesDidChange:(id)arg0 ;
-(void)dealloc;
-(void)plansDidChange;
-(void)refresh;
-(void)refreshAndReload;
-(void)reset;
-(void)setUserConsent:(BOOL)arg0 ;
-(void)simStatusDidChange:(id)arg0 status:(id)arg1 ;
-(void)usageDidChange;
-(void)userConsentAcknowledged:(BOOL)arg0 ;
-(void)userConsentFlowInfoDidChange;


@end


#endif