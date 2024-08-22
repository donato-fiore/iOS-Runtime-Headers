// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WDTWOPARTDATERANGEMANUALENTRYITEM_H
#define _WDTWOPARTDATERANGEMANUALENTRYITEM_H

@class NSDate, NSString;
@protocol WDAddDataManualEntryItemDelegate;


#import "WDAddDataManualEntryItem.h"

@interface _WDTwoPartDateRangeManualEntryItem : WDAddDataManualEntryItem <WDAddDataManualEntryItemDelegate>

 {
    WDAddDataManualEntryItem *_startItem;
    WDAddDataManualEntryItem *_endItem;
    NSDate *_maximumEndDate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generateValue;
-(id)initWithMaximumEndDate:(id)arg0 ;
-(id)tableViewCells;
-(void)_endItemDidChange;
-(void)_setupEntryItems;
-(void)_startItemDidChange;
-(void)beginEditing;
-(void)manualEntryItemDidUpdate:(id)arg0 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif