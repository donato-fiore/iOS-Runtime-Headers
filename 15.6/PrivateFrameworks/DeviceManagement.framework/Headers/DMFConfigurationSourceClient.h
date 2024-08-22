// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFCONFIGURATIONSOURCECLIENT_H
#define DMFCONFIGURATIONSOURCECLIENT_H

@class NSString, NSXPCConnection, NSXPCListener, CATOperationQueue;
@protocol NSXPCListenerDelegate, NSXPCConnectionDelegate, DMFConfigurationSourceClientInterface, DMFConfigurationSourceClientDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DMFReportingRequirements.h"
#import "DMFConnection.h"

@interface DMFConfigurationSourceClient : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate, DMFConfigurationSourceClientInterface>

 {
    DMFReportingRequirements *_reportingRequirements;
}


@property (copy, nonatomic) NSString *configurationSourceName; // ivar: _configurationSourceName
@property (retain, nonatomic) DMFConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DMFConfigurationSourceClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCConnection *incomingConnection; // ivar: _incomingConnection
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (copy, nonatomic) NSString *machServiceName; // ivar: _machServiceName
@property (retain, nonatomic) CATOperationQueue *operationQueue; // ivar: _operationQueue
@property (copy, nonatomic) NSString *organizationIdentifier; // ivar: _organizationIdentifier
@property (retain, nonatomic) NSObject<OS_dispatch_source> *registerConfigurationSource; // ivar: _registerConfigurationSource
@property (copy, nonatomic) DMFReportingRequirements *reportingRequirements;
@property (retain, nonatomic) NSObject *reportingRequirementsLock; // ivar: _reportingRequirementsLock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


+(id)activeRestrictionsURL;
+(id)setOfActiveRestrictionUUIDs;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)initWithConnection:(id)arg0 organizationIdentifier:(id)arg1 displayName:(id)arg2 localMachServiceName:(id)arg3 ;
-(id)machService;
-(id)name;
-(void)assetResolutionOperationDidFinish:(id)arg0 completion:(id)arg1 ;
-(void)configurationEngineRequestedAsset:(id)arg0 completion:(id)arg1 ;
-(void)configurationEventsDidChange:(id)arg0 completion:(id)arg1 ;
-(void)configurationStatusDidChange:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)enqueueOperationToReportEvents:(id)arg0 completion:(id)arg1 ;
-(void)enqueueOperationToReportStatusChange:(id)arg0 completion:(id)arg1 ;
-(void)enqueueOperationToResolveAsset:(id)arg0 completion:(id)arg1 ;
-(void)eventsReportingOperationDidFinish:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)probe:(id)arg0 ;
-(void)registrationOperationDidFinish:(id)arg0 ;
-(void)resume;
-(void)statusReportingOperationDidFinish:(id)arg0 completion:(id)arg1 ;


@end


#endif