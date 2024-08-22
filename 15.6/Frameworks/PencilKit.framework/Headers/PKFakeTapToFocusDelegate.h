// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKFAKETAPTOFOCUSDELEGATE_H
#define PKFAKETAPTOFOCUSDELEGATE_H

@class UIView, NSUUID, UITapGestureRecognizer, NSString;
@protocol PKScribbleInteractionElementSource, PKScribbleInteractionDelegate, UIGestureRecognizerDelegate;

#import <Foundation/Foundation.h>

#import "_PKFakeTapToFocusInfo.h"
#import "PKFakeUITapGestureForRequirements.h"

@interface PKFakeTapToFocusDelegate : NSObject <PKScribbleInteractionElementSource, PKScribbleInteractionDelegate, UIGestureRecognizerDelegate>

 {
    UIView *_view;
    _PKFakeTapToFocusInfo *_focusInfo;
    NSUUID *_elementID;
    UITapGestureRecognizer *_tapGesture;
    PKFakeUITapGestureForRequirements *_gestureForRequirements;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldAttachForView:(id)arg0 ;
+(BOOL)isPossibleForView:(id)arg0 focusInfo:(id)arg1 ;
+(id)_infoInProcess;
+(id)_tapGestureForView:(id)arg0 ;
-(BOOL)_scribbleInteraction:(id)arg0 focusWillTransformElement:(id)arg1 ;
-(BOOL)_scribbleInteraction:(id)arg0 shouldBeginAtLocation:(struct CGPoint )arg1 ;
-(BOOL)_scribbleInteractionIsEnabled:(id)arg0 ;
-(BOOL)_shouldFocusBeforeObservingWithFocusInfo:(id)arg0 ;
-(id)initWithView:(id)arg0 ;
-(struct CGRect )_scribbleInteraction:(id)arg0 frameForElement:(id)arg1 ;
-(void)_focusWithFocusInfo:(id)arg0 ;
-(void)_scribbleInteraction:(id)arg0 didTargetElement:(id)arg1 forTouches:(id)arg2 event:(id)arg3 ;
-(void)_scribbleInteraction:(id)arg0 focusElement:(id)arg1 initialFocusSelectionReferencePoint:(struct CGPoint )arg2 completion:(id)arg3 ;
-(void)_scribbleInteraction:(id)arg0 requestElementsInRect:(struct CGRect )arg1 completion:(id)arg2 ;
-(void)_waitForFirstResponderChangeWithFocusInfo:(id)arg0 completion:(id)arg1 ;


@end


#endif