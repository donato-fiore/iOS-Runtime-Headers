// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INHOMEATTRIBUTERANGE_H
#define INHOMEATTRIBUTERANGE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INHomeAttributeRange : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat lowerValue; // ivar: _lowerValue
@property (readonly, nonatomic) CGFloat upperValue; // ivar: _upperValue


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRange:(CGFloat)arg0 upperValue:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif