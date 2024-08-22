// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MESSAGEATTACHMENTACTIONGENERATOR_H
#define MESSAGEATTACHMENTACTIONGENERATOR_H


#import <Foundation/Foundation.h>


@interface MessageAttachmentActionGenerator : NSObject



+(id)_saveToCameraRollActionForFutureRepresentations:(id)arg0 title:(id)arg1 image:(id)arg2 ;
+(id)markupDocumentActionForURL:(id)arg0 messageObjectID:(id)arg1 mailboxObjectID:(id)arg2 subject:(id)arg3 contentRepresentationHandlingDelegate:(id)arg4 ;
+(id)quicklookActionForAttachmentContext:(id)arg0 alternateAction:(id)arg1 ;
+(id)quicklookActionForURL:(id)arg0 messageObjectID:(id)arg1 mailboxObjectID:(id)arg2 subject:(id)arg3 contentRepresentationHandlingDelegate:(id)arg4 ;
+(id)saveAllAttachmentsActionWithTitle:(id)arg0 futureRepresentations:(id)arg1 ;
+(id)saveImageActionForFutureRepresentation:(id)arg0 ;
+(id)saveVideoActionForFutureRepresentation:(id)arg0 ;


@end


#endif