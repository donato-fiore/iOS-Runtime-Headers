// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTDEVICE_H
#define PKPAYMENTDEVICE_H

@class CLLocationManager, NSTimer, NSMutableArray, NSString;
@protocol CLLocationManagerDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKSecureElement.h"
#import "PKPaymentDeviceConfigurationData.h"

@interface PKPaymentDevice : NSObject <CLLocationManagerDelegate>

 {
    CLLocationManager *_locationManager;
    NSTimer *_timer;
    NSObject<OS_dispatch_source> *_locationFixTimeout;
    PKSecureElement *_secureElement;
    PKPaymentDeviceConfigurationData *_configurationData;
    NSMutableArray *_metdataFetchTasks;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL skipLocationCheck; // ivar: _skipLocationCheck
@property (readonly) Class superclass;


+(id)clientHardwarePlatformInfoHTTPHeader;
+(id)clientInfoHTTPHeader;
-(BOOL)hasRegistrationRegionMap;
-(id)configurationData;
-(id)init;
-(id)initWithCallbackQueue:(id)arg0 ;
-(id)primarySecureElementIdentifier;
-(id)trustedDeviceEnrollmentInfo;
-(void)SEPParingInformationWithCompletion:(id)arg0 ;
-(void)_executeDeviceMetadataFetchTasksCompletionHandlers;
-(void)_finishLocationFixWithLocation:(id)arg0 ;
-(void)_populateDeviceMetadata:(id)arg0 withFields:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)configurationDataWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)deleteApplicationWithAID:(id)arg0 ;
-(void)generateTransactionKeyWithParameters:(id)arg0 withCompletion:(id)arg1 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)paymentDeviceMetadataFields:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)provisioningDataIncludingDeviceMetadata:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg0 withCompletion:(id)arg1 ;
-(void)queueConnectionToTrustedServiceManagerWithCompletion:(id)arg0 ;
-(void)registrationDataWithAuthToken:(id)arg0 completionHandler:(id)arg1 ;
-(void)rewrapDataWithCompletionHandler:(id)arg0 ;
-(void)setRegistrationRegionMap:(id)arg0 primaryRegionTopic:(id)arg1 ;
-(void)signData:(id)arg0 signatureEntanglementMode:(NSUInteger)arg1 withCompletionHandler:(id)arg2 ;
-(void)signatureForAuthToken:(id)arg0 completion:(id)arg1 ;


@end


#endif