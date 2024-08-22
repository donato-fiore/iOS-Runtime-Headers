// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCOMPONENTINTERACTIONMANAGER_H
#define SXCOMPONENTINTERACTIONMANAGER_H

@class NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate, SXComponentInteractionManager, SXComponentInteractionHandlerManager;

#import <Foundation/Foundation.h>

#import "SXComponentView.h"
#import "SXComponentInteractionPreview.h"
#import "SXDelayed.h"
#import "SXViewport.h"

@interface SXComponentInteractionManager : NSObject <UIGestureRecognizerDelegate, SXComponentInteractionManager>



@property (retain, nonatomic) SXComponentView *currentComponentView; // ivar: _currentComponentView
@property (retain, nonatomic) SXComponentInteractionPreview *currentPreview; // ivar: _currentPreview
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXComponentInteractionHandlerManager> *interactionHandlerManager; // ivar: _interactionHandlerManager
@property (retain, nonatomic) SXDelayed *longPressDelay; // ivar: _longPressDelay
@property (readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (nonatomic) CGPoint longPressStartLocation; // ivar: _longPressStartLocation
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (readonly, nonatomic) SXViewport *viewport; // ivar: _viewport
@property (nonatomic) BOOL wantsPointyHand; // ivar: _wantsPointyHand


-(BOOL)accessibilityShouldHandleInteractionForComponentView:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)hasInteractionForLocation:(struct CGPoint )arg0 ;
-(id)initWithInteractionHandlerManager:(id)arg0 viewport:(id)arg1 ;
-(id)previewViewControllerForLocation:(struct CGPoint )arg0 ;
-(void)animateHighlight:(BOOL)arg0 forComponentView:(id)arg1 ;
-(void)cancelInteractionForComponentView:(id)arg0 ;
-(void)commitViewController:(id)arg0 ;
-(void)handleInteraction:(id)arg0 withType:(NSUInteger)arg1 ;
-(void)handleLongPressGesture:(id)arg0 ;
-(void)handleTapGesture:(id)arg0 ;
-(void)toggleHighlightForComponentView:(id)arg0 ;
-(void)updateHighlight:(BOOL)arg0 forComponentView:(id)arg1 ;


@end


#endif