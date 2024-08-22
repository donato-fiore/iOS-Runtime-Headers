// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMESSAGEACKNOWLEDGMENTCHATITEM_H
#define CKMESSAGEACKNOWLEDGMENTCHATITEM_H

@class UIColor, NSString;
@protocol CKMessageAcknowledgment;


#import "CKAssociatedMessageChatItem.h"

@interface CKMessageAcknowledgmentChatItem : CKAssociatedMessageChatItem <CKMessageAcknowledgment>



@property (readonly, nonatomic) UIColor *acknowledgmentImageColor;
@property (readonly, nonatomic) NSString *acknowledgmentImageName;
@property (readonly, nonatomic) char balloonColorType;
@property (readonly, nonatomic) char balloonOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger messageAcknowledgmentType; // ivar: _messageAcknowledgmentType
@property (readonly, nonatomic) UIColor *selectedAcknowledgmentImageColor;
@property (readonly, nonatomic) UIColor *selectedBalloonColor;
@property (readonly) Class superclass;


-(BOOL)wantsDrawerLayout;
-(NSInteger)themeColor;
-(NSInteger)themeStyle;
-(char)transcriptOrientation;
-(id)initWithIMChatItem:(id)arg0 maxWidth:(CGFloat)arg1 ;
-(id)messageAcknowledgmentChatItem;
-(id)sender;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct CKBalloonDescriptor_t )balloonDescriptor;
-(struct UIEdgeInsets )contentInsets;


@end


#endif