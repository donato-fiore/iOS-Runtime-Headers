// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFCIPHERTEXT_H
#define _SFCIPHERTEXT_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _SFCiphertext : NSObject <NSCopying, NSSecureCoding>

 {
    id *_ciphertextInternal;
}


@property (readonly) NSData *ciphertext;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCiphertext:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif