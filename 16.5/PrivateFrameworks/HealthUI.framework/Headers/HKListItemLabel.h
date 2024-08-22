// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKLISTITEMLABEL_H
#define HKLISTITEMLABEL_H

@class UIView, NSLayoutConstraint, NSString, UILabel;



@interface HKListItemLabel : UIView

@property (nonatomic) BOOL boldText; // ivar: _boldText
@property (nonatomic) BOOL centerItemViewToFirstLine; // ivar: _centerItemViewToFirstLine
@property (retain, nonatomic) UIView *itemView; // ivar: _itemView
@property (nonatomic) CGSize itemViewSize; // ivar: _itemViewSize
@property (retain, nonatomic) NSLayoutConstraint *itemViewTextAlignmentConstraint; // ivar: _itemViewTextAlignmentConstraint
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (retain, nonatomic) NSLayoutConstraint *topToTextLabelFirstBaselineConstraint; // ivar: _topToTextLabelFirstBaselineConstraint


+(id)createListItem:(id)arg0 itemNumber:(int)arg1 ;
-(CGFloat)_topToTextLabelFirstBaseline;
-(id)initWithView:(id)arg0 size:(struct CGSize )arg1 text:(id)arg2 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)_setUpConstraints;
-(void)_setUpUI;
-(void)_updateItemViewTextAlignmentConstraint;
-(void)_updateTextLabelFont;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif