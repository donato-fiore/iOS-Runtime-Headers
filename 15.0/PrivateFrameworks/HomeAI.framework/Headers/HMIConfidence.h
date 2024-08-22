// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMICONFIDENCE_H
#define HMICONFIDENCE_H

@class HMFObject, NSArray;
@protocol NSSecureCoding;



@interface HMIConfidence : HMFObject <NSSecureCoding>



@property (readonly) NSInteger level;
@property (readonly) NSArray *levelThresholds; // ivar: _levelThresholds
@property (readonly) CGFloat value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(CGFloat)arg0 levelThresholds:(id)arg1 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif