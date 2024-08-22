// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTICOLOR_H
#define RTICOLOR_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTIColor : NSObject <NSCopying, NSSecureCoding>

 {
    BOOL _type;
    CGFloat _values;
    *CGColor _cgColor;
}




+(BOOL)supportsSecureCoding;
+(id)colorWithCGColor:(struct CGColor *)arg0 ;
+(id)colorWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
+(id)colorWithWhite:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(struct CGColor *)cgColor;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif