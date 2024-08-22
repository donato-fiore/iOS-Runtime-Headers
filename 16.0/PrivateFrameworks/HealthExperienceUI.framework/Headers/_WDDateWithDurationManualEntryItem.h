// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WDDATEWITHDURATIONMANUALENTRYITEM_H
#define _WDDATEWITHDURATIONMANUALENTRYITEM_H

@class NSDate, NSString;
@protocol WDAddDataManualEntryItemDelegate;


#import "WDAddDataManualEntryItem.h"

@interface _WDDateWithDurationManualEntryItem : WDAddDataManualEntryItem <WDAddDataManualEntryItemDelegate>

 {
    WDAddDataManualEntryItem *_startItem;
    WDAddDataManualEntryItem *_durationItem;
    NSDate *_maximumStartDate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generateValue;
-(id)initWithMaximumDate:(id)arg0 ;
-(id)tableViewCells;
-(void)_setupEntryItems;
-(void)beginEditing;
-(void)manualEntryItemDidUpdate:(id)arg0 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif