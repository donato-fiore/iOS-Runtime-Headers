// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BFFLINKLABELFOOTERVIEW_H
#define BFFLINKLABELFOOTERVIEW_H

@class UIView, UILabel, NSMutableArray, NSAttributedString, NSString, UIColor;



@interface BFFLinkLabelFooterView : UIView {
    UILabel *_label;
    UILabel *_subtitleLabel;
    NSMutableArray *_linkHandlers;
    UIView *_topLine;
}


@property (retain, nonatomic) NSAttributedString *attributedSubtitleText; // ivar: _attributedSubtitleText
@property (nonatomic) CGFloat flexibleHeight; // ivar: _flexibleHeight
@property (retain, nonatomic) NSString *labelText;
@property (nonatomic) UIEdgeInsets margins; // ivar: _margins
@property (retain, nonatomic) UIColor *topLineColor;
@property (nonatomic) BOOL wantsFromBottomLayout; // ivar: _wantsFromBottomLayout
@property (nonatomic) BOOL wantsSideBySideLayout; // ivar: _wantsSideBySideLayout


+(void)initialize;
-(NSUInteger)numberOfLinks;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 shouldSetSize:(BOOL)arg1 ;
-(void)addLinkWithTitle:(id)arg0 handler:(id)arg1 ;
-(void)addLinkWithTitle:(id)arg0 textStyle:(id)arg1 handler:(id)arg2 ;
-(void)layoutSubviews;
-(void)removeAllLinks;
-(void)removeLinkAtIndex:(NSUInteger)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif