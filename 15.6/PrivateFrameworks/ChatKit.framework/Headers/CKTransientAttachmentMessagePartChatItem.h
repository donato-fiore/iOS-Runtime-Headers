// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTRANSIENTATTACHMENTMESSAGEPARTCHATITEM_H
#define CKTRANSIENTATTACHMENTMESSAGEPARTCHATITEM_H

@class NSString;


#import "CKAttachmentMessagePartChatItem.h"
#import "CKMediaObject.h"

@interface CKTransientAttachmentMessagePartChatItem : CKAttachmentMessagePartChatItem

@property (retain, nonatomic) CKMediaObject *mediaObject;
@property (retain, nonatomic) NSString *parentGUID; // ivar: _parentGUID


-(id)IMChatItem;
-(id)initWithParentChatItem:(id)arg0 ;


@end


#endif