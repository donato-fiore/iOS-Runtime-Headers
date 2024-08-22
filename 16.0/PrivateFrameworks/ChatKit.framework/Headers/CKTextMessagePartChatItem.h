// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTEXTMESSAGEPARTCHATITEM_H
#define CKTEXTMESSAGEPARTCHATITEM_H

@class NSItemProvider, NSAttributedString;


#import "CKMessagePartChatItem.h"

@interface CKTextMessagePartChatItem : CKMessagePartChatItem {
    NSItemProvider *_dragItemProvider;
    BOOL _shouldUseBigEmoji;
    BOOL _hasCachedBigEmoji;
}


@property (readonly, nonatomic) BOOL containsExcessiveLineHeightCharacters;
@property (readonly, nonatomic) BOOL containsHyperlink;
@property (readonly, copy, nonatomic) NSAttributedString *fallbackCorruptText;
@property (readonly, nonatomic) BOOL shouldUseBigEmoji;
@property (readonly, copy, nonatomic) NSAttributedString *subject;
@property (readonly, copy, nonatomic) NSAttributedString *text;


-(BOOL)allowsMentions;
-(BOOL)mentionsMe:(id)arg0 ;
-(BOOL)showMoneyResults;
-(Class)balloonViewClass;
-(Class)impactBalloonViewClass;
-(id)_attributedTextWithTextColor:(id)arg0 ;
-(id)_fallbackCorruptMessageTextWithTextColor:(id)arg0 ;
-(id)_time;
-(id)bodyTextFont;
-(id)compositionWithContext:(id)arg0 ;
-(id)dragItemProvider;
-(id)loadTranscriptText;
-(id)meMentionsTextColor;
-(id)rtfDocumentItemsWithFormatString:(id)arg0 selectedTextRange:(struct _NSRange )arg1 ;
-(id)sendAnimationTextWithColor:(id)arg0 ;


@end


#endif