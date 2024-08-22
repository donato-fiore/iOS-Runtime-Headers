// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMESSAGEACTIONCHATITEM_H
#define CKMESSAGEACTIONCHATITEM_H



#import "CKMultilineStampChatItem.h"

@interface CKMessageActionChatItem : CKMultilineStampChatItem



-(NSInteger)actionType;
-(id)handle;
-(id)loadTranscriptText;
-(id)sender;


@end


#endif