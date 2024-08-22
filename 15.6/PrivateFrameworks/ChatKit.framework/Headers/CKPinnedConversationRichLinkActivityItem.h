// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKPINNEDCONVERSATIONRICHLINKACTIVITYITEM_H
#define CKPINNEDCONVERSATIONRICHLINKACTIVITYITEM_H

@class NSString, IMChatContext, LPLinkView, IMMessage;
@protocol CKPinnedConversationActivityItem;

#import <Foundation/Foundation.h>


@interface CKPinnedConversationRichLinkActivityItem : NSObject <CKPinnedConversationActivityItem>



@property (readonly, nonatomic) BOOL activityItemAppearsWithAnimation;
@property (readonly, nonatomic) CGFloat activityItemContentScale; // ivar: _activityItemContentScale
@property (readonly, nonatomic) BOOL activityItemDisappearsWithAnimation;
@property (readonly, nonatomic) NSString *activityItemIdentifier;
@property (readonly, nonatomic) NSString *attachedContactItemIdentifier; // ivar: _attachedContactItemIdentifier
@property (readonly, nonatomic) IMChatContext *chatContext; // ivar: _chatContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) LPLinkView *linkView; // ivar: _linkView
@property (readonly, nonatomic) IMMessage *message; // ivar: _message
@property (readonly) Class superclass;


-(id)activityItemView;
-(id)initWithLinkView:(id)arg0 ;
-(id)initWithMessage:(id)arg0 chatContext:(id)arg1 contentScale:(CGFloat)arg2 attachedContactItemIdentifier:(id)arg3 ;


@end


#endif