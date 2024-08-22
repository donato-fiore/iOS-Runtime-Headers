// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKEMERGENCYCARDLASTUPDATEDTABLEITEM_H
#define HKEMERGENCYCARDLASTUPDATEDTABLEITEM_H



#import "HKEmergencyCardTableItem.h"

@interface HKEmergencyCardLastUpdatedTableItem : HKEmergencyCardTableItem {
    BOOL _editable;
}




-(BOOL)hasPresentableData;
-(id)initInEditMode:(BOOL)arg0 editable:(BOOL)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndex:(NSInteger)arg1 ;


@end


#endif