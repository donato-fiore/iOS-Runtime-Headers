// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUICORETELEPHONYCARRIERBUNDLECACHE_H
#define PSUICORETELEPHONYCARRIERBUNDLECACHE_H

@class NSMutableDictionary, CoreTelephonyClient, NSString, PSSimStatusCache;
@protocol CoreTelephonyClientCarrierBundleDelegate;

#import <Foundation/Foundation.h>


@interface PSUICoreTelephonyCarrierBundleCache : NSObject <CoreTelephonyClientCarrierBundleDelegate>



@property (retain) NSMutableDictionary *carrierBundleVersionDict; // ivar: _carrierBundleVersionDict
@property (retain) NSMutableDictionary *carrierMmsInfoUrlDict; // ivar: _carrierMmsInfoUrlDict
@property (retain) NSMutableDictionary *carrierNameDict; // ivar: _carrierNameDict
@property (retain) NSMutableDictionary *carrierServicesAccountUrlDict; // ivar: _carrierServicesAccountUrlDict
@property (retain) NSMutableDictionary *carrierServicesDict; // ivar: _carrierServicesDict
@property (retain) NSMutableDictionary *carrierServicesWebViewAccountUrlDict; // ivar: _carrierServicesWebViewAccountUrlDict
@property (retain, nonatomic) CoreTelephonyClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableDictionary *is5GSAEnabledByDefaultDict; // ivar: _is5GSAEnabledByDefaultDict
@property (retain) NSMutableDictionary *show5GWarningUnsupportedCarrierDict; // ivar: _show5GWarningUnsupportedCarrierDict
@property (retain) NSMutableDictionary *showServiceCodes; // ivar: _showServiceCodes
@property (retain) NSMutableDictionary *showVoNRWarningUnsupportedCarrierDict; // ivar: _showVoNRWarningUnsupportedCarrierDict
@property (retain) NSMutableDictionary *showVolteWarningUnsupportedCarrierDict; // ivar: _showVolteWarningUnsupportedCarrierDict
@property (retain, nonatomic) PSSimStatusCache *simCache; // ivar: _simCache
@property (readonly) Class superclass;
@property (retain) NSMutableDictionary *volteCustomerCarePhoneNumberDict; // ivar: _volteCustomerCarePhoneNumberDict
@property (retain) NSMutableDictionary *volteCustomerCareWebsiteDict; // ivar: _volteCustomerCareWebsiteDict


+(id)sharedInstance;
-(BOOL)is5GSAEnabledByDefault:(id)arg0 ;
-(BOOL)show5GWarningUnsupportedCarrier:(id)arg0 ;
-(BOOL)showServiceCodes:(id)arg0 ;
-(BOOL)showVoNRWarningUnsupportedCarrier:(id)arg0 ;
-(BOOL)showVolteWarningUnsupportedCarrier:(id)arg0 ;
-(id)activeDataCarrierName;
-(id)carrierBundleVersion:(id)arg0 ;
-(id)carrierName:(id)arg0 ;
-(id)carrierServices:(id)arg0 ;
-(id)carrierServicesAccountUrl:(id)arg0 ;
-(id)carrierServicesMyAccountUrlTitle:(id)arg0 ;
-(id)carrierServicesWebViewAccountUrl:(id)arg0 ;
-(id)fetchCarrierBundleValue:(id)arg0 ;
-(id)fetchCarrierBundleValue:(id)arg0 context:(id)arg1 ;
-(id)fetchCarrierBundleValueAsString:(id)arg0 ;
-(id)fetchCarrierBundleValueForActiveDataPlan:(id)arg0 ;
-(id)fetchCarrierBundleValueForDefaultVoicePlan:(id)arg0 ;
-(id)getLogger;
-(id)init;
-(id)initPrivate;
-(id)initWithCoreTelephonyClient:(id)arg0 simStatusCache:(id)arg1 ;
-(id)mmsInfoTitle:(id)arg0 ;
-(id)mmsInfoUrl:(id)arg0 ;
-(id)volteCustomerCarePhoneNumber:(id)arg0 ;
-(id)volteCustomerCareWebsite:(id)arg0 ;
-(void)_clearCache;
-(void)carrierBundleChange:(id)arg0 ;
-(void)fetchCarrierBundleVersion;
-(void)fetchCarrierMmsInfoUrl;
-(void)fetchCarrierName;
-(void)fetchCarrierServices;
-(void)fetchCarrierServicesAccountUrl;
-(void)fetchCarrierServicesWebViewAccountUrl;
-(void)fetchIs5GSAEnabledByDefault;
-(void)fetchShow5GWarningUnsupportedCarrier;
-(void)fetchShowServiceCodes;
-(void)fetchShowVoNRWarningUnsupportedCarrier;
-(void)fetchShowVolteWarningUnsupportedCarrier;
-(void)fetchVolteCustomerCarePhoneNumber;
-(void)fetchVolteCustomerCareWebsite;
-(void)willEnterForeground;


@end


#endif