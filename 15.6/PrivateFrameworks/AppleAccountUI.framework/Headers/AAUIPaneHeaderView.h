// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUIPANEHEADERVIEW_H
#define AAUIPANEHEADERVIEW_H

@class UIView, BFFPaneHeaderView, UILabel;



@interface AAUIPaneHeaderView : UIView {
    BFFPaneHeaderView *_header;
}


@property (readonly, nonatomic) UIView *_header;
@property (readonly, nonatomic) UILabel *detailTextLabel;
@property (readonly, nonatomic) UILabel *subLabel;
@property (readonly, nonatomic) UILabel *textLabel;


-(CGFloat)innerHeaderMaxY;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)makeAllTheTextFits;
-(void)setLayoutMargins:(struct UIEdgeInsets )arg0 ;
-(void)setTitleText:(id)arg0 ;


@end


#endif