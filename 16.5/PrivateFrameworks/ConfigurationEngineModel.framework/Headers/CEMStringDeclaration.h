// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMSTRINGDECLARATION_H
#define CEMSTRINGDECLARATION_H

@class NSString;
@protocol CEMRegisteredTypeProtocol;


#import "CEMAssetBase.h"
#import "CEMAssetBaseDescriptor.h"

@interface CEMStringDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadData; // ivar: _payloadData
@property (copy, nonatomic) CEMAssetBaseDescriptor *payloadDescriptor; // ivar: _payloadDescriptor
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withDescriptor:(id)arg1 withData:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg0 withDescriptor:(id)arg1 withData:(id)arg2 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif