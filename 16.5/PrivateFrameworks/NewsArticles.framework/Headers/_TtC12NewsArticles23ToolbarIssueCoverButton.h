// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12NEWSARTICLES23TOOLBARISSUECOVERBUTTON_H
#define _TTC12NEWSARTICLES23TOOLBARISSUECOVERBUTTON_H

@class UIButton;



@interface _TtC12NewsArticles23ToolbarIssueCoverButton : UIButton {
    ? coverView;
    ? callToActionLabel;
    ? coverDateLabel;
    ? highlightView;
    ? highlightColor;
}


@property (nonatomic) BOOL highlighted;


-(BOOL)isHighlighted;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif