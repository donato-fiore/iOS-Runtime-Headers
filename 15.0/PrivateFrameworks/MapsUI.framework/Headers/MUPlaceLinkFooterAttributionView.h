// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACELINKFOOTERATTRIBUTIONVIEW_H
#define MUPLACELINKFOOTERATTRIBUTIONVIEW_H

@class UIView, UIButton, NSAttributedString;



@interface MUPlaceLinkFooterAttributionView : UIView {
    UIButton *_attributionButton;
    id *_target;
    SEL _action;
}


@property (copy, nonatomic) NSAttributedString *attributedTitle; // ivar: _attributedTitle


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupLinkView;
-(void)_updateAppearance;
-(void)setTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif