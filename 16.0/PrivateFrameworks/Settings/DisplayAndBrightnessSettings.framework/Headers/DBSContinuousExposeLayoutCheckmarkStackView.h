// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSCONTINUOUSEXPOSELAYOUTCHECKMARKSTACKVIEW_H
#define DBSCONTINUOUSEXPOSELAYOUTCHECKMARKSTACKVIEW_H

@class UIStackView, UILabel;


#import "DBSCheckmarkView.h"

@interface DBSContinuousExposeLayoutCheckmarkStackView : UIStackView

@property (retain, nonatomic) DBSCheckmarkView *checkmark; // ivar: _checkmark
@property (retain, nonatomic) UILabel *label; // ivar: _label


-(id)initWithLabelText:(id)arg0 checkmarkKey:(struct __CFString *)arg1 ;


@end


#endif