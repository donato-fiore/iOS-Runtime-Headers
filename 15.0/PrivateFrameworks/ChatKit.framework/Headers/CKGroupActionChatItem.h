// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKGROUPACTIONCHATITEM_H
#define CKGROUPACTIONCHATITEM_H



#import "CKMultilineStampChatItem.h"

@interface CKGroupActionChatItem : CKMultilineStampChatItem



-(NSInteger)actionType;
-(id)loadTranscriptText;
-(id)sender;


@end


#endif