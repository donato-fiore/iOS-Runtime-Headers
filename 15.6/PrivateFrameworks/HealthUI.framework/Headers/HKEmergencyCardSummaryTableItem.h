// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKEMERGENCYCARDSUMMARYTABLEITEM_H
#define HKEMERGENCYCARDSUMMARYTABLEITEM_H



#import "HKEmergencyCardTableItem.h"
#import "HKMedicalIDPersonSummaryCell.h"

@interface HKEmergencyCardSummaryTableItem : HKEmergencyCardTableItem {
    HKMedicalIDPersonSummaryCell *_cell;
}




-(BOOL)hasPresentableData;
-(id)_cell;
-(id)initInEditMode:(BOOL)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndex:(NSInteger)arg1 ;
-(struct UIEdgeInsets )separatorInset;
-(void)localeDidChange:(id)arg0 ;
-(void)setData:(id)arg0 ;
-(void)timeZoneDidChange:(id)arg0 ;


@end


#endif