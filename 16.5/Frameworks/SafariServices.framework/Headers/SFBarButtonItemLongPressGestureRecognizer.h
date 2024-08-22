// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFBARBUTTONITEMLONGPRESSGESTURERECOGNIZER_H
#define SFBARBUTTONITEMLONGPRESSGESTURERECOGNIZER_H

@class UILongPressGestureRecognizer, UIBarButtonItem, NSString;
@protocol UIGestureRecognizerDelegate;



@interface SFBarButtonItemLongPressGestureRecognizer : UILongPressGestureRecognizer <UIGestureRecognizerDelegate>

 {
    UIBarButtonItem *_barButtonItem;
    id *_target;
    SEL _longPressAction;
    SEL _touchDownAction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)gestureRecognizerTarget:(id)arg0 longPressAction:(SEL)arg1 touchDownAction:(SEL)arg2 attachedToBarButtonItem:(id)arg3 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_invokeLongPressAction;
-(void)_updateMinimumPressDurationForContentSizeCategory:(id)arg0 ;
-(void)longPress:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif