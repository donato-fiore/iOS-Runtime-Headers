// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPENCILTEXTINPUTELEMENTINTERACTIONWRAPPER_H
#define PKPENCILTEXTINPUTELEMENTINTERACTIONWRAPPER_H

@class NSMutableDictionary, NSString, UIView;
@protocol PKScribbleInteractionWrapper, UIInteraction;

#import <Foundation/Foundation.h>

#import "PKPencilTextInputElementInteraction.h"

@interface PKPencilTextInputElementInteractionWrapper : NSObject <PKScribbleInteractionWrapper>

 {
    PKPencilTextInputElementInteraction *_elementInteraction;
    NSMutableDictionary *_knownElementsByID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<UIInteraction> *interaction;
@property (readonly, nonatomic) UIView *interactionView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


-(BOOL)beginSuppressingPlaceholderForElement:(id)arg0 ;
-(BOOL)focusWillTransformElement:(id)arg0 ;
-(BOOL)isElementContainer;
-(BOOL)isElementFocused:(id)arg0 ;
-(BOOL)isEnabled;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldBeginAtLocation:(struct CGPoint )arg0 ;
-(BOOL)supportsIsElementFocused;
-(BOOL)supportsShouldBegin;
-(id)initWithElementInteraction:(id)arg0 ;
-(struct CGRect )frameForElement:(id)arg0 ;
-(struct UIEdgeInsets )hitToleranceInsetsWithDefaultInsets:(struct UIEdgeInsets )arg0 element:(id)arg1 ;
-(void)didFinishWritingInElement:(id)arg0 ;
-(void)endSuppressingPlaceholderForElement:(id)arg0 ;
-(void)focusElement:(id)arg0 initialFocusSelectionReferencePoint:(struct CGPoint )arg1 completion:(id)arg2 ;
-(void)requestElementsInRect:(struct CGRect )arg0 completion:(id)arg1 ;
-(void)willBeginWritingInElement:(id)arg0 ;


@end


#endif