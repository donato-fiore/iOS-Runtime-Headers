// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKPINNEDCONVERSATIONSUMMARYBUBBLEACTIVITYITEM_H
#define CKPINNEDCONVERSATIONSUMMARYBUBBLEACTIVITYITEM_H

@class NSString, IMChat, IMMessage, NSAttributedString;
@protocol CKPinnedConversationActivityItem;

#import <Foundation/Foundation.h>


@interface CKPinnedConversationSummaryBubbleActivityItem : NSObject <CKPinnedConversationActivityItem>



@property (readonly, nonatomic) BOOL activityItemAppearsWithAnimation;
@property (readonly, nonatomic) CGFloat activityItemContentScale; // ivar: _activityItemContentScale
@property (readonly, nonatomic) BOOL activityItemDisappearsWithAnimation;
@property (readonly, nonatomic) NSString *activityItemIdentifier;
@property (readonly, nonatomic) NSString *attachedContactItemIdentifier; // ivar: _attachedContactItemIdentifier
@property (readonly, nonatomic) IMChat *chat; // ivar: _chat
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) IMMessage *message; // ivar: _message
@property (readonly, nonatomic) NSAttributedString *summaryText; // ivar: _summaryText
@property (readonly) Class superclass;


-(id)activityItemView;
-(id)initWithMessage:(id)arg0 chat:(id)arg1 contentScale:(CGFloat)arg2 attachedContactItemIdentifier:(id)arg3 ;
-(id)initWithSummaryText:(id)arg0 ;


@end


#endif