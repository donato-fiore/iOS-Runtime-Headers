// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFNUMBERRANGEFORMATTER_H
#define HFNUMBERRANGEFORMATTER_H

@class NSFormatter;



@interface HFNumberRangeFormatter : NSFormatter

@property (nonatomic) BOOL consolidatesUnit; // ivar: _consolidatesUnit
@property (retain, nonatomic) NSFormatter *numberFormatter; // ivar: _numberFormatter


+(id)_nonNumericCharacterSet;
-(BOOL)_isRTL;
-(BOOL)_shouldRemoveUnitFromMaximumFormattedValue:(id)arg0 ;
-(BOOL)_shouldRemoveUnitFromMinimumFormattedValue:(id)arg0 ;
-(id)initWithNumberFormatter:(id)arg0 ;
-(id)stringForNumberRange:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;


@end


#endif