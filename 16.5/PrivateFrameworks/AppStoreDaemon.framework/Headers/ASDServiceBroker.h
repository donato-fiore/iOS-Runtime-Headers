// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDSERVICEBROKER_H
#define ASDSERVICEBROKER_H

@class NSXPCConnection, NSString;
@protocol ASDClipServiceBroker, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ASDServiceBroker : NSObject <ASDClipServiceBroker>

 {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_machServiceName;
    int _token;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultBroker;
+(id)interface;
+(id)newBrokerForMachServiceName:(id)arg0 ;
-(id)getClipServiceWithError:(*id)arg0 ;
-(id)getDiagnosticServiceWithError:(*id)arg0 ;
-(id)getFairPlayServiceWithError:(*id)arg0 ;
-(id)getIAPHistoryServiceWithError:(*id)arg0 ;
-(id)getInstallAttributionServiceWithError:(*id)arg0 ;
-(id)getInstallationServiceWithError:(*id)arg0 ;
-(id)getLibraryServiceWithError:(*id)arg0 ;
-(id)getManagedAppServiceWithError:(*id)arg0 ;
-(id)getPurchaseHistoryServiceWithError:(*id)arg0 ;
-(id)getPurchaseServiceWithError:(*id)arg0 ;
-(id)getRepairServiceWithError:(*id)arg0 ;
-(id)getStoreKitExternalNotificationServiceWithError:(*id)arg0 ;
-(id)getTestFlightFeedbackServiceWithError:(*id)arg0 ;
-(id)getUpdatesServiceWithError:(*id)arg0 ;
-(id)initWithMachServiceName:(id)arg0 ;
-(void)dealloc;
-(void)getAppMetricsServiceWithCompletionHandler:(id)arg0 ;
-(void)getAppStoreServiceWithCompletionHandler:(id)arg0 ;
-(void)getArcadeServiceWithCompletionHandler:(id)arg0 ;
-(void)getClipServiceWithCompletionHandler:(id)arg0 ;
-(void)getCrossfireServiceWithCompletionHandler:(id)arg0 ;
-(void)getDiagnosticServiceWithCompletionHandler:(id)arg0 ;
-(void)getIAPHistoryServiceWithCompletionHandler:(id)arg0 ;
-(void)getInstallAttributionServiceWithCompletionHandler:(id)arg0 ;
-(void)getInstallationServiceWithCompletionHandler:(id)arg0 ;
-(void)getLibraryServiceWithCompletionHandler:(id)arg0 ;
-(void)getManagedAppServiceWithCompletionHandler:(id)arg0 ;
-(void)getOcelotServiceWithCompletionHandler:(id)arg0 ;
-(void)getPersonalizationServiceWithCompletionHandler:(id)arg0 ;
-(void)getPurchaseHistoryServiceWithCompletionHandler:(id)arg0 ;
-(void)getPurchaseServiceWithCompletionHandler:(id)arg0 ;
-(void)getRepairServiceWithCompletionHandler:(id)arg0 ;
-(void)getRestoreServiceWithCompletionHandler:(id)arg0 ;
-(void)getSkannerServiceWithCompletionHandler:(id)arg0 ;
-(void)getTestFlightFeedbackServiceWithCompletionHandler:(id)arg0 ;
-(void)getUpdatesServiceWithCompletionHandler:(id)arg0 ;


@end


#endif