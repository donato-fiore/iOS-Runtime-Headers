// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREFERENCESTWOPARTVALUECELL_H
#define PREFERENCESTWOPARTVALUECELL_H

@class UILabel, UIColor;
@protocol EKCellShortener;


#import "EKUITableViewCell.h"
#import "TwoPartTextLabel.h"

@interface PreferencesTwoPartValueCell : EKUITableViewCell {
    TwoPartTextLabel *_twoPartLabel;
    unsigned int _notifiedShort;
    UILabel *_largePart2TextLabel;
}


@property (readonly, retain, nonatomic) UILabel *largePart2TextLabel;
@property (weak, nonatomic) NSObject<EKCellShortener> *shortener; // ivar: _shortener
@property (nonatomic) BOOL strikeThroughLargeDetailTextLabel; // ivar: _strikeThroughLargeDetailTextLabel
@property (nonatomic) BOOL strikeThroughLargePart2TextLabel; // ivar: _strikeThroughLargePart2TextLabel
@property (readonly, retain, nonatomic) TwoPartTextLabel *twoPartTextLabel;
@property (readonly, retain, nonatomic) UIColor *valueColor;


-(id)description;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutSubviewsCore;
-(void)checkValueWidths;
-(void)layoutSubviews;
-(void)layoutText:(id)arg0 andValue:(id)arg1 ;
-(void)shorten;


@end


#endif