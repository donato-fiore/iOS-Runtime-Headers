// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8NEWSFEED20ISSUECOVERVIEWBUTTON_H
#define _TTC8NEWSFEED20ISSUECOVERVIEWBUTTON_H

@class UIButton;



@interface _TtC8NewsFeed20IssueCoverViewButton : UIButton {
    ? onTap;
    ? coverView;
}


@property (nonatomic) CGRect frame;
@property (nonatomic) BOOL highlighted;


-(BOOL)isHighlighted;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif