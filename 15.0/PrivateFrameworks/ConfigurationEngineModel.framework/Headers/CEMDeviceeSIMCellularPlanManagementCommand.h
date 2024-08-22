// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMDEVICEESIMCELLULARPLANMANAGEMENTCOMMAND_H
#define CEMDEVICEESIMCELLULARPLANMANAGEMENTCOMMAND_H

@class NSString;
@protocol CEMRegisteredTypeProtocol;


#import "CEMCommandBase.h"

@interface CEMDeviceeSIMCellularPlanManagementCommand : CEMCommandBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadESIMServerURL; // ivar: _payloadESIMServerURL
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withESIMServerURL:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withESIMServerURL:(id)arg1 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)mustBeSupervised;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;
-(int)executionLevel;


@end


#endif