// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMMANAGEMENTUPDATEENROLLMENTCOMMAND_H
#define CEMMANAGEMENTUPDATEENROLLMENTCOMMAND_H

@class NSString, NSData;
@protocol CEMRegisteredTypeProtocol;


#import "CEMCommandBase.h"

@interface CEMManagementUpdateEnrollmentCommand : CEMCommandBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *payloadProfile; // ivar: _payloadProfile
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withProfile:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withProfile:(id)arg1 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)mustBeSupervised;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;
-(int)executionLevel;


@end


#endif