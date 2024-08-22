// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSHASHGENERATOR_H
#define WBSHASHGENERATOR_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSHashGenerator : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *key; // ivar: _key
@property (readonly, copy, nonatomic) NSData *keyID; // ivar: _keyID


+(BOOL)supportsSecureCoding;
-(id)_createEncryptionKeyData;
-(id)_createEncryptionKeyIDDataUsingKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)generateHashStringWithComponents:(id)arg0 ;
-(id)generateHashWithComponents:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 keyID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif