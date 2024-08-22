// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8NEWSFEED12FORMATBUTTON_H
#define _TTC8NEWSFEED12FORMATBUTTON_H

@class UIControl;



@interface _TtC8NewsFeed12FormatButton : UIControl {
    ? onTap;
    ? formatLayoutView;
    ? stateMaskFormatLayoutViews;
    ? createMenuElementsBlock;
}


@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL selected;


-(BOOL)isEnabled;
-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif