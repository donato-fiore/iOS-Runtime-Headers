// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSPANVIEW_H
#define CPSPANVIEW_H

@class CPUIPassthroughView, NSString;
@protocol UIGestureRecognizerDelegate, CPSPanViewDelegate;


#import "CPSPanButton.h"

@interface CPSPanView : CPUIPassthroughView <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPSPanViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPSPanButton *panDownButton; // ivar: _panDownButton
@property (readonly, nonatomic) CPSPanButton *panLeftButton; // ivar: _panLeftButton
@property (readonly, nonatomic) CPSPanButton *panRightButton; // ivar: _panRightButton
@property (readonly, nonatomic) CPSPanButton *panUpButton; // ivar: _panUpButton
@property (readonly, nonatomic) CGFloat sideButtonTopInset;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handleButtonTapped:(id)arg0 ;
-(void)_handleLongPressGesture:(id)arg0 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif