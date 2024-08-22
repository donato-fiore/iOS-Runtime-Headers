// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKFLOATRANGE_H
#define PKFLOATRANGE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKFloatRange : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat lowerBound; // ivar: _lowerBound
@property (readonly, nonatomic) CGFloat upperBound; // ivar: _upperBound


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLowerBound:(CGFloat)arg0 upperBound:(CGFloat)arg1 ;


@end


#endif