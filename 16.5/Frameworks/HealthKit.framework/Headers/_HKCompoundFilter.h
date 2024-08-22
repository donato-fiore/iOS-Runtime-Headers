// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKCOMPOUNDFILTER_H
#define _HKCOMPOUNDFILTER_H

@class HKFilter, NSArray;



@interface _HKCompoundFilter : HKFilter {
    NSUInteger _subfilterCount;
}


@property (readonly, nonatomic) NSUInteger compoundPredicateType; // ivar: _compoundPredicateType
@property (readonly, copy, nonatomic) NSArray *subfilters; // ivar: _subfilters


+(BOOL)supportsSecureCoding;
+(id)andFilterWithSubfilters:(id)arg0 ;
+(id)compoundFilterWithFilter:(id)arg0 otherFilter:(id)arg1 ;
+(id)notFilterWithSubfilter:(id)arg0 ;
+(id)orFilterWithSubfilters:(id)arg0 ;
-(BOOL)acceptsDataObject:(id)arg0 ;
-(BOOL)acceptsWorkoutActivity:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)acceptsActivitySummary:(id)arg0 ;
-(NSInteger)acceptsDataObjectWithStartTimestamp:(CGFloat)arg0 endTimestamp:(CGFloat)arg1 valueInCanonicalUnit:(CGFloat)arg2 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 subfilters:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif