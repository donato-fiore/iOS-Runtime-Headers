// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTATTACHMENTINTERACTIONHANDLER_H
#define _UITEXTATTACHMENTINTERACTIONHANDLER_H

@class NSTextAttachment, NSString;
@protocol _UITextItemInteractionHandler;

#import <Foundation/Foundation.h>


@interface _UITextAttachmentInteractionHandler : NSObject <_UITextItemInteractionHandler>

 {
    NSTextAttachment *_textAttachment;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_image;
-(id)contextMenuConfiguration;
-(id)defaultActionWithContextMenuInteraction:(id)arg0 ;
-(id)initWithTextAttachment:(id)arg0 ;
-(void)_copyImage;
-(void)_saveToCameraRoll;


@end


#endif