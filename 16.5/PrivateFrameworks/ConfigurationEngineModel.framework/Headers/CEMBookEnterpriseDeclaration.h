// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMBOOKENTERPRISEDECLARATION_H
#define CEMBOOKENTERPRISEDECLARATION_H

@class NSString;
@protocol CEMRegisteredTypeProtocol;


#import "CEMAssetBase.h"
#import "CEMAssetBaseDescriptor.h"
#import "CEMAssetBaseReference.h"

@interface CEMBookEnterpriseDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadAuthor; // ivar: _payloadAuthor
@property (copy, nonatomic) CEMAssetBaseDescriptor *payloadDescriptor; // ivar: _payloadDescriptor
@property (copy, nonatomic) NSString *payloadKind; // ivar: _payloadKind
@property (copy, nonatomic) CEMAssetBaseReference *payloadReference; // ivar: _payloadReference
@property (copy, nonatomic) NSString *payloadTitle; // ivar: _payloadTitle
@property (copy, nonatomic) NSString *payloadVersion; // ivar: _payloadVersion
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withDescriptor:(id)arg1 withReference:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg0 withDescriptor:(id)arg1 withReference:(id)arg2 withKind:(id)arg3 withVersion:(id)arg4 withAuthor:(id)arg5 withTitle:(id)arg6 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif