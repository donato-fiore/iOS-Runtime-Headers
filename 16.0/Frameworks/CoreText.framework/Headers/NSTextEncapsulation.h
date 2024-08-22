// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSTEXTENCAPSULATION_H
#define NSTEXTENCAPSULATION_H

@class UIColor;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSTextEncapsulation : NSObject <NSCopying, NSSecureCoding>



@property (copy) UIColor *color; // ivar: color
@property CGFloat lineWeight; // ivar: lineWeight
@property CGFloat minimumWidth; // ivar: minimumWidth
@property NSUInteger platterSize; // ivar: platterSize
@property NSUInteger scale; // ivar: scale
@property NSUInteger shape; // ivar: shape
@property NSUInteger style; // ivar: style


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithShape:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif