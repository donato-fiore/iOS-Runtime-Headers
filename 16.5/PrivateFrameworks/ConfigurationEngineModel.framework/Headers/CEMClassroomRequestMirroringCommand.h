// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMCLASSROOMREQUESTMIRRORINGCOMMAND_H
#define CEMCLASSROOMREQUESTMIRRORINGCOMMAND_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMCommandBase.h"

@interface CEMClassroomRequestMirroringCommand : CEMCommandBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadDestinationDeviceID; // ivar: _payloadDestinationDeviceID
@property (copy, nonatomic) NSString *payloadDestinationName; // ivar: _payloadDestinationName
@property (copy, nonatomic) NSString *payloadPassword; // ivar: _payloadPassword
@property (copy, nonatomic) NSNumber *payloadScanTime; // ivar: _payloadScanTime
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withDestinationName:(id)arg1 withDestinationDeviceID:(id)arg2 withScanTime:(id)arg3 withPassword:(id)arg4 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)mustBeSupervised;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;
-(int)executionLevel;


@end


#endif