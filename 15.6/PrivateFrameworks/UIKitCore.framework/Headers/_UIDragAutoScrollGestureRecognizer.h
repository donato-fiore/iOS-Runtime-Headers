// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDRAGAUTOSCROLLGESTURERECOGNIZER_H
#define _UIDRAGAUTOSCROLLGESTURERECOGNIZER_H

@class NSString;
@protocol _UIDragEventRespondable;


#import "UIDragGestureRecognizer.h"

@interface _UIDragAutoScrollGestureRecognizer : UIDragGestureRecognizer <_UIDragEventRespondable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(BOOL)shouldReceiveEvent:(id)arg0 ;
-(void)_draggingEndedWithEvent:(id)arg0 ;
-(void)_draggingEnteredWithEvent:(id)arg0 ;
-(void)_draggingExitedWithEvent:(id)arg0 ;
-(void)_draggingUpdatedWithEvent:(id)arg0 ;


@end


#endif