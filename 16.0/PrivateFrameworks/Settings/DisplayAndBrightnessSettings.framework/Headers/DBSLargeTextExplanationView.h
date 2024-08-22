// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSLARGETEXTEXPLANATIONVIEW_H
#define DBSLARGETEXTEXPLANATIONVIEW_H

@class UIView, UILabel, UITextView;
@protocol PSHeaderFooterView;



@interface DBSLargeTextExplanationView : UIView <PSHeaderFooterView>

 {
    UILabel *_bodyExampleLabel;
    UITextView *_bodyExampleTextView;
}




-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(id)initWithSpecifier:(id)arg0 ;
-(void)layoutForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif