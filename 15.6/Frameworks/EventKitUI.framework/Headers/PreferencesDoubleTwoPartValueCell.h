// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PREFERENCESDOUBLETWOPARTVALUECELL_H
#define PREFERENCESDOUBLETWOPARTVALUECELL_H

@class UILabel;


#import "PreferencesTwoPartValueCell.h"
#import "TwoPartTextLabel.h"

@interface PreferencesDoubleTwoPartValueCell : PreferencesTwoPartValueCell {
    UILabel *_textLabel2;
    TwoPartTextLabel *_twoPartLabel2;
}


@property (readonly, retain, nonatomic) UILabel *textLabel2;
@property (readonly, retain, nonatomic) TwoPartTextLabel *twoPartTextLabel2;


-(void)_layoutSubviewsCore;
-(void)checkValueWidths;
-(void)layoutText:(id)arg0 andValue:(id)arg1 ;


@end


#endif