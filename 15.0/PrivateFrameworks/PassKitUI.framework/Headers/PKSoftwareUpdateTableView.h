// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSOFTWAREUPDATETABLEVIEW_H
#define PKSOFTWAREUPDATETABLEVIEW_H

@class UITableView, UIScrollView, UILabel, UITextView, UIColor;



@interface PKSoftwareUpdateTableView : UITableView {
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UITextView *_messageView;
}


@property (nonatomic) NSInteger context; // ivar: _context
@property (retain, nonatomic) UIColor *linkColor; // ivar: _linkColor
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor


-(id)_messageAttributedStringWithTextColor:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(void)layoutSubviews;


@end


#endif