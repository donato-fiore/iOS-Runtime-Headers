// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIDRAGSOURCE_H
#define SEARCHUIDRAGSOURCE_H

@class NSString, UIView;
@protocol UIDragInteractionDelegate, UIDragInteractionDelegate_Private, SearchUIFeedbackDelegateInternal;

#import <Foundation/Foundation.h>

#import "SearchUIRowModel.h"

@interface SearchUIDragSource : NSObject <UIDragInteractionDelegate, UIDragInteractionDelegate_Private>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SearchUIRowModel *dragObject; // ivar: _dragObject
@property (weak) UIView *dragSourceView; // ivar: _dragSourceView
@property (weak) NSObject<SearchUIFeedbackDelegateInternal> *feedbackDelegate; // ivar: _feedbackDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *overrideDragPreviewView; // ivar: _overrideDragPreviewView
@property (readonly) Class superclass;


+(id)dragSourceForView:(id)arg0 dragObject:(id)arg1 feedbackDelegate:(id)arg2 ;
-(BOOL)_shouldPerformHitTestingForDragSessionInView:(id)arg0 ;
-(BOOL)dragInteraction:(id)arg0 sessionAllowsMoveOperation:(id)arg1 ;
-(BOOL)dragInteraction:(id)arg0 sessionIsRestrictedToDraggingApplication:(id)arg1 ;
-(BOOL)isMailDrag;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(id)_requiredContextIDsForDragSessionInView:(id)arg0 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)dragParametersForPreviewView:(id)arg0 ;
-(id)initWithView:(id)arg0 dragObject:(id)arg1 feedbackDelegate:(id)arg2 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)sendDragFeedback;


@end


#endif