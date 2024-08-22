// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTEXTMESSAGEPARTCHATITEM_H
#define IMTEXTMESSAGEPARTCHATITEM_H

@class NSAttributedString;


#import "IMMessagePartChatItem.h"

@interface IMTextMessagePartChatItem : IMMessagePartChatItem

@property (readonly, copy, nonatomic) NSAttributedString *subject; // ivar: _subject


-(BOOL)shouldDisplayRichLink;
-(id)_initWithItem:(id)arg0 text:(id)arg1 index:(NSInteger)arg2 messagePartRange:(struct _NSRange )arg3 subject:(id)arg4 ;
-(id)_initWithItem:(id)arg0 text:(id)arg1 index:(NSInteger)arg2 messagePartRange:(struct _NSRange )arg3 subject:(id)arg4 shouldDisplayLink:(BOOL)arg5 ;
-(id)_initWithItem:(id)arg0 text:(id)arg1 index:(NSInteger)arg2 messagePartRange:(struct _NSRange )arg3 subject:(id)arg4 visibleAssociatedMessageChatItems:(id)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)replyContextPreviewChatItemForReply:(id)arg0 chatContext:(id)arg1 ;
-(void)setShouldDisplayRichLink:(BOOL)arg0 ;


@end


#endif