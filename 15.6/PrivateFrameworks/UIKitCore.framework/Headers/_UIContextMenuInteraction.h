// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICONTEXTMENUINTERACTION_H
#define _UICONTEXTMENUINTERACTION_H

@class NSString;
@protocol UIContextMenuInteractionDelegate, UIInteraction, _UIContextMenuInteractionDelegate;

#import <Foundation/Foundation.h>

#import "_UIContextMenuPreviewActionGroup.h"
#import "UIContextMenuInteraction.h"
#import "UIGestureRecognizer.h"
#import "UIView.h"

@interface _UIContextMenuInteraction : NSObject <UIContextMenuInteractionDelegate, UIInteraction>

 {
    ? _delegateImplements;
}


@property (retain, nonatomic) _UIContextMenuPreviewActionGroup *actionGroup; // ivar: _actionGroup
@property (retain, nonatomic) UIContextMenuInteraction *actualInteraction; // ivar: _actualInteraction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<_UIContextMenuInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizerForExclusionRelationships; // ivar: _gestureRecognizerForExclusionRelationships
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(id)_actionsWithSuggestedActions:(id)arg0 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForDismissingMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 willCommitWithAnimator:(id)arg1 ;
-(void)contextMenuInteractionDidEnd:(id)arg0 ;
-(void)contextMenuInteractionWillPresent:(id)arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif