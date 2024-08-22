// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPNFCACCESSISSUERKEYRESPONSE_H
#define HAPNFCACCESSISSUERKEYRESPONSE_H

@class NSString, NSData;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPNFCAccessResponseStatusWrapper.h"

@interface HAPNFCAccessIssuerKeyResponse : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *identifier; // ivar: _identifier
@property (retain, nonatomic) HAPNFCAccessResponseStatusWrapper *statusCode; // ivar: _statusCode
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 statusCode:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif