// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCENROLLMENTTABLEVIEWTEXTCELL_H
#define DMCENROLLMENTTABLEVIEWTEXTCELL_H

@class UITableViewCell, UIButton, NSString, UILabel;
@protocol DMCEnrollmentTableViewCellDataSource;



@interface DMCEnrollmentTableViewTextCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource>



@property (nonatomic) BOOL bold; // ivar: _bold
@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (copy, nonatomic) id *linkAction; // ivar: _linkAction
@property (copy, nonatomic) NSString *linkText; // ivar: _linkText
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment


-(BOOL)isMultipleLines:(id)arg0 ;
-(CGFloat)cellHeight;
-(CGFloat)estimatedCellHeight;
-(id)_textFontIsBold:(BOOL)arg0 ;
-(id)cell;
-(id)initWithText:(id)arg0 bold:(BOOL)arg1 ;
-(void)_updateTextFont;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif