// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCEWARNING_H
#define TSCEWARNING_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface TSCEWarning : NSObject

@property (nonatomic) BOOL ignored; // ivar: _ignored
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata


+(BOOL)setHasVisibleWarnings:(id)arg0 ;
+(void)reportAutomaticUnitConversionWarningInContext:(struct TSCEWarningReportingContext *)arg0 ;
+(void)reportBoolToNumberConversionWarningInContext:(struct TSCEWarningReportingContext *)arg0 ;
+(void)reportComparisonWarningInContext:(struct TSCEWarningReportingContext *)arg0 leftType:(char)arg1 rightType:(char)arg2 ;
+(void)reportDayOutOfRangeWarningInContext:(struct TSCEWarningReportingContext *)arg0 ;
+(void)reportLossOfUnitsWarningInContext:(struct TSCEWarningReportingContext *)arg0 ;
+(void)reportMismatchedSizesWarningInContext:(struct TSCEWarningReportingContext *)arg0 ;
+(void)reportMonthOutOfRangeWarningInContext:(struct TSCEWarningReportingContext *)arg0 ;
+(void)reportNonNumericCellWarningInContext:(struct TSCEWarningReportingContext *)arg0 reference:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIgnored;
-(NSUInteger)hash;
-(id)copyByRemappingEntityIDs:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)displayStringWithCalculationEngine:(id)arg0 forTable:(struct TSKUIDStruct *)arg1 andCellID:(struct TSUCellCoord )arg2 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)type;


@end


#endif