// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMPASSCODECLEARPASSCODECOMMAND_H
#define CEMPASSCODECLEARPASSCODECOMMAND_H

@class NSString, NSData;
@protocol CEMRegisteredTypeProtocol;


#import "CEMCommandBase.h"

@interface CEMPasscodeClearPasscodeCommand : CEMCommandBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *payloadUnlockToken; // ivar: _payloadUnlockToken
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withUnlockToken:(id)arg1 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)mustBeSupervised;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;
-(int)executionLevel;


@end


#endif