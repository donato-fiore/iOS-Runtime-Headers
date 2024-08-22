// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMSYSTEMALLOWEDMEDIADECLARATION_MEDIAITEMS_H
#define CEMSYSTEMALLOWEDMEDIADECLARATION_MEDIAITEMS_H

@class NSString, NSArray;


#import "CEMPayloadBase.h"

@interface CEMSystemAllowedMediaDeclaration_MediaItems : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadAllMedia; // ivar: _payloadAllMedia
@property (copy, nonatomic) NSArray *payloadBd; // ivar: _payloadBd
@property (copy, nonatomic) NSArray *payloadBlankbd; // ivar: _payloadBlankbd
@property (copy, nonatomic) NSArray *payloadBlankcd; // ivar: _payloadBlankcd
@property (copy, nonatomic) NSArray *payloadBlankdvd; // ivar: _payloadBlankdvd
@property (copy, nonatomic) NSArray *payloadCd; // ivar: _payloadCd
@property (copy, nonatomic) NSArray *payloadDiskImage; // ivar: _payloadDiskImage
@property (copy, nonatomic) NSArray *payloadDvd; // ivar: _payloadDvd
@property (copy, nonatomic) NSArray *payloadDvdram; // ivar: _payloadDvdram
@property (copy, nonatomic) NSArray *payloadHarddiskExternal; // ivar: _payloadHarddiskExternal
@property (copy, nonatomic) NSArray *payloadHarddiskInternal; // ivar: _payloadHarddiskInternal
@property (copy, nonatomic) NSArray *payloadNetworkdisk; // ivar: _payloadNetworkdisk


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithAllMedia:(id)arg0 withCd:(id)arg1 withDvd:(id)arg2 withBd:(id)arg3 withBlankcd:(id)arg4 withBlankdvd:(id)arg5 withBlankbd:(id)arg6 withDvdram:(id)arg7 withDiskImage:(id)arg8 withHarddiskInternal:(id)arg9 withHarddiskExternal:(id)arg10 withNetworkdisk:(id)arg11 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif