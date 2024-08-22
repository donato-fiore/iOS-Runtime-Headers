// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMPREDICATEICLOUDACCOUNT_H
#define CEMPREDICATEICLOUDACCOUNT_H

@class NSString;
@protocol CEMRegisteredTypeProtocol;


#import "CEMPredicateBase.h"

@interface CEMPredicateiCloudAccount : CEMPredicateBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadDSID; // ivar: _payloadDSID
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithDSID:(id)arg0 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif