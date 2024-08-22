// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPMATTERCREDENTIAL_H
#define HAPMATTERCREDENTIAL_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPDeviceCredentialKey.h"
#import "HAPIssuerKey.h"
#import "HAPReaderKey.h"

@interface HAPMatterCredential : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HAPDeviceCredentialKey *deviceCredentialKey; // ivar: _deviceCredentialKey
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPIssuerKey *issuerKey; // ivar: _issuerKey
@property (retain, nonatomic) HAPReaderKey *readerKey; // ivar: _readerKey
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithIssuerKey:(id)arg0 readerKey:(id)arg1 deviceCredentialKey:(id)arg2 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif