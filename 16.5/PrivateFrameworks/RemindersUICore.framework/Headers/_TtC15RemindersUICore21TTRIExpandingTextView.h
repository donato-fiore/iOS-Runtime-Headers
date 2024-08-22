// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15REMINDERSUICORE21TTRIEXPANDINGTEXTVIEW_H
#define _TTC15REMINDERSUICORE21TTRIEXPANDINGTEXTVIEW_H

@class UITextView;



@interface _TtC15RemindersUICore21TTRIExpandingTextView : UITextView {
    ? lineIndexWhereClippingBegins;
    ? isForUseInNUIContainerView;
    ? textStorageObserver;
}


@property (nonatomic) BOOL scrollEnabled;


-(BOOL)isScrollEnabled;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(struct CGSize )_layoutSizeThatFits:(struct CGSize )arg0 fixedAxes:(NSUInteger)arg1 ;


@end


#endif