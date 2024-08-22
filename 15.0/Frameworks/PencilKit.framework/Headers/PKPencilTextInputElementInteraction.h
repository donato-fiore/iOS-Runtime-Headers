// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPENCILTEXTINPUTELEMENTINTERACTION_H
#define PKPENCILTEXTINPUTELEMENTINTERACTION_H

@class NSString, UIView;
@protocol PKScribbleInteractionWrapperProvider, UIInteraction, PKScribbleInteractionWrapper, PKPencilTextInputElementInteractionDelegate;

#import <Foundation/Foundation.h>


@interface PKPencilTextInputElementInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction>

 {
    id<PKScribbleInteractionWrapper> *_cachedWrapper;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPencilTextInputElementInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view


+(id)_pencilTextInputElementInteractionInView:(id)arg0 ;
-(id)scribbleInteractionWrapper;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif