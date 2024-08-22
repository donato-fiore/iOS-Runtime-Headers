// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTLINKINTERACTION_H
#define UITEXTLINKINTERACTION_H

@protocol UIContextMenuInteractionDelegate;


#import "UITextItemInteractionInteraction.h"

@interface UITextLinkInteraction : UITextItemInteractionInteraction

@property (readonly, weak, nonatomic) NSObject<UIContextMenuInteractionDelegate> *contextMenuDelegateProxy;


+(id)interactionWithShouldProxyContextMenuDelegate:(BOOL)arg0 ;


@end


#endif