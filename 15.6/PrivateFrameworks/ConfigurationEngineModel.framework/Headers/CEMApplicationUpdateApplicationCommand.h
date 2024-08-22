// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMAPPLICATIONUPDATEAPPLICATIONCOMMAND_H
#define CEMAPPLICATIONUPDATEAPPLICATIONCOMMAND_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMCommandBase.h"

@interface CEMApplicationUpdateApplicationCommand : CEMCommandBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadBundleIdentifier; // ivar: _payloadBundleIdentifier
@property (copy, nonatomic) NSNumber *payloadImmediate; // ivar: _payloadImmediate
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withBundleIdentifier:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withBundleIdentifier:(id)arg1 withImmediate:(id)arg2 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)mustBeSupervised;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;
-(int)executionLevel;


@end


#endif