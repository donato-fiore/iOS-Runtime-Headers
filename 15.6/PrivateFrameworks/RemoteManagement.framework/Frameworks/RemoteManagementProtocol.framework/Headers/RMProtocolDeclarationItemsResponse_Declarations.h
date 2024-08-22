// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMPROTOCOLDECLARATIONITEMSRESPONSE_DECLARATIONS_H
#define RMPROTOCOLDECLARATIONITEMSRESPONSE_DECLARATIONS_H

@class RMModelPayloadBase, NSArray;



@interface RMProtocolDeclarationItemsResponse_Declarations : RMModelPayloadBase

@property (copy, nonatomic) NSArray *responseActivations; // ivar: _responseActivations
@property (copy, nonatomic) NSArray *responseAssets; // ivar: _responseAssets
@property (copy, nonatomic) NSArray *responseConfigurations; // ivar: _responseConfigurations
@property (copy, nonatomic) NSArray *responseManagement; // ivar: _responseManagement


+(id)allowedResponseKeys;
+(id)buildRequiredOnlyWithActivations:(id)arg0 configurations:(id)arg1 assets:(id)arg2 management:(id)arg3 ;
+(id)buildWithActivations:(id)arg0 configurations:(id)arg1 assets:(id)arg2 management:(id)arg3 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif