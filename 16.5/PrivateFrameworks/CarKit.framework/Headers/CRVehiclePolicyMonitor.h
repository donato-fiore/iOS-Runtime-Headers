// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRVEHICLEPOLICYMONITOR_H
#define CRVEHICLEPOLICYMONITOR_H

@class NSXPCConnection, NSData;
@protocol CRCarKitMonitoringClientService, CRVehiclePolicyMonitoring;

#import <Foundation/Foundation.h>


@interface CRVehiclePolicyMonitor : NSObject <CRCarKitMonitoringClientService>



@property (weak, nonatomic) NSObject<CRVehiclePolicyMonitoring> *delegate; // ivar: _delegate
@property (nonatomic, getter=isMonitoring) BOOL monitoring; // ivar: _monitoring
@property (retain, nonatomic) NSXPCConnection *serviceConnection; // ivar: _serviceConnection
@property (retain, nonatomic) NSData *vehicleCertificateSerial; // ivar: _vehicleCertificateSerial


-(id)initWithVehicleCertificateSerial:(id)arg0 ;
-(id)monitoringConnection;
-(void)dealloc;
-(void)startMonitoring;
-(void)stopMonitoring;
-(void)willDisableCertificateSerial:(id)arg0 reply:(id)arg1 ;
-(void)willEnableCertificateSerial:(id)arg0 reply:(id)arg1 ;


@end


#endif