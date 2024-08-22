// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPNFCACCESSREADERKEYREQUEST_H
#define HAPNFCACCESSREADERKEYREQUEST_H

@class NSString, NSData;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPNFCAccessKeyTypeWrapper.h"

@interface HAPNFCAccessReaderKeyRequest : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *identifier; // ivar: _identifier
@property (retain, nonatomic) NSData *key; // ivar: _key
@property (retain, nonatomic) NSData *readerIdentifier; // ivar: _readerIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) HAPNFCAccessKeyTypeWrapper *type; // ivar: _type


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithType:(id)arg0 key:(id)arg1 readerIdentifier:(id)arg2 identifier:(id)arg3 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif