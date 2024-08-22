// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTPLAINLINKINTERACTIONHANDLER_H
#define _UITEXTPLAINLINKINTERACTIONHANDLER_H

@class UIView<_UITextContent>, NSString;
@protocol _UITextItemInteractionHandler;

#import <Foundation/Foundation.h>


@interface _UITextPlainLinkInteractionHandler : NSObject <_UITextItemInteractionHandler>

 {
    _NSRange _range;
    UIView<_UITextContent> *_view;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_addLinkToReadingListAction:(id)arg0 ;
-(id)_copyLinkAction:(id)arg0 ;
-(id)_handlerRequiringUnlockedDevice:(SEL)arg0 ;
-(id)_openAppLinkInDefaultBrowserAction:(id)arg0 ;
-(id)_openAppLinkInExternalApplicationAction:(id)arg0 ;
-(id)_openURLAction:(id)arg0 ;
-(id)_shareLinkAction:(id)arg0 ;
-(id)_titleForLink:(id)arg0 ;
-(id)contextMenuConfiguration;
-(id)defaultActionWithContextMenuInteraction:(id)arg0 ;
-(id)initWithItem:(id)arg0 inTextContentView:(id)arg1 ;
-(id)link;


@end


#endif