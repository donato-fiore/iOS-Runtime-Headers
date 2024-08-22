// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISCROLLVIEWDIRECTIONALPRESSGESTURERECOGNIZER_H
#define UISCROLLVIEWDIRECTIONALPRESSGESTURERECOGNIZER_H

@class UIRepeatingPressGestureRecognizer;


#import "UIView.h"
#import "UIScrollView.h"

@interface UIScrollViewDirectionalPressGestureRecognizer : UIRepeatingPressGestureRecognizer {
    BOOL _hasBeenModified;
    UIView *_originalView;
}


@property (readonly, nonatomic) NSInteger activePressType; // ivar: _activePressType
@property (weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView


-(BOOL)_shouldReceivePress:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_addToViewIfAllowed:(id)arg0 ;
-(void)_resetToOriginalViewIfAllowed;
-(void)_setEnabledIfAllowed:(BOOL)arg0 ;
-(void)reset;
-(void)setAllowedPressTypes:(id)arg0 ;
-(void)setAllowedTouchTypes:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif