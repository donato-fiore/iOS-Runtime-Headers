// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTMENULINKINTERACTION_H
#define _UITEXTMENULINKINTERACTION_H

@class UITextSimpleLinkInteraction, NSMapTable, NSString;
@protocol UIContextMenuInteractionDelegate;


#import "UIContextMenuInteraction.h"

@interface _UITextMenuLinkInteraction : UITextSimpleLinkInteraction <UIContextMenuInteractionDelegate>

 {
    UIContextMenuInteraction *_contextMenuInteraction;
    NSMapTable *_configurationItems;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_contextMenuInteraction:(id)arg0 failedToBeginForSecondaryClickAtLocation:(struct CGPoint )arg1 ;
-(BOOL)_contextMenuInteraction:(id)arg0 shouldAttemptToPresentConfiguration:(id)arg1 ;
-(id)_contextMenuInteraction;
-(id)_contextMenuInteraction:(id)arg0 overrideSuggestedActionsForConfiguration:(id)arg1 ;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForDismissingMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)init;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif