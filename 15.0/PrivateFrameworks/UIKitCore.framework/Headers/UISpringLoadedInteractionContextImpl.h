// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISPRINGLOADEDINTERACTIONCONTEXTIMPL_H
#define UISPRINGLOADEDINTERACTIONCONTEXTIMPL_H

@class NSString;
@protocol UISpringLoadedInteractionContext_Internal, UIDropSession;

#import <Foundation/Foundation.h>

#import "UISpringLoadedGestureRecognizer.h"
#import "UIView.h"

@interface UISpringLoadedInteractionContextImpl : NSObject <UISpringLoadedInteractionContext_Internal>



@property (weak, nonatomic) UISpringLoadedGestureRecognizer *currentRecognizer; // ivar: _currentRecognizer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<UIDropSession> *dropSession;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *overrideTargetItem; // ivar: overrideTargetItem
@property (retain, nonatomic) UIView *overrideTargetView; // ivar: overrideTargetView
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) id *targetItem; // ivar: targetItem
@property (retain, nonatomic) UIView *targetView; // ivar: targetView


-(struct CGPoint )locationInView:(id)arg0 ;


@end


#endif