// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWPERSONIDENTITYPROOF_H
#define SWPERSONIDENTITYPROOF_H

@class NSArray, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SWPersonIdentityProof : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSArray *inclusionHashes; // ivar: _inclusionHashes
@property (nonatomic) NSUInteger localKeyIndex; // ivar: _localKeyIndex
@property (copy, nonatomic) NSData *publicKey; // ivar: _publicKey
@property (readonly, nonatomic) NSUInteger publicKeyIndex;


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInclusionHashes:(id)arg0 ;
-(id)initWithInclusionHashes:(id)arg0 publicKey:(id)arg1 localKeyIndex:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif