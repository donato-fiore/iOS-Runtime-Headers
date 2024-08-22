// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKEMERGENCYCARDFOOTERTABLEITEM_H
#define HKEMERGENCYCARDFOOTERTABLEITEM_H

@class NSAttributedString;


#import "HKEmergencyCardTableItem.h"
#import "HKEmergencyCardFooterCell.h"

@interface HKEmergencyCardFooterTableItem : HKEmergencyCardTableItem {
    HKEmergencyCardFooterCell *_cell;
}


@property (retain, nonatomic) NSAttributedString *attributedTitleForFooter; // ivar: _attributedTitleForFooter
@property (copy, nonatomic) id *shouldInteractWithURLBlock; // ivar: _shouldInteractWithURLBlock


-(BOOL)hasPresentableData;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)_cell;
-(id)initInEditMode:(BOOL)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndex:(NSInteger)arg1 ;
-(struct UIEdgeInsets )separatorInset;


@end


#endif