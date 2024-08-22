// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMPASSCODESETFIRMWAREPASSWORDCOMMAND_H
#define CEMPASSCODESETFIRMWAREPASSWORDCOMMAND_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMCommandBase.h"

@interface CEMPasscodeSetFirmwarePasswordCommand : CEMCommandBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowOroms; // ivar: _payloadAllowOroms
@property (copy, nonatomic) NSString *payloadCurrentPassword; // ivar: _payloadCurrentPassword
@property (copy, nonatomic) NSString *payloadNewPassword; // ivar: _payloadNewPassword
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withNewPassword:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withCurrentPassword:(id)arg1 withNewPassword:(id)arg2 withAllowOroms:(id)arg3 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)mustBeSupervised;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;
-(int)executionLevel;


@end


#endif