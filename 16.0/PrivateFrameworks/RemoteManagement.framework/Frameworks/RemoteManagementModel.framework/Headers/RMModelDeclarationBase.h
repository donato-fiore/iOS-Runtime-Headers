// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMMODELDECLARATIONBASE_H
#define RMMODELDECLARATIONBASE_H

@class NSString;


#import "RMModelPayloadBase.h"
#import "RMModelAnyPayload.h"

@interface RMModelDeclarationBase : RMModelPayloadBase

@property (copy, nonatomic) NSString *declarationIdentifier; // ivar: _declarationIdentifier
@property (copy, nonatomic) RMModelAnyPayload *declarationPayload; // ivar: _declarationPayload
@property (copy, nonatomic) NSString *declarationServerToken; // ivar: _declarationServerToken
@property (copy, nonatomic) NSString *declarationType; // ivar: _declarationType


+(id)declarationClassType;
+(id)load:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithType:(short)arg0 ;
-(id)serializeWithType:(short)arg0 ;
-(void)updateServerToken;


@end


#endif