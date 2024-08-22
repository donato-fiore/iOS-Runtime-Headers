// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDROPINTERACTIONGESTURERECOGNIZER_H
#define UIDROPINTERACTIONGESTURERECOGNIZER_H

@class NSString;
@protocol _UIDragEventRespondable;


#import "UIDragGestureRecognizer.h"

@interface UIDropInteractionGestureRecognizer : UIDragGestureRecognizer <_UIDragEventRespondable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(void)_draggingEndedWithEvent:(id)arg0 ;
-(void)_draggingEnteredWithEvent:(id)arg0 ;
-(void)_draggingExitedWithEvent:(id)arg0 ;
-(void)_draggingUpdatedWithEvent:(id)arg0 ;


@end


#endif