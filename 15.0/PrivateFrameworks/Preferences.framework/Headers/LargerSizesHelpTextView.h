// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LARGERSIZESHELPTEXTVIEW_H
#define LARGERSIZESHELPTEXTVIEW_H

@class UIView, UILabel;
@protocol PSHeaderFooterView;



@interface LargerSizesHelpTextView : UIView <PSHeaderFooterView>

 {
    UILabel *_helpLabel;
}




-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(id)initWithSpecifier:(id)arg0 ;
-(void)layoutForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif