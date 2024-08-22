// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMONTHDAYCOLLECTIONVIEWCELL_H
#define PKMONTHDAYCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UILabel, UIView;



@interface PKMonthDayCollectionViewCell : UICollectionViewCell {
    UILabel *_dayLabel;
    UIView *_topLine;
    UIView *_leftLine;
    UIView *_bottomLine;
}


@property (nonatomic) NSInteger dayNumber; // ivar: _dayNumber
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif