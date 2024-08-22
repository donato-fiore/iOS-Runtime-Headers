// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHMUTABLETIMEBASEDFORMAT_H
#define TSCHMUTABLETIMEBASEDFORMAT_H

@class NSString, NSNumber, NSSet;
@protocol TSCHCustomFormatUpdateSupport, TSUMutableDurationFormatInspectorPropertyVendor, TSUMutableDateTimeFormatInspectorPropertyVendor;


#import "TSCHTimeBasedFormat.h"

@interface TSCHMutableTimeBasedFormat : TSCHTimeBasedFormat <TSCHCustomFormatUpdateSupport, TSUMutableDurationFormatInspectorPropertyVendor, TSUMutableDateTimeFormatInspectorPropertyVendor>



@property (copy, nonatomic) NSString *dateFormat;
@property (copy, nonatomic) NSString *dateTimeFormatString;
@property (copy, nonatomic) NSNumber *durationStyle;
@property (nonatomic) unsigned char durationStyleValue;
@property (copy, nonatomic) NSNumber *durationUnitLargest;
@property (nonatomic) unsigned char durationUnitLargestValue;
@property (copy, nonatomic) NSNumber *durationUnitSmallest;
@property (nonatomic) unsigned char durationUnitSmallestValue;
@property (copy, nonatomic) NSNumber *durationUnitsAutomatic;
@property (nonatomic) BOOL durationUnitsAutomaticValue;
@property (readonly, copy, nonatomic) NSSet *selectedDateFormats;
@property (readonly, copy, nonatomic) NSSet *selectedDurationStyles;
@property (readonly, copy, nonatomic) NSSet *selectedTimeFormats;
@property (copy, nonatomic) NSString *timeFormat;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)remapCustomFormatKeysWithOldToNewKeyMap:(id)arg0 ;
-(void)updateAfterPasteForDocumentRoot:(id)arg0 pasteboardCustomFormatList:(id)arg1 ;
-(void)updateCustomFormatKey:(id)arg0 ;
-(void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)arg0 ;


@end


#endif