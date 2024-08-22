// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFHKGROUPINGINDEXPATHTRANSFORMER_H
#define WFHKGROUPINGINDEXPATHTRANSFORMER_H

@class NSValueTransformer, NSCalendar;



@interface WFHKGroupingIndexPathTransformer : NSValueTransformer

@property (retain, nonatomic) NSCalendar *conversionCalendar; // ivar: _conversionCalendar
@property (nonatomic) NSInteger groupingOption; // ivar: _groupingOption


+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)init;
-(id)initWithGroupingOption:(NSInteger)arg0 ;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif