// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMPROTOCOLDECLARATIONITEMSRESPONSE_DECLARATIONITEM_H
#define RMPROTOCOLDECLARATIONITEMSRESPONSE_DECLARATIONITEM_H

@class RMModelPayloadBase, NSString;



@interface RMProtocolDeclarationItemsResponse_DeclarationItem : RMModelPayloadBase

@property (copy, nonatomic) NSString *responseIdentifier; // ivar: _responseIdentifier
@property (copy, nonatomic) NSString *responseServerToken; // ivar: _responseServerToken


+(id)allowedResponseKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 serverToken:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 serverToken:(id)arg1 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif