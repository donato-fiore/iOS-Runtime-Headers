// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDETONATEDCHATITEM_H
#define CKDETONATEDCHATITEM_H



#import "CKMessagePartChatItem.h"

@interface CKDetonatedChatItem : CKMessagePartChatItem



-(BOOL)canAttachStickers;
-(BOOL)canCopy;
-(BOOL)canExport;
-(BOOL)canForward;
-(BOOL)canPerformQuickAction;
-(BOOL)canSendAsTextMessage;
-(BOOL)isSensitive;
-(Class)balloonViewClass;
-(NSUInteger)balloonCorners;
-(id)dragItemProvider;
-(id)momentShareURL;
-(id)rtfDocumentItemsWithFormatString:(id)arg0 selectedTextRange:(struct _NSRange )arg1 ;


@end


#endif