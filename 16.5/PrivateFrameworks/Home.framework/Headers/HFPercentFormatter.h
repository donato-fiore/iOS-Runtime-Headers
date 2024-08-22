// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFPERCENTFORMATTER_H
#define HFPERCENTFORMATTER_H

@class NSNumberFormatter, NSString, NSNumber;
@protocol NSCopying, HFUnitFormatter;



@interface HFPercentFormatter : NSNumberFormatter <NSCopying, HFUnitFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *maximumValue; // ivar: _maximumValue
@property (copy, nonatomic) NSNumber *minimumValue; // ivar: _minimumValue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *unitDescription;


+(id)_percentageFromValue:(id)arg0 forMinimumValue:(id)arg1 maximumValue:(id)arg2 ;
+(id)_valueFromPercentage:(id)arg0 forMinimumValue:(id)arg1 maximumValue:(id)arg2 ;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 range:(struct _NSRange *)arg2 error:(*id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithMinimumValue:(id)arg0 maximumValue:(id)arg1 ;
-(id)stringForNormalizedObjectValue:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 withUnit:(BOOL)arg1 ;
-(id)stringForRelativePercentValue:(id)arg0 ;


@end


#endif