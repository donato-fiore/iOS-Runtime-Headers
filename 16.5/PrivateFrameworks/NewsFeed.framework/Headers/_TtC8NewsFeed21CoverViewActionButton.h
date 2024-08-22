// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8NEWSFEED21COVERVIEWACTIONBUTTON_H
#define _TTC8NEWSFEED21COVERVIEWACTIONBUTTON_H

@class UIButton;



@interface _TtC8NewsFeed21CoverViewActionButton : UIButton {
    ? onTap;
    ? onMenuPresentation;
    ? touchInsets;
    ? tintColorForNormalState;
}


@property (nonatomic) BOOL highlighted;


-(BOOL)isHighlighted;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif