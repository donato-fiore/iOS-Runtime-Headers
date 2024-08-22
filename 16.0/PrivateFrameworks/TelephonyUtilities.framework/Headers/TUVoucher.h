// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUVOUCHER_H
#define TUVOUCHER_H

@class NSData, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TUHandle.h"

@interface TUVoucher : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSData *encryptedData; // ivar: _encryptedData
@property (readonly, nonatomic) TUHandle *handle; // ivar: _handle
@property (readonly, copy, nonatomic) NSString *tokenPrefixedURI; // ivar: _tokenPrefixedURI
@property (readonly, copy, nonatomic) NSData *unsafeData; // ivar: _unsafeData


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToVoucher:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHandle:(id)arg0 tokenPrefixedURI:(id)arg1 data:(id)arg2 encryptedData:(id)arg3 ;
-(id)initWithVoucher:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif