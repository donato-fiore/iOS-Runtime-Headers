// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPREVIEWINTERACTION_H
#define UIPREVIEWINTERACTION_H

@protocol _UIPreviewInteractionImpl, UIPreviewInteractionDelegate, _UIPreviewInteractionTouchForceProviding;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface UIPreviewInteraction : NSObject {
    id<_UIPreviewInteractionImpl> *_interactionImpl;
}


@property (weak, nonatomic) NSObject<UIPreviewInteractionDelegate> *delegate;
@property (retain, nonatomic) NSObject<_UIPreviewInteractionTouchForceProviding> *touchForceProvider;
@property (readonly, weak, nonatomic) UIView *view;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initClickBasedImplementationWithView:(id)arg0 ;
-(id)initWithView:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;


@end


#endif