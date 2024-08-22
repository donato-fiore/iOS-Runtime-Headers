// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDADDDATAMANUALENTRYITEM_H
#define WDADDDATAMANUALENTRYITEM_H

@class NSNumber, NSString;
@protocol WDAddDataManualEntryItemDelegate;

#import <Foundation/Foundation.h>


@interface WDAddDataManualEntryItem : NSObject

@property (weak, nonatomic) NSObject<WDAddDataManualEntryItemDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSNumber *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *secondaryLabel; // ivar: _secondaryLabel
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)dateItemWithMaximumDate:(id)arg0 ;
+(id)dateTimeItemWithMaximumDate:(id)arg0 ;
+(id)dateTimeItemWithMaximumDate:(id)arg0 highlightWhenEditing:(BOOL)arg1 ;
+(id)durationItemWithMaximumDate:(id)arg0 ;
+(id)heightPickerItemWithFeetUnitString:(id)arg0 inchUnitString:(id)arg1 ;
+(id)multiSelectItemWithEntries:(id)arg0 selectedIndex:(NSInteger)arg1 ;
+(id)numericItemWithManualEntryType:(NSUInteger)arg0 numberFormatter:(id)arg1 ;
+(id)timeItemWithMaximumDate:(id)arg0 ;
+(id)twoPartDateRangeItemWithMaximumEndDate:(id)arg0 ;
+(id)twoPartDateTimeItemWithMaximumDate:(id)arg0 ;
-(id)_createUITableViewCell;
-(id)_createWDManualDataEntryTableViewCellWithDisplayName:(id)arg0 unitName:(id)arg1 entryType:(NSUInteger)arg2 highlightWhenEditing:(BOOL)arg3 ;
-(id)generateValue;
-(id)tableViewCells;
-(void)_didUpdateValue;
-(void)_disambiguateDateComponents:(id)arg0 withCompletion:(id)arg1 ;
-(void)beginEditing;
-(void)cellForItemTapped:(id)arg0 ;
-(void)resetItem;
-(void)setValue:(id)arg0 ;


@end


#endif