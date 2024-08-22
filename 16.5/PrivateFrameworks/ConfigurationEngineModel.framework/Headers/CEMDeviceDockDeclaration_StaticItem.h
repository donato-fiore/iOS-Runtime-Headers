// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMDEVICEDOCKDECLARATION_STATICITEM_H
#define CEMDEVICEDOCKDECLARATION_STATICITEM_H

@class NSString;


#import "CEMPayloadBase.h"
#import "CEMDeviceDockDeclaration_StaticItemTileData.h"

@interface CEMDeviceDockDeclaration_StaticItem : CEMPayloadBase

@property (copy, nonatomic) CEMDeviceDockDeclaration_StaticItemTileData *payloadTileData; // ivar: _payloadTileData
@property (copy, nonatomic) NSString *payloadTileType; // ivar: _payloadTileType


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithTileData:(id)arg0 withTileType:(id)arg1 ;
+(id)buildWithTileData:(id)arg0 withTileType:(id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif