// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUIWORKOUTFOOTNOTETABLEVIEWCELL_H
#define FIUIWORKOUTFOOTNOTETABLEVIEWCELL_H

@class UITableViewCell, UILabel, UIView, NSString;



@interface FIUIWorkoutFootnoteTableViewCell : UITableViewCell {
    UILabel *_titleLabel;
    UILabel *_footnoteLabel;
    UIView *_dividerView;
}


@property (copy, nonatomic) NSString *footnoteText; // ivar: _footnoteText
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText


+(CGFloat)preferredHeight;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif