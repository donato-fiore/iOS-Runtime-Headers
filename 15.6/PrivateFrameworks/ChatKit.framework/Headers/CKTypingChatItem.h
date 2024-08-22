// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTYPINGCHATITEM_H
#define CKTYPINGCHATITEM_H

@class CALayer<IMTypingIndicatorLayerProtocol>;


#import "CKChatItem.h"

@interface CKTypingChatItem : CKChatItem

@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property (readonly, nonatomic) CALayer<IMTypingIndicatorLayerProtocol> *indicatorLayer;


-(BOOL)displayDuringSend;
-(BOOL)wantsDrawerLayout;
-(Class)cellClass;
-(NSUInteger)layoutType;
-(char)transcriptOrientation;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct UIEdgeInsets )contentInsets;


@end


#endif