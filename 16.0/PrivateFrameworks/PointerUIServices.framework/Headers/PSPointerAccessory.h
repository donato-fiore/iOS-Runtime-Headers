// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSPOINTERACCESSORY_H
#define PSPOINTERACCESSORY_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PSPointerShape.h"

@interface PSPointerAccessory : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat angle; // ivar: _angle
@property (nonatomic) CGFloat offset; // ivar: _offset
@property (nonatomic) BOOL orientationMatchesAngle; // ivar: _orientationMatchesAngle
@property (copy, nonatomic) PSPointerShape *shape; // ivar: _shape


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif