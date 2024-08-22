// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _WDNUMBERBASEDADDDATAMANUALENTRYITEM_H
#define _WDNUMBERBASEDADDDATAMANUALENTRYITEM_H

@class NSNumberFormatter;
@protocol WDManualDataEntryTableViewCellDelegate;


#import "WDAddDataManualEntryItem.h"
#import "WDManualDataEntryTableViewCell.h"

@interface _WDNumberBasedAddDataManualEntryItem : WDAddDataManualEntryItem <WDManualDataEntryTableViewCellDelegate>

 {
    WDManualDataEntryTableViewCell *_tableViewCell;
}


@property (nonatomic) NSUInteger manualEntryType; // ivar: _manualEntryType
@property (retain, nonatomic) NSNumberFormatter *numberFormatter; // ivar: _numberFormatter


-(id)generateValue;
-(id)tableViewCells;
-(void)beginEditing;
-(void)manualDataEntryTableViewCell:(id)arg0 valueDidChangeToValue:(id)arg1 ;
-(void)setTitle:(id)arg0 ;
-(void)setValue:(id)arg0 ;


@end


#endif