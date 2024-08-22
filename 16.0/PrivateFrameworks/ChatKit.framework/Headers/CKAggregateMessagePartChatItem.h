// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKAGGREGATEMESSAGEPARTCHATITEM_H
#define CKAGGREGATEMESSAGEPARTCHATITEM_H

@class NSArray, NSString;


#import "CKTextMessagePartChatItem.h"

@interface CKAggregateMessagePartChatItem : CKTextMessagePartChatItem

@property (copy, nonatomic) NSArray *subparts; // ivar: _subparts
@property (readonly, copy, nonatomic) NSString *title;


-(Class)balloonViewClass;
-(id)compositionWithContext:(id)arg0 ;
-(id)initWithIMChatItem:(id)arg0 maxWidth:(CGFloat)arg1 ;
-(id)loadTranscriptText;
-(id)pasteboardItemProviders;
-(id)rtfDocumentItemsWithFormatString:(id)arg0 selectedTextRange:(struct _NSRange )arg1 ;


@end


#endif