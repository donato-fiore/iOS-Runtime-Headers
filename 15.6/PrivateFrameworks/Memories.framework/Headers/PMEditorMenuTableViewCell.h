// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMEDITORMENUTABLEVIEWCELL_H
#define PMEDITORMENUTABLEVIEWCELL_H

@class UITableViewCell, UIActivityIndicatorView, UILabel, NSString, NSLayoutConstraint;



@interface PMEditorMenuTableViewCell : UITableViewCell

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) UILabel *centerDetailsLabel; // ivar: _centerDetailsLabel
@property (retain, nonatomic) NSString *detailText; // ivar: _detailText
@property (retain, nonatomic) NSLayoutConstraint *labelLeadingConstraint; // ivar: _labelLeadingConstraint
@property (retain, nonatomic) UILabel *lowerDetailsLabel; // ivar: _lowerDetailsLabel
@property (retain, nonatomic) NSString *secondaryDetailText; // ivar: _secondaryDetailText
@property (nonatomic, getter=isShowingActivityIndicator) BOOL showingActivityIndicator; // ivar: _showingActivityIndicator
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UILabel *upperDetailsLabel; // ivar: _upperDetailsLabel


+(CGFloat)dynamicTypeHeight;
-(id)_disclosureChevronImage:(BOOL)arg0 ;
-(void)_updateFonts;
-(void)awakeFromNib;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;


@end


#endif