// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHTIMEBASEDFORMAT_H
#define TSCHTIMEBASEDFORMAT_H

@class NSUUID, NSString, NSNumber, TSKFormat, NSSet;
@protocol TSCHDataFormatter, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject, TSCHFormatTypeSupport, TSCHCustomFormatSupport, NSCopying, NSMutableCopying, TSUDurationFormatInspectorPropertyVendor, TSUDateTimeFormatInspectorPropertyVendor;

#import <Foundation/Foundation.h>


@interface TSCHTimeBasedFormat : NSObject <TSCHDataFormatter, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject, TSCHFormatTypeSupport, TSCHCustomFormatSupport, NSCopying, NSMutableCopying, TSUDurationFormatInspectorPropertyVendor, TSUDateTimeFormatInspectorPropertyVendor>



@property (readonly, copy, nonatomic) NSUUID *customFormatListKey;
@property (readonly, copy, nonatomic) NSString *dateFormat;
@property (readonly, copy, nonatomic) NSString *dateTimeFormatString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *durationStyle;
@property (readonly, nonatomic) unsigned char durationStyleValue;
@property (readonly, copy, nonatomic) NSNumber *durationUnitLargest;
@property (readonly, nonatomic) unsigned char durationUnitLargestValue;
@property (readonly, copy, nonatomic) NSNumber *durationUnitSmallest;
@property (readonly, nonatomic) unsigned char durationUnitSmallestValue;
@property (readonly, nonatomic) unsigned char durationUnits;
@property (readonly, copy, nonatomic) NSNumber *durationUnitsAutomatic;
@property (readonly, nonatomic) BOOL durationUnitsAutomaticValue;
@property (readonly, copy, nonatomic) TSKFormat *format;
@property (copy, nonatomic) TSKFormat *format; // ivar: _format
@property (readonly, nonatomic) unsigned int formatType;
@property (readonly, nonatomic) unsigned int formatType;
@property (readonly, nonatomic) unsigned int formatType;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCustom;
@property (readonly, nonatomic) BOOL isDate;
@property (readonly, nonatomic) BOOL isDuration;
@property (readonly, nonatomic) NSInteger numberOfDecimalPlaces;
@property (readonly, copy, nonatomic) NSSet *selectedDateFormats;
@property (readonly, copy, nonatomic) NSSet *selectedDurationStyles;
@property (readonly, copy, nonatomic) NSSet *selectedTimeFormats;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *timeFormat;


+(BOOL)supportsFormatType:(unsigned int)arg0 ;
+(id)defaultDateFormat:(id)arg0 ;
+(id)defaultDurationFormat:(id)arg0 ;
+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)timeBasedFormatWithTSKFormat:(id)arg0 ;
-(BOOL)isCompatibleWithDataFormatter:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)chartFormattedInspectorStringForValue:(id)arg0 locale:(id)arg1 ;
-(id)chartFormattedStringForValue:(id)arg0 locale:(id)arg1 ;
-(id)convertToPersistableStyleObject;
-(id)convertToSupportedClientFormatObjectWithLocale:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customFormat;
-(id)customFormatKey;
-(id)dataFormatterForDocumentRoot:(id)arg0 ;
-(id)dateTimeFormat;
-(id)durationFormat;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithTSKFormat:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif