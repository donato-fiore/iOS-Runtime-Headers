// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIAWAREDATASESSION_H
#define WIFIAWAREDATASESSION_H

@class NSNumber, NSString, NSData;
@protocol WiFiAwareDatapathXPCDelegate, WiFiP2PXPCConnectionDelegate, WiFiAwareDataSessionDelegate;

#import <Foundation/Foundation.h>

#import "WiFiP2PXPCConnection.h"
#import "WiFiMACAddress.h"
#import "WiFiAwareDiscoveryResult.h"
#import "WiFiAwareInternetSharingConfiguration.h"
#import "WiFiAwarePublishDatapathServiceSpecificInfo.h"

@interface WiFiAwareDataSession : NSObject <WiFiAwareDatapathXPCDelegate, WiFiP2PXPCConnectionDelegate>

 {
    WiFiP2PXPCConnection *_xpcConnection;
    NSNumber *_datapathID;
    WiFiMACAddress *_initiatorDataAddress;
    NSInteger _internetSharingPolicy;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WiFiAwareDataSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WiFiAwareDiscoveryResult *discoveryResult; // ivar: _discoveryResult
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) WiFiAwareInternetSharingConfiguration *internetSharingConfiguration; // ivar: _internetSharingConfiguration
@property (readonly, nonatomic) NSInteger internetSharingPolicy;
@property (readonly, nonatomic) WiFiMACAddress *localDataAddress;
@property (readonly, nonatomic) unsigned int localInterfaceIndex; // ivar: _localInterfaceIndex
@property (readonly, nonatomic) NSString *passphrase; // ivar: _passphrase
@property (readonly, nonatomic) NSData *pmk; // ivar: _pmk
@property (readonly, nonatomic) NSData *pmkID; // ivar: _pmkID
@property (readonly, nonatomic) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo; // ivar: _serviceSpecificInfo
@property (readonly, nonatomic) NSInteger serviceType; // ivar: _serviceType
@property (readonly) Class superclass;


-(id)exportedInterface;
-(id)exportedObject;
-(id)initWithDiscoveryResult:(id)arg0 serviceType:(NSInteger)arg1 serviceSpecificInfo:(id)arg2 ;
-(id)initWithDiscoveryResult:(id)arg0 serviceType:(NSInteger)arg1 serviceSpecificInfo:(id)arg2 passphrase:(id)arg3 ;
-(id)initWithDiscoveryResult:(id)arg0 serviceType:(NSInteger)arg1 serviceSpecificInfo:(id)arg2 passphrase:(id)arg3 pmk:(id)arg4 pmkID:(id)arg5 ;
-(id)initWithDiscoveryResult:(id)arg0 serviceType:(NSInteger)arg1 serviceSpecificInfo:(id)arg2 pmk:(id)arg3 ;
-(id)initWithDiscoveryResult:(id)arg0 serviceType:(NSInteger)arg1 serviceSpecificInfo:(id)arg2 pmk:(id)arg3 pmkID:(id)arg4 ;
-(id)remoteObjectInterface;
-(void)datapathConfirmedForPeerDataAddress:(id)arg0 serviceSpecificInfo:(id)arg1 ;
-(void)datapathFailedToStartWithError:(NSInteger)arg0 ;
-(void)datapathReceivedControlDataAddress:(id)arg0 serviceSpecificInfo:(id)arg1 onInterfaceIndex:(unsigned int)arg2 ;
-(void)datapathStartedWithInstanceID:(unsigned char)arg0 initiatorDataAddress:(id)arg1 localInterfaceIndex:(unsigned int)arg2 ;
-(void)datapathTerminatedWithReason:(NSInteger)arg0 ;
-(void)datapathUpdatedInternetSharingPolicy:(NSInteger)arg0 ;
-(void)datapathUpdatedServiceSpecificInfo:(id)arg0 ;
-(void)generateStatisticsReportWithCompletionHandler:(id)arg0 ;
-(void)handleError:(NSInteger)arg0 ;
-(void)reportIssue:(id)arg0 ;
-(void)resetState;
-(void)start;
-(void)startConnectionUsingProxy:(id)arg0 completionHandler:(id)arg1 ;
-(void)stop;
-(void)updateLinkStatus:(NSInteger)arg0 ;


@end


#endif