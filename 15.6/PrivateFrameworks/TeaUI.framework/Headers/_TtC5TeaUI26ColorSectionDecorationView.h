// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC5TEAUI26COLORSECTIONDECORATIONVIEW_H
#define _TTC5TEAUI26COLORSECTIONDECORATIONVIEW_H

@class UICollectionReusableView;
@protocol _TtP5TeaUI24GutterViewBoundsObserver_;



@interface _TtC5TeaUI26ColorSectionDecorationView : UICollectionReusableView <_TtP5TeaUI24GutterViewBoundsObserver_>





-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)gutterViewBoundsDidChange;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif