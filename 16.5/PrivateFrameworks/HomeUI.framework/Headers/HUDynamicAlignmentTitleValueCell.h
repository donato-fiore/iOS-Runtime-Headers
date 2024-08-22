// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUDYNAMICALIGNMENTTITLEVALUECELL_H
#define HUDYNAMICALIGNMENTTITLEVALUECELL_H



#import "HUTitleValueCell.h"
#import "HUDynamicAlignmentTitleValueCellLayoutOptions.h"

@interface HUDynamicAlignmentTitleValueCell : HUTitleValueCell

@property (retain, nonatomic) HUDynamicAlignmentTitleValueCellLayoutOptions *layoutOptions; // ivar: _layoutOptions


-(BOOL)useVerticalLayout;
-(void)_ensureCorrectHeaderViewOrientation;


@end


#endif