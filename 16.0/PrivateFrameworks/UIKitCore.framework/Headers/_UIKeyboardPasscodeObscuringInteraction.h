// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYBOARDPASSCODEOBSCURINGINTERACTION_H
#define _UIKEYBOARDPASSCODEOBSCURINGINTERACTION_H

@class NSString;
@protocol UIPointerInteractionDelegate, UIInteraction;

#import <Foundation/Foundation.h>

#import "UIPointerInteraction.h"
#import "UIView.h"

@interface _UIKeyboardPasscodeObscuringInteraction : NSObject <UIPointerInteractionDelegate, UIInteraction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view


-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif