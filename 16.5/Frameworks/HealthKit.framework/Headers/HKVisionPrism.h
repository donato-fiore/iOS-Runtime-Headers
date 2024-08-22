// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKVISIONPRISM_H
#define HKVISIONPRISM_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKQuantity.h"

@interface HKVisionPrism : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) HKQuantity *amount; // ivar: _amount
@property (readonly, copy, nonatomic) HKQuantity *angle; // ivar: _angle
@property (readonly, nonatomic) NSInteger eye; // ivar: _eye
@property (readonly, copy, nonatomic) HKQuantity *horizontalAmount; // ivar: _horizontalAmount
@property (readonly, nonatomic) NSInteger horizontalBase; // ivar: _horizontalBase
@property (readonly, copy, nonatomic) HKQuantity *verticalAmount; // ivar: _verticalAmount
@property (readonly, nonatomic) NSInteger verticalBase; // ivar: _verticalBase


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAmount:(id)arg0 angle:(id)arg1 eye:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVerticalAmount:(id)arg0 verticalBase:(NSInteger)arg1 horizontalAmount:(id)arg2 horizontalBase:(NSInteger)arg3 eye:(NSInteger)arg4 ;
-(void)_setPolarValues;
-(void)_setRectangularValues;
-(void)_validatePolar;
-(void)_validateRectangular;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif