// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTTOUCHOBSERVINGINTERACTION_H
#define UITEXTTOUCHOBSERVINGINTERACTION_H

@class NSString;
@protocol UIGestureRecognizerDelegate, UIInteraction;

#import <Foundation/Foundation.h>

#import "UILongPressGestureRecognizer.h"
#import "UIView.h"

@interface UITextTouchObservingInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // ivar: _longPressGesture
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view


-(void)_addGestureRecognizers;
-(void)_createGestureRecognizersIfNecessary;
-(void)_removeGestureRecognizers;
-(void)didMoveToView:(id)arg0 ;
-(void)longPressObserved:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif