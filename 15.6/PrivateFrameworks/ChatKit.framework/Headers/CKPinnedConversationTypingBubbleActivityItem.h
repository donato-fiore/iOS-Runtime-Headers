// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKPINNEDCONVERSATIONTYPINGBUBBLEACTIVITYITEM_H
#define CKPINNEDCONVERSATIONTYPINGBUBBLEACTIVITYITEM_H

@class NSString;
@protocol CKPinnedConversationActivityItem;

#import <Foundation/Foundation.h>


@interface CKPinnedConversationTypingBubbleActivityItem : NSObject <CKPinnedConversationActivityItem>



@property (readonly, nonatomic) BOOL activityItemAppearsWithAnimation;
@property (readonly, nonatomic) CGFloat activityItemContentScale;
@property (readonly, nonatomic) BOOL activityItemDisappearsWithAnimation;
@property (readonly, nonatomic) NSString *activityItemIdentifier;
@property (readonly, nonatomic) NSString *attachedContactItemIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activityItemView;


@end


#endif