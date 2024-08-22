// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NAARTICLENAVIGATIONBARMESSAGECONTAINER_H
#define NAARTICLENAVIGATIONBARMESSAGECONTAINER_H

@class UIView;



@interface NAArticleNavigationBarMessageContainer : UIView {
    ? textForArticleMessage;
    ? defaultView;
    ? messageLabel;
    ? clipView;
    ? state;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithDefaultView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif