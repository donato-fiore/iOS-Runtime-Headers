// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMDEVICEDOCKDECLARATION_STATICITEMTILEDATA_H
#define CEMDEVICEDOCKDECLARATION_STATICITEMTILEDATA_H

@class NSNumber, NSString;


#import "CEMPayloadBase.h"
#import "CEMAnyPayload.h"

@interface CEMDeviceDockDeclaration_StaticItemTileData : CEMPayloadBase

@property (copy, nonatomic) CEMAnyPayload *payloadFileData; // ivar: _payloadFileData
@property (copy, nonatomic) NSNumber *payloadFileType; // ivar: _payloadFileType
@property (copy, nonatomic) NSString *payloadLabel; // ivar: _payloadLabel
@property (copy, nonatomic) NSString *payloadUrl; // ivar: _payloadUrl


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithLabel:(id)arg0 withFileType:(id)arg1 ;
+(id)buildWithLabel:(id)arg0 withUrl:(id)arg1 withFileType:(id)arg2 withFileData:(id)arg3 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif