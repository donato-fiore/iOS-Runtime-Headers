// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKBOOLEANFILTER_H
#define _HKBOOLEANFILTER_H

@class HKFilter;



@interface _HKBooleanFilter : HKFilter

@property (readonly, nonatomic) BOOL value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)falseFilter;
+(id)trueFilter;
-(BOOL)acceptsDataObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)acceptsActivitySummary:(id)arg0 ;
-(NSInteger)acceptsDataObjectWithStartTimestamp:(CGFloat)arg0 endTimestamp:(CGFloat)arg1 valueInCanonicalUnit:(CGFloat)arg2 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif