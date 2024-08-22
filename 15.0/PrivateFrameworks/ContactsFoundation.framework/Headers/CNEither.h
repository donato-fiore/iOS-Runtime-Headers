// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNEITHER_H
#define CNEITHER_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CNPair.h"

@interface CNEither : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL isLeft;
@property (readonly, nonatomic) BOOL isRight;
@property (readonly, nonatomic) id *left;
@property (retain, nonatomic) CNPair *pair; // ivar: _pair
@property (readonly, nonatomic) id *right;


+(BOOL)supportsSecureCoding;
+(id)eitherWithBlock:(id)arg0 ;
+(id)eitherWithBool:(BOOL)arg0 error:(id)arg1 ;
+(id)eitherWithLeft:(id)arg0 ;
+(id)eitherWithLeft:(id)arg0 right:(id)arg1 ;
+(id)eitherWithRight:(id)arg0 ;
+(id)firstLeftInLazyChain:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLeft:(id)arg0 right:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif