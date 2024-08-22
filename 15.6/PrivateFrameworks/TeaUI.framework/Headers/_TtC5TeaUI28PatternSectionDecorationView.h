// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC5TEAUI28PATTERNSECTIONDECORATIONVIEW_H
#define _TTC5TEAUI28PATTERNSECTIONDECORATIONVIEW_H

@class UICollectionReusableView;
@protocol _TtP5TeaUI24GutterViewBoundsObserver_;



@interface _TtC5TeaUI28PatternSectionDecorationView : UICollectionReusableView <_TtP5TeaUI24GutterViewBoundsObserver_>

 {
    ? patternView;
    ? model;
    ? token;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)gutterViewBoundsDidChange;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif