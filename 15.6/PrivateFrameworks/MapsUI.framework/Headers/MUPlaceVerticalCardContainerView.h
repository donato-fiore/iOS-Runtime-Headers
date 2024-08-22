// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUPLACEVERTICALCARDCONTAINERVIEW_H
#define MUPLACEVERTICALCARDCONTAINERVIEW_H

@class UIView, UILongPressGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate, MUPlaceVerticalCardContainerViewDelegate;


#import "MUStackView.h"
#import "MUPlaceVerticalCardConfiguration.h"

@interface MUPlaceVerticalCardContainerView : MUStackView <UIGestureRecognizerDelegate>

 {
    NSUInteger _trackingSelectForRow;
    UIView *_selectedRow;
    UILongPressGestureRecognizer *_longPressRecognizer;
    MUPlaceVerticalCardConfiguration *_configuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUPlaceVerticalCardContainerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldInvokeCopyOnLongPress;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(NSUInteger)_indexOfRowAt:(struct CGPoint )arg0 ;
-(id)_rowAt:(struct CGPoint )arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithShowsSeparators:(BOOL)arg0 ;
-(void)_handleLongPress:(id)arg0 ;
-(void)_menuDismissed:(id)arg0 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)removeArrangedSubview:(id)arg0 ;
-(void)setRowViews:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif