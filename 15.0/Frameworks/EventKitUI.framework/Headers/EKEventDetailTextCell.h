// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTDETAILTEXTCELL_H
#define EKEVENTDETAILTEXTCELL_H

@class UILabel, UITextView, NSString;
@protocol EKEventDetailTextCellDelegate;


#import "EKEventDetailCell.h"

@interface EKEventDetailTextCell : EKEventDetailCell {
    UILabel *_textTitleView;
    UITextView *_textView;
    id *_textFromEventBlock;
    NSString *_title;
}


@property (readonly, nonatomic) BOOL isTruncatingText; // ivar: _isTruncatingText
@property (weak, nonatomic) NSObject<EKEventDetailTextCellDelegate> *textDelegate; // ivar: _textDelegate


-(BOOL)update;
-(CGFloat)_layoutForWidth:(CGFloat)arg0 ;
-(id)_textTitleView;
-(id)_textView;
-(id)initWithEvent:(id)arg0 editable:(BOOL)arg1 title:(id)arg2 textFromEventBlock:(id)arg3 ;
-(void)layoutForWidth:(CGFloat)arg0 position:(int)arg1 ;
-(void)layoutSubviews;


@end


#endif