// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTEXTINPUTHOVERCONTROLLER_H
#define PKTEXTINPUTHOVERCONTROLLER_H

@class CAShapeLayer, UIView, NSArray, CALayer, NSString;
@protocol PKHoverControllerDelegate, PKTextInputHoverControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKHoverController.h"
#import "PKTextInputElement.h"
#import "PKTextInputElementContent.h"

@interface PKTextInputHoverController : NSObject <PKHoverControllerDelegate>

 {
    BOOL __shouldHoverFlashElements;
    BOOL __shouldMakeCursorStrong;
    BOOL __lineBreakWaitingForElement;
    BOOL __lineBreakIsAtValidLocation;
    BOOL __iBeamWaitingForElement;
    id<PKTextInputHoverControllerDelegate> *_delegate;
    PKHoverController *__hoverController;
    CAShapeLayer *__hoverDebugLayer;
    PKTextInputElement *__hoverElementToFocus;
    UIView *__hoverFlashElementsView;
    NSArray *__hoverFlashElements;
    UIView *__currentHoverFlashElementView;
    CGFloat __lineBreakTimestamp;
    NSInteger __lineBreakNumLines;
    CGFloat __lineBreakIsAtValidLocationTimestamp;
    PKTextInputElement *__lineBreakElement;
    PKTextInputElement *__hidePlaceholderElement;
    PKTextInputElement *__ibeamElement;
    PKTextInputElementContent *__ibeamElementContent;
    CALayer *__ibeamLayer;
    CGFloat __ibeamLastTimestamp;
    CGPoint __lineBreakPosition;
    CGRect __ibeamFrame;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)hoverController:(id)arg0 didBegin:(struct ? )arg1 ;
-(void)hoverController:(id)arg0 didUpdate:(struct ? )arg1 ;
-(void)hoverController:(id)arg0 holdGestureMeanInputPoint:(struct ? )arg1 latestInputPoint:(struct ? )arg2 ;
-(void)hoverControllerDidEnd:(id)arg0 ;
-(void)hoverControllerDidLift:(id)arg0 ;
-(void)hoverControllerHoldGestureEnded:(id)arg0 ;
-(void)unhidePlaceholderElementIfNecessary;


@end


#endif