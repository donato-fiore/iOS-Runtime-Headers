// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSLARGERSIZESHELPTEXTVIEW_H
#define DBSLARGERSIZESHELPTEXTVIEW_H

@class UIView, UILabel;
@protocol PSHeaderFooterView;



@interface DBSLargerSizesHelpTextView : UIView <PSHeaderFooterView>

 {
    UILabel *_helpLabel;
}




-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(id)initWithSpecifier:(id)arg0 ;
-(void)layoutForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif