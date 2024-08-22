// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTPRIVACYLEVELDETAILITEM_H
#define EKEVENTPRIVACYLEVELDETAILITEM_H

@class UITableViewCell, UISwitch;


#import "EKEventDetailItem.h"

@interface EKEventPrivacyLevelDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    UISwitch *_control;
    BOOL _switchStateIsOn;
}




-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(void)_switchChanged:(id)arg0 ;
-(void)reset;
-(void)setEvent:(id)arg0 store:(id)arg1 ;


@end


#endif