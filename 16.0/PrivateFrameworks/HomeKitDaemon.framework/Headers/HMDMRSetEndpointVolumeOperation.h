// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMRSETENDPOINTVOLUMEOPERATION_H
#define HMDMRSETENDPOINTVOLUMEOPERATION_H

@class HMFOperation, NSArray, NSString, NSError, NSNumber;
@protocol HMFLogging, HMFObject, HMDMPCAssistantDiscovery, HMDMRSetEndpointVolumeOperationExternalObjectInterface;



@interface HMDMRSetEndpointVolumeOperation : HMFOperation <HMFLogging, HMFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<HMDMPCAssistantDiscovery> *discovery; // ivar: _discovery
@property (readonly) NSObject<HMDMRSetEndpointVolumeOperationExternalObjectInterface> *externalObjectInterface; // ivar: _externalObjectInterface
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSError *partialExecutionError; // ivar: _partialExecutionError
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *routeIDs; // ivar: _routeIDs
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *volume; // ivar: _volume


+(id)logCategory;
-(BOOL)cancelOnSetup;
-(id)connectToEndpoint:(id)arg0 connection:(id)arg1 ;
-(id)discoverRemoteControlEndpointsForUIDs:(id)arg0 ;
-(id)getVolumeCapabilitiesForEndpoint:(id)arg0 outputDeviceUID:(id)arg1 ;
-(id)initWithRouteIDs:(id)arg0 volume:(id)arg1 ;
-(id)initWithRouteIDs:(id)arg0 volume:(id)arg1 externalObjectInterface:(id)arg2 ;
-(void)generateOverallResultAndFinishWithDeviceStatuses:(id)arg0 ;
-(void)main;


@end


#endif