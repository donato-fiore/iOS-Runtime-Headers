// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDATTACHMENT_H
#define HDATTACHMENT_H

@class NSDate, NSString, NSUUID, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HDEncryptedArchiveSymmetricKey.h"

@interface HDAttachment : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy, nonatomic) HDEncryptedArchiveSymmetricKey *encryptionKey; // ivar: _encryptionKey
@property (readonly, copy, nonatomic) NSString *fileHash; // ivar: _fileHash
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger size; // ivar: _size
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 type:(id)arg2 hash:(id)arg3 size:(NSUInteger)arg4 creationDate:(id)arg5 metadata:(id)arg6 encryptionKey:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif