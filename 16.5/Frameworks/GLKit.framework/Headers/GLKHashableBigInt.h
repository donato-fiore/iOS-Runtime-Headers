// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GLKHASHABLEBIGINT_H
#define GLKHASHABLEBIGINT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface GLKHashableBigInt : NSObject <NSCopying>

 {
    GLKBigInt_s _bigInt;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBigInt:(struct GLKBigInt_s *)arg0 ;


@end


#endif