// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMESSAGERETRACTIONCHATITEM_H
#define CKMESSAGERETRACTIONCHATITEM_H



#import "CKStampButtonChatItem.h"

@interface CKMessageRetractionChatItem : CKStampButtonChatItem

@property (readonly, nonatomic) BOOL isRetractedReply;
@property (readonly, nonatomic) BOOL isRetractedReplyThreadOriginator;


-(BOOL)canBeSelectedInEditMode;
-(id)_loadTranscriptTextWithRetractionUnsupportedCount:(NSUInteger)arg0 unsupportedNames:(id)arg1 isFromMe:(BOOL)arg2 isFailedRetraction:(BOOL)arg3 senderName:(id)arg4 ;
-(id)_retractionUnsupportedByNamesFromHandles:(id)arg0 ;
-(id)imMessageRetractionChatItem;
-(id)loadTranscriptText;
-(struct UIEdgeInsets )contentInsets;


@end


#endif