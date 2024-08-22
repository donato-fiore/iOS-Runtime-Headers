// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMESSAGEREPLYCOUNTCHATITEM_H
#define CKMESSAGEREPLYCOUNTCHATITEM_H



#import "CKMessageStatusChatItem.h"

@interface CKMessageReplyCountChatItem : CKMessageStatusChatItem

@property (readonly, nonatomic) NSUInteger replyCount;


-(BOOL)shouldHideDuringDarkFSM;
-(Class)cellClass;
-(NSInteger)buttonType;
-(NSUInteger)layoutType;
-(char)transcriptOrientation;
-(id)_loadTranscriptButtonTextForReplyCountButtonType;
-(id)loadTranscriptButtonText;


@end


#endif