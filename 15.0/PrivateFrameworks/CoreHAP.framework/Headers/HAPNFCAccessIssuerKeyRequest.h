// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPNFCACCESSISSUERKEYREQUEST_H
#define HAPNFCACCESSISSUERKEYREQUEST_H

@class NSString, NSData;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPNFCAccessKeyTypeWrapper.h"

@interface HAPNFCAccessIssuerKeyRequest : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *identifier; // ivar: _identifier
@property (retain, nonatomic) NSData *key; // ivar: _key
@property (readonly) Class superclass;
@property (retain, nonatomic) HAPNFCAccessKeyTypeWrapper *type; // ivar: _type


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithType:(id)arg0 key:(id)arg1 identifier:(id)arg2 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif