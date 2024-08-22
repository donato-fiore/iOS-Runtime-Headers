// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKREPORTSPAMCHATITEM_H
#define CKREPORTSPAMCHATITEM_H

@class NSAttributedString;


#import "CKStampLabelChatItem.h"

@interface CKReportSpamChatItem : CKStampLabelChatItem

@property (readonly, copy, nonatomic) NSAttributedString *internalPhishingWarning;
@property (copy, nonatomic) NSAttributedString *transcriptButtonText; // ivar: _transcriptButtonText


-(BOOL)hasMultipleMessages;
-(BOOL)isGroupChat;
-(BOOL)showReportSMSSpam;
-(Class)cellClass;
-(NSUInteger)layoutType;
-(id)loadTranscriptText;
-(id)transcriptTextForSpam:(BOOL)arg0 ;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;


@end


#endif