// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SESPRIVACYKEY_H
#define SESPRIVACYKEY_H

@class NSDate, NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SESPrivacyKey : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (readonly, nonatomic) NSString *keyIdentifier; // ivar: _keyIdentifier
@property (readonly, nonatomic) NSData *publicKey; // ivar: _publicKey


+(BOOL)supportsSecureCoding;
+(id)withGroupIdentifier:(id)arg0 keyIdentifier:(id)arg1 publicKey:(id)arg2 creationDate:(id)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif