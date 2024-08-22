// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTDEBUGVIEWTABLECELL_H
#define PKTEXTINPUTDEBUGVIEWTABLECELL_H

@class UITableViewCell, UIButton, UILabel, NSString, NSAttributedString;
@protocol PKTextInputDebugViewTableCellDelegate;



@interface PKTextInputDebugViewTableCell : UITableViewCell

@property (retain, nonatomic) UIButton *_detailsButton; // ivar: __detailsButton
@property (retain, nonatomic) UILabel *_titleLabel; // ivar: __titleLabel
@property (retain, nonatomic) UILabel *_valueLabel; // ivar: __valueLabel
@property (weak, nonatomic) NSObject<PKTextInputDebugViewTableCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL showDetailsButton; // ivar: _showDetailsButton
@property (copy, nonatomic) NSString *statusKey; // ivar: _statusKey
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText
@property (copy, nonatomic) NSAttributedString *valueAttributedText; // ivar: _valueAttributedText


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_handleDetailsButton:(id)arg0 ;
-(void)_setupContentViewsIfNeeded;
-(void)_updateLabels;


@end


#endif