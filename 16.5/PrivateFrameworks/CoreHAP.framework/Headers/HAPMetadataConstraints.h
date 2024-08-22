// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPMETADATACONSTRAINTS_H
#define HAPMETADATACONSTRAINTS_H

@class HMFObject, NSNumber, NSArray;
@protocol NSCopying, NSSecureCoding;



@interface HAPMetadataConstraints : HMFObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *maxLength; // ivar: _maxLength
@property (retain, nonatomic) NSNumber *maximumValue; // ivar: _maximumValue
@property (retain, nonatomic) NSNumber *minLength; // ivar: _minLength
@property (retain, nonatomic) NSNumber *minimumValue; // ivar: _minimumValue
@property (retain, nonatomic) NSNumber *stepValue; // ivar: _stepValue
@property (copy, nonatomic) NSArray *validValues; // ivar: _validValues


+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToMetadataConstraints:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif