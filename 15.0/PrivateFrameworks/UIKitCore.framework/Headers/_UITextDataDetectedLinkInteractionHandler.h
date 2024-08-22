// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTDATADETECTEDLINKINTERACTIONHANDLER_H
#define _UITEXTDATADETECTEDLINKINTERACTIONHANDLER_H

@class UIView<_UITextContent>, NSString;
@protocol _UITextItemInteractionHandler;

#import <Foundation/Foundation.h>

#import "_UITextInteractableItem.h"
#import "UIAction.h"

@interface _UITextDataDetectedLinkInteractionHandler : NSObject <_UITextItemInteractionHandler>

 {
    _NSRange _range;
    CGRect _rect;
    UIView<_UITextContent> *_view;
    _UITextInteractableItem *_item;
    UIAction *_defaultAction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)preferredContextMenuLayout;
-(id)_defaultDDAction;
-(id)actionSheetTitle;
-(id)contextMenuConfiguration;
-(id)defaultActionWithContextMenuInteraction:(id)arg0 ;
-(id)initWithItem:(id)arg0 inTextContentView:(id)arg1 ;
-(struct CGRect )rectAtItemLocation;


@end


#endif