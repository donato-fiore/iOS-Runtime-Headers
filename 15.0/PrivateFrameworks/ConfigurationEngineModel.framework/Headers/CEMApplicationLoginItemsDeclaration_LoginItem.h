// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMAPPLICATIONLOGINITEMSDECLARATION_LOGINITEM_H
#define CEMAPPLICATIONLOGINITEMSDECLARATION_LOGINITEM_H

@class NSNumber, NSString;


#import "CEMPayloadBase.h"

@interface CEMApplicationLoginItemsDeclaration_LoginItem : CEMPayloadBase

@property (copy, nonatomic) NSNumber *payloadHide; // ivar: _payloadHide
@property (copy, nonatomic) NSString *payloadPath; // ivar: _payloadPath


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithPath:(id)arg0 ;
+(id)buildWithPath:(id)arg0 withHide:(id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif