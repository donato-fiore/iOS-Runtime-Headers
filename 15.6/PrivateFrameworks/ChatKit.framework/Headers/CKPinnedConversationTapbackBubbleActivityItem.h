// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKPINNEDCONVERSATIONTAPBACKBUBBLEACTIVITYITEM_H
#define CKPINNEDCONVERSATIONTAPBACKBUBBLEACTIVITYITEM_H

@class NSString, IMMessage;
@protocol CKPinnedConversationActivityItem;

#import <Foundation/Foundation.h>


@interface CKPinnedConversationTapbackBubbleActivityItem : NSObject <CKPinnedConversationActivityItem>



@property (readonly, nonatomic) BOOL activityItemAppearsWithAnimation;
@property (readonly, nonatomic) CGFloat activityItemContentScale; // ivar: _activityItemContentScale
@property (readonly, nonatomic) BOOL activityItemDisappearsWithAnimation;
@property (readonly, nonatomic) NSString *activityItemIdentifier;
@property (readonly, nonatomic) NSString *attachedContactItemIdentifier; // ivar: _attachedContactItemIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) IMMessage *message; // ivar: _message
@property (readonly) Class superclass;


-(id)activityItemView;
-(id)initWithMessage:(id)arg0 contentScale:(CGFloat)arg1 attachedContactItemIdentifier:(id)arg2 ;


@end


#endif