// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMDEVICEHOMESCREENLAYOUTDECLARATION_ICONITEM_H
#define CEMDEVICEHOMESCREENLAYOUTDECLARATION_ICONITEM_H

@class NSString, NSArray;


#import "CEMPayloadBase.h"

@interface CEMDeviceHomeScreenLayoutDeclaration_IconItem : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadBundleID; // ivar: _payloadBundleID
@property (copy, nonatomic) NSString *payloadDisplayName; // ivar: _payloadDisplayName
@property (copy, nonatomic) NSArray *payloadPages; // ivar: _payloadPages
@property (copy, nonatomic) NSString *payloadType; // ivar: _payloadType
@property (copy, nonatomic) NSString *payloadURL; // ivar: _payloadURL


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithType:(id)arg0 ;
+(id)buildWithType:(id)arg0 withDisplayName:(id)arg1 withBundleID:(id)arg2 withPages:(id)arg3 withURL:(id)arg4 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif