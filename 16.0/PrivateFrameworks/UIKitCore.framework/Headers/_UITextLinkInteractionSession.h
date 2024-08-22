// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTLINKINTERACTIONSESSION_H
#define _UITEXTLINKINTERACTIONSESSION_H

@class UIView<UITextLinkInteraction>;

#import <Foundation/Foundation.h>

#import "UITextItemInteractionInteraction.h"

@interface _UITextLinkInteractionSession : NSObject {
    UITextItemInteractionInteraction *_interaction;
    UIView<UITextLinkInteraction> *_linkInteractionView;
}




-(BOOL)_allowItemInteractions;
-(BOOL)canInteractWithLinkAtPoint:(struct CGPoint )arg0 ;
-(BOOL)tapOnLinkWithGesture:(id)arg0 ;
-(id)initWithTextItemInteraction:(id)arg0 ;
-(void)dealloc;


@end


#endif