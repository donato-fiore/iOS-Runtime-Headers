// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDHEIGHTADDDATAVIEWCONTROLLER_H
#define WDHEIGHTADDDATAVIEWCONTROLLER_H



#import "WDDisplayTypeAddDataViewController.h"
#import "WDAddDataManualEntryItem.h"

@interface WDHeightAddDataViewController : WDDisplayTypeAddDataViewController {
    WDAddDataManualEntryItem *_heightPickerManualEntryItem;
}




-(BOOL)_inputUnitIsFeetWithDisplayType:(id)arg0 unitController:(id)arg1 ;
-(id)_feetUnitString;
-(id)_inchUnitString;
-(id)createValueFieldManualEntryItem;
-(id)initWithDisplayType:(id)arg0 healthStore:(id)arg1 unitController:(id)arg2 initialStartDate:(id)arg3 dateCache:(id)arg4 ;


@end


#endif