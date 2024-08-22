// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKENCRYPTEDDATA_H
#define CKENCRYPTEDDATA_H

@class NSData, NSString;
@protocol CKEncryptable, CKRecordValue, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKEncryptedData : NSObject <CKEncryptable, CKRecordValue, NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSData *encryptedData; // ivar: _encryptedData
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL needsDecryption;
@property (readonly, nonatomic) BOOL needsEncryption;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithEncryptedData:(id)arg0 ;
-(id)initWithValue:(id)arg0 ;
-(id)value;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif