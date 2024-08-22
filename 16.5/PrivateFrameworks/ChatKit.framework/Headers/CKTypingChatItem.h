// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTYPINGCHATITEM_H
#define CKTYPINGCHATITEM_H

@class CALayer<CKTypingIndicatorLayerProtocol>;


#import "CKChatItem.h"

@interface CKTypingChatItem : CKChatItem

@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property (readonly, nonatomic) CALayer<CKTypingIndicatorLayerProtocol> *indicatorLayer;


-(BOOL)displayDuringSend;
-(BOOL)wantsDrawerLayout;
-(Class)cellClass;
-(NSUInteger)layoutType;
-(char)transcriptOrientation;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct UIEdgeInsets )contentInsets;


@end


#endif