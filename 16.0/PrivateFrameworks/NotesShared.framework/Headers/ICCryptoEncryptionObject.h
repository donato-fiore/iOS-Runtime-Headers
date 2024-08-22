// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICCRYPTOENCRYPTIONOBJECT_H
#define ICCRYPTOENCRYPTIONOBJECT_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICEncryptionMetadata.h"

@interface ICCryptoEncryptionObject : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *encryptedData; // ivar: _encryptedData
@property (readonly, nonatomic) ICEncryptionMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSData *wrappedEncryptionKey; // ivar: _wrappedEncryptionKey


+(BOOL)supportsSecureCoding;
+(id)deserialize:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetadata:(id)arg0 wrappedEncryptionKey:(id)arg1 encryptedData:(id)arg2 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif