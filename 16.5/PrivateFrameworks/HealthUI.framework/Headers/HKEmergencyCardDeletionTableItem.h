// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKEMERGENCYCARDDELETIONTABLEITEM_H
#define HKEMERGENCYCARDDELETIONTABLEITEM_H

@class UITableViewCell;
@protocol HKEmergencyCardDeletionDelegate;


#import "HKEmergencyCardTableItem.h"

@interface HKEmergencyCardDeletionTableItem : HKEmergencyCardTableItem {
    UITableViewCell *_cell;
}


@property (weak, nonatomic) NSObject<HKEmergencyCardDeletionDelegate> *deletionDelegate; // ivar: _deletionDelegate


-(BOOL)shouldHighlightRowAtIndex:(NSInteger)arg0 ;
-(id)initInEditMode:(BOOL)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndex:(NSInteger)arg1 ;
-(id)title;
-(struct UIEdgeInsets )separatorInset;
-(void)tableView:(id)arg0 didSelectRowAtIndex:(NSInteger)arg1 ;


@end


#endif