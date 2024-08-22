// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMREPLYCONTEXTTRANSCRIPTPLUGINCHATITEM_H
#define IMREPLYCONTEXTTRANSCRIPTPLUGINCHATITEM_H

@class IMItem, IMMessageItem, NSString;
@protocol IMReplyContext;


#import "IMTranscriptPluginChatItem.h"

@interface IMReplyContextTranscriptPluginChatItem : IMTranscriptPluginChatItem <IMReplyContext>



@property (retain, nonatomic) IMItem *_parentItem; // ivar: _parentItem
@property (readonly, nonatomic) IMMessageItem *messageItem; // ivar: _messageItem
@property (nonatomic) BOOL replyIsFromMe; // ivar: _replyIsFromMe
@property (copy, nonatomic) NSString *replyMessageGUID; // ivar: _replyMessageGUID


-(BOOL)canDelete;
-(BOOL)isReplyContextPreview;
-(id)_initWithItem:(id)arg0 parentItem:(id)arg1 replyMessageGUID:(id)arg2 replyIsFromMe:(BOOL)arg3 initialPayload:(id)arg4 index:(NSInteger)arg5 messagePartRange:(struct _NSRange )arg6 parentChatHasKnownParticipants:(BOOL)arg7 chatContext:(id)arg8 ;


@end


#endif