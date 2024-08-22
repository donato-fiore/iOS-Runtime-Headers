// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC5TEAUI19SECTIONSELECTORVIEW_H
#define _TTC5TEAUI19SECTIONSELECTORVIEW_H

@class UIView;



@interface _TtC5TeaUI19SectionSelectorView : UIView {
    ? spacing;
    ? minWidth;
    ? maxWidth;
    ? defaultInset;
    ? height;
    ? textAlpha;
    ? highlightedTextAlpha;
    ? selectedTextAlpha;
    ? delegate;
    ? dataSource;
    ? textColor;
    ? selectedIndex;
    ? scrollView;
    ? buttons;
    ? unselectedButtonFont;
    ? selectedButtonFont;
}


@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif