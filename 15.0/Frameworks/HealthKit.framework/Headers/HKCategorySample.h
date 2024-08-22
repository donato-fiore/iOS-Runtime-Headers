// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCATEGORYSAMPLE_H
#define HKCATEGORYSAMPLE_H



#import "HKSample.h"
#import "HKCategoryType.h"

@interface HKCategorySample : HKSample {
    NSInteger _value;
}


@property (readonly) HKCategoryType *categoryType;
@property (readonly) NSInteger value;


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_categorySamplesSplittingDurationWithType:(id)arg0 value:(NSInteger)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 ;
+(id)categorySampleWithType:(id)arg0 value:(NSInteger)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
+(id)categorySampleWithType:(id)arg0 value:(NSInteger)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 ;
+(id)categorySampleWithType:(id)arg0 value:(NSInteger)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(NSInteger)hk_integerValue;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif