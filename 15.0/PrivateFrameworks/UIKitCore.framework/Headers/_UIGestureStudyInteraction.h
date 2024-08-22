// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIGESTURESTUDYINTERACTION_H
#define _UIGESTURESTUDYINTERACTION_H

@class NSString, NSMutableDictionary;
@protocol UIGestureRecognizerDelegate, UIInteraction, _UIGestureStudyInteractionDelegate;

#import <Foundation/Foundation.h>

#import "_UIGestureStudyClickInteraction.h"
#import "_UIGestureStudyMetricsGestureRecognizer.h"
#import "UIView.h"

@interface _UIGestureStudyInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIGestureStudyInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *eventMetadata; // ivar: _eventMetadata
@property (retain, nonatomic) _UIGestureStudyClickInteraction *forceClickInteraction; // ivar: _forceClickInteraction
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIGestureStudyClickInteraction *longPressClickInteraction; // ivar: _longPressClickInteraction
@property (retain, nonatomic) _UIGestureStudyMetricsGestureRecognizer *metricsGestureRecognizer; // ivar: _metricsGestureRecognizer
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)_baseMetadataForTriggeredParticipant:(id)arg0 ;
-(id)_numberOfActiveTouches;
-(id)_viewRegionForTriggeredParticipant:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(struct CGPoint )locationInCoordinateSpace:(id)arg0 ;
-(void)_handleMetricsEvent:(id)arg0 ;
-(void)_interactionDidTrigger:(id)arg0 ;
-(void)_reportEventForTriggeredParticipant:(id)arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif