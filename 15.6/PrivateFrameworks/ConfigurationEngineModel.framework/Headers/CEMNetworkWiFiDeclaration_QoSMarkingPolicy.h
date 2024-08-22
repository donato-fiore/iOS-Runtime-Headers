// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMNETWORKWIFIDECLARATION_QOSMARKINGPOLICY_H
#define CEMNETWORKWIFIDECLARATION_QOSMARKINGPOLICY_H

@class NSNumber, NSArray;


#import "CEMPayloadBase.h"

@interface CEMNetworkWiFiDeclaration_QoSMarkingPolicy : CEMPayloadBase

@property (copy, nonatomic) NSNumber *payloadQoSMarkingAppleAudioVideoCalls; // ivar: _payloadQoSMarkingAppleAudioVideoCalls
@property (copy, nonatomic) NSNumber *payloadQoSMarkingEnabled; // ivar: _payloadQoSMarkingEnabled
@property (copy, nonatomic) NSArray *payloadQoSMarkingWhitelistedAppIdentifiers; // ivar: _payloadQoSMarkingWhitelistedAppIdentifiers


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithQoSMarkingWhitelistedAppIdentifiers:(id)arg0 withQoSMarkingAppleAudioVideoCalls:(id)arg1 withQoSMarkingEnabled:(id)arg2 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif