// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISHEETPRESENTATIONINTERACTION_H
#define _UISHEETPRESENTATIONINTERACTION_H

@class NSString;
@protocol UIGestureRecognizerDelegate, UIInteraction, _UISheetPresentationInteractionDelegate;

#import <Foundation/Foundation.h>

#import "UIPanGestureRecognizer.h"
#import "UIView.h"

@interface _UISheetPresentationInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction>



@property (weak, nonatomic, setter=_setDelegate:) NSObject<_UISheetPresentationInteractionDelegate> *_delegate; // ivar: __delegate
@property (retain, nonatomic, setter=_setPanGestureRecognizer:) UIPanGestureRecognizer *_panGestureRecognizer; // ivar: __panGestureRecognizer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view


-(void)_handlePan:(id)arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif