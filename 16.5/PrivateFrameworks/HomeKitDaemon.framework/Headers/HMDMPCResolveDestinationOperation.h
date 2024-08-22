// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMPCRESOLVEDESTINATIONOPERATION_H
#define HMDMPCRESOLVEDESTINATIONOPERATION_H

@class HMFOperation, NSArray, NSString, MPCAssistantMutableRemoteControlDestination;
@protocol HMFLogging, HMFObject, HMDMPCAssistantRemoteControlDestinationFactory;



@interface HMDMPCResolveDestinationOperation : HMFOperation <HMFLogging, HMFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL forceSingleGroup; // ivar: _forceSingleGroup
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *hashedRouteIDs; // ivar: _hashedRouteIDs
@property (readonly, nonatomic) NSInteger mediaApplicationDestination; // ivar: _mediaApplicationDestination
@property (readonly, copy, nonatomic) NSString *mediaApplicationIdentifier; // ivar: _mediaApplicationIdentifier
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (retain) NSObject<HMDMPCAssistantRemoteControlDestinationFactory> *remoteControlDestinationFactory; // ivar: _remoteControlDestinationFactory
@property (copy) id *resolveDestinationCompletionBlock; // ivar: _resolveDestinationCompletionBlock
@property (retain) MPCAssistantMutableRemoteControlDestination *resolvedDestination; // ivar: _resolvedDestination
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithHashedRouteIDs:(id)arg0 mediaApplicationDestination:(NSInteger)arg1 mediaApplicationIdentifier:(id)arg2 forceSingleGroup:(BOOL)arg3 completion:(id)arg4 ;
// -(id)initWithHashedRouteIDs:(id)arg0 mediaApplicationDestination:(NSInteger)arg1 mediaApplicationIdentifier:(id)arg2 forceSingleGroup:(BOOL)arg3 completion:(id)arg4 remoteControlDestinationFactory:(unk)arg5  ;
-(void)main;
-(void)setCompletionBlock:(id)arg0 ;


@end


#endif