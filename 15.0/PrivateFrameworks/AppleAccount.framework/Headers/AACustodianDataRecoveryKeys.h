// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AACUSTODIANDATARECOVERYKEYS_H
#define AACUSTODIANDATARECOVERYKEYS_H

@class NSUUID, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AACustodianDataRecoveryKeys : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSUUID *custodianUUID; // ivar: _custodianUUID
@property (copy, nonatomic) NSData *wrappedRKC; // ivar: _wrappedRKC
@property (copy, nonatomic) NSData *wrappingKey; // ivar: _wrappingKey


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWrappedRKC:(id)arg0 wrappingKey:(id)arg1 custodianUUID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif