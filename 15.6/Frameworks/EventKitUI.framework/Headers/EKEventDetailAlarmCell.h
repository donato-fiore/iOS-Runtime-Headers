// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTDETAILALARMCELL_H
#define EKEVENTDETAILALARMCELL_H



#import "EKEventDetailTwoValueCell.h"

@interface EKEventDetailAlarmCell : EKEventDetailTwoValueCell



+(id)_alertLocalizedString;
-(BOOL)isEditable;
-(BOOL)update;
-(id)initWithEvent:(id)arg0 editable:(BOOL)arg1 platformStyle:(int)arg2 ;
-(void)setAlarms:(id)arg0 ;


@end


#endif