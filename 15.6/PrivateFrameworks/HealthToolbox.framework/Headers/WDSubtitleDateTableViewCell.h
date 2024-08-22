// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDSUBTITLEDATETABLEVIEWCELL_H
#define WDSUBTITLEDATETABLEVIEWCELL_H

@class UITableViewCell, NSLayoutConstraint, UILabel;



@interface WDSubtitleDateTableViewCell : UITableViewCell

@property (retain, nonatomic) NSLayoutConstraint *baselineConstraint; // ivar: _baselineConstraint
@property (retain, nonatomic) UILabel *dateTextLabel; // ivar: _dateTextLabel
@property (retain, nonatomic) UILabel *mainTextLabel; // ivar: _mainTextLabel
@property (retain, nonatomic) UILabel *subtitleTextLabel; // ivar: _subtitleTextLabel


-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_updateForCurrentSizeCategory;
-(void)setupConstraints;
-(void)setupSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif