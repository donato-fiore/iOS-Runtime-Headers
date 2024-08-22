// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMPROTOCOLDECLARATIONITEMSRESPONSE_H
#define RMPROTOCOLDECLARATIONITEMSRESPONSE_H

@class RMModelPayloadBase, NSString;


#import "RMProtocolDeclarationItemsResponse_Declarations.h"

@interface RMProtocolDeclarationItemsResponse : RMModelPayloadBase

@property (copy, nonatomic) RMProtocolDeclarationItemsResponse_Declarations *responseDeclarations; // ivar: _responseDeclarations
@property (copy, nonatomic) NSString *responseDeclarationsToken; // ivar: _responseDeclarationsToken


+(id)requestWithDeclarations:(id)arg0 declarationsToken:(id)arg1 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif