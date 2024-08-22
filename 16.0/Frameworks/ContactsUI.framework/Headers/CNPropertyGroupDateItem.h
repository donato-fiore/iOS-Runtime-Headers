// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPROPERTYGROUPDATEITEM_H
#define CNPROPERTYGROUPDATEITEM_H



#import "CNPropertyGroupItem.h"

@interface CNPropertyGroupDateItem : CNPropertyGroupItem



+(BOOL)isEmptyDateComponents:(id)arg0 ;
+(id)calendarForLabel:(id)arg0 ;
+(id)dateDisplayStringFromComponents:(id)arg0 ;
+(id)emptyValueForLabel:(id)arg0 ;
+(id)initialValueForLabel:(id)arg0 group:(id)arg1 ;
+(id)localeAndCalendarPairFromDateComponents:(id)arg0 ;
+(id)propertyGroupItemWithLabeledValue:(id)arg0 group:(id)arg1 contact:(id)arg2 ;
+(void)initialize;
-(BOOL)isEmpty;
-(BOOL)isEquivalentToItem:(id)arg0 ;
-(BOOL)isValidValue:(id)arg0 ;
-(id)bestValue:(id)arg0 ;
-(id)defaultActionURL;
-(id)displayStringForValue:(id)arg0 ;
-(id)normalizedValue;
-(id)placeholderString;
-(id)valueForDisplayString:(id)arg0 ;


@end


#endif