// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHRANGE_H
#define SHRANGE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SHRange : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) CGFloat lowerBound; // ivar: _lowerBound
@property (readonly, nonatomic) CGFloat upperBound; // ivar: _upperBound


+(BOOL)supportsSecureCoding;
+(id)rangeWithLowerBound:(CGFloat)arg0 upperBound:(CGFloat)arg1 ;
-(BOOL)contains:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLowerBound:(CGFloat)arg0 upperBound:(CGFloat)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg0 ;
-(id)initWithStart:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(id)serializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif