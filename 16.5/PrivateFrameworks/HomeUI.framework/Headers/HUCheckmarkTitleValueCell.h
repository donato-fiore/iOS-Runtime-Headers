// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCHECKMARKTITLEVALUECELL_H
#define HUCHECKMARKTITLEVALUECELL_H

@class UIImageView;


#import "HUTitleValueCell.h"

@interface HUCheckmarkTitleValueCell : HUTitleValueCell

@property (nonatomic, getter=isChecked) BOOL checked; // ivar: _checked
@property (retain, nonatomic) UIImageView *checkmarkImageView; // ivar: _checkmarkImageView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateCheckmark;


@end


#endif