// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKHIGHLIGHTLONGPRESSGESTURERECOGNIZER_H
#define WKHIGHLIGHTLONGPRESSGESTURERECOGNIZER_H

@class UIWebHighlightLongPressGestureRecognizer, UIScrollView;



@interface WKHighlightLongPressGestureRecognizer : UIWebHighlightLongPressGestureRecognizer {
    WeakObjCPtr<UIScrollView> _lastTouchedScrollView;
}


@property (readonly, weak, nonatomic) UIScrollView *lastTouchedScrollView;


-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif