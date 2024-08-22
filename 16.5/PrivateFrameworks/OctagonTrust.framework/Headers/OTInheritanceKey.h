// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OTINHERITANCEKEY_H
#define OTINHERITANCEKEY_H

@class NSData, NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface OTInheritanceKey : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *claimTokenData; // ivar: _claimTokenData
@property (readonly, nonatomic) NSString *claimTokenString; // ivar: _claimTokenString
@property (readonly, nonatomic) NSData *recoveryKeyData; // ivar: _recoveryKeyData
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) NSData *wrappedKeyData; // ivar: _wrappedKeyData
@property (readonly, nonatomic) NSString *wrappedKeyString; // ivar: _wrappedKeyString
@property (readonly, nonatomic) NSData *wrappingKeyData; // ivar: _wrappingKeyData
@property (readonly, nonatomic) NSString *wrappingKeyString; // ivar: _wrappingKeyString


+(BOOL)supportsSecureCoding;
+(id)base32:(char *)arg0 len:(NSUInteger)arg1 ;
+(id)parseBase32:(id)arg0 checksumSize:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)printableWithData:(id)arg0 checksumSize:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)unbase32:(char *)arg0 len:(NSUInteger)arg1 ;
-(BOOL)generateWrappingWithError:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToOTInheritanceKey:(id)arg0 ;
-(BOOL)isRecoveryKeyEqual:(id)arg0 ;
-(BOOL)unwrapWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 error:(*id)arg1 ;
-(id)initWithWrappedKeyData:(id)arg0 wrappingKeyData:(id)arg1 uuid:(id)arg2 error:(*id)arg3 ;
-(id)initWithWrappedKeyData:(id)arg0 wrappingKeyString:(id)arg1 uuid:(id)arg2 error:(*id)arg3 ;
-(id)initWithWrappedKeyString:(id)arg0 wrappingKeyData:(id)arg1 uuid:(id)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif