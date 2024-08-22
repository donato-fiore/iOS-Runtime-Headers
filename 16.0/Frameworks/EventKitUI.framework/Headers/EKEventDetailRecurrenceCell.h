// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKEVENTDETAILRECURRENCECELL_H
#define EKEVENTDETAILRECURRENCECELL_H

@class UILabel;


#import "EKEventDetailCell.h"

@interface EKEventDetailRecurrenceCell : EKEventDetailCell {
    UILabel *_recurrenceLabel;
    CGFloat _lastLayoutWidth;
}




-(CGFloat)height;
-(id)_myTableView;
-(id)_recurrenceLabel;
-(void)layoutForWidth:(CGFloat)arg0 position:(int)arg1 ;
-(void)layoutSubviews;
-(void)setRecurrenceString:(id)arg0 ;


@end


#endif