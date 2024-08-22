// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICONTEXTMENUINTERACTIONBASEDTEXTCONTEXTINTERACTION_H
#define _UICONTEXTMENUINTERACTIONBASEDTEXTCONTEXTINTERACTION_H

@class UITextContextMenuInteractionBase, NSString;
@protocol UIContextMenuInteractionDelegate;


#import "UIContextMenuInteraction.h"

@interface _UIContextMenuInteractionBasedTextContextInteraction : UITextContextMenuInteractionBase <UIContextMenuInteractionDelegate>



@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // ivar: _contextMenuInteraction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)init;
-(void)_contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 completion:(id)arg2 ;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif