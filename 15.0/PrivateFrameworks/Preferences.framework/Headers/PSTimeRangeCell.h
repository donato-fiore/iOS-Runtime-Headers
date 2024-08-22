// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSTIMERANGECELL_H
#define PSTIMERANGECELL_H

@class UILabel, NSArray;
@protocol PSTimeRangeCellDelegate;


#import "PSTableCell.h"

@interface PSTimeRangeCell : PSTableCell {
    UILabel *_fromTitle;
    UILabel *_toTitle;
    UILabel *_fromTime;
    UILabel *_toTime;
    NSArray *_constraints;
    id<PSTimeRangeCellDelegate> *_delegate;
}




-(id)accessibilityConstraintsWithVariableBindings:(id)arg0 metrics:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)regularConstraintsWithVariableBindings:(id)arg0 metrics:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;


@end


#endif