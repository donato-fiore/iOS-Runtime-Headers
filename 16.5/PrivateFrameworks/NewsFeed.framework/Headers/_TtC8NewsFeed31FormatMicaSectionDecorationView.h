// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8NEWSFEED31FORMATMICASECTIONDECORATIONVIEW_H
#define _TTC8NEWSFEED31FORMATMICASECTIONDECORATIONVIEW_H

@class UICollectionReusableView;
@protocol _TtP5TeaUI24GutterViewBoundsObserver_;



@interface _TtC8NewsFeed31FormatMicaSectionDecorationView : UICollectionReusableView <_TtP5TeaUI24GutterViewBoundsObserver_>

 {
    ? micaView;
    ? token;
    ? model;
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