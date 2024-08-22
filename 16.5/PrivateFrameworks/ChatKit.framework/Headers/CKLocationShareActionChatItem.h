// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKLOCATIONSHAREACTIONCHATITEM_H
#define CKLOCATIONSHAREACTIONCHATITEM_H



#import "CKMultilineStampLabelChatItem.h"

@interface CKLocationShareActionChatItem : CKMultilineStampLabelChatItem



-(NSInteger)actionType;
-(NSInteger)direction;
-(id)handle;
-(id)loadTranscriptText;
-(id)sender;


@end


#endif