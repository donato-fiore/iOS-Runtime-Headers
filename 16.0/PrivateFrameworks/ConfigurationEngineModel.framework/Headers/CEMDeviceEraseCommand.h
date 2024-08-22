// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMDEVICEERASECOMMAND_H
#define CEMDEVICEERASECOMMAND_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMCommandBase.h"

@interface CEMDeviceEraseCommand : CEMCommandBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadDisallowProximitySetup; // ivar: _payloadDisallowProximitySetup
@property (copy, nonatomic) NSString *payloadPIN; // ivar: _payloadPIN
@property (copy, nonatomic) NSNumber *payloadPreserveDataPlan; // ivar: _payloadPreserveDataPlan
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withPIN:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withPreserveDataPlan:(id)arg1 withDisallowProximitySetup:(id)arg2 withPIN:(id)arg3 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)mustBeSupervised;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;
-(int)executionLevel;


@end


#endif