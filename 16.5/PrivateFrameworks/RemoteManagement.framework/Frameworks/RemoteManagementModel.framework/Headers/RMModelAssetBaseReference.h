// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMMODELASSETBASEREFERENCE_H
#define RMMODELASSETBASEREFERENCE_H

@class NSString, NSNumber;


#import "RMModelPayloadBase.h"

@interface RMModelAssetBaseReference : RMModelPayloadBase

@property (copy, nonatomic) NSString *payloadContentType; // ivar: _payloadContentType
@property (copy, nonatomic) NSString *payloadDataURL; // ivar: _payloadDataURL
@property (copy, nonatomic) NSString *payloadHashSHA256; // ivar: _payloadHashSHA256
@property (copy, nonatomic) NSNumber *payloadSize; // ivar: _payloadSize


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithDataURL:(id)arg0 contentType:(id)arg1 size:(id)arg2 hashSHA256:(id)arg3 ;
+(id)buildWithDataURL:(id)arg0 contentType:(id)arg1 size:(id)arg2 hashSHA256:(id)arg3 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif