// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2ENCRYPTIONPROTOCOL_H
#define NEIKEV2ENCRYPTIONPROTOCOL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NEIKEv2EncryptionProtocol : NSObject <NSCopying>



@property (readonly) unsigned int blockLength;
@property (readonly) unsigned int icvLength;
@property BOOL is256Bit; // ivar: _is256Bit
@property (readonly) BOOL isAuthenticated;
@property (readonly) BOOL isGCM;
@property (readonly) BOOL isIIV;
@property (readonly) unsigned int ivLength;
@property (readonly) unsigned int keyLength;
@property NSUInteger wireType; // ivar: _wireType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithEncryptionType:(NSUInteger)arg0 ;
-(id)initWithEncryptionWireType:(NSUInteger)arg0 is256Bit:(BOOL)arg1 ;
-(unsigned int)ccAlgorithm;


@end


#endif