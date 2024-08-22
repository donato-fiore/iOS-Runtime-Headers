// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTEXTVIEWTABLEVIEWCELL_H
#define PKTEXTVIEWTABLEVIEWCELL_H

@class UITableViewCell, UITextView;



@interface PKTextViewTableViewCell : UITableViewCell

@property (readonly, nonatomic) UITextView *textView; // ivar: _textView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif