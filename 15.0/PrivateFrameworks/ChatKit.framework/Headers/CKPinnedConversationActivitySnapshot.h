// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKPINNEDCONVERSATIONACTIVITYSNAPSHOT_H
#define CKPINNEDCONVERSATIONACTIVITYSNAPSHOT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CKPinnedConversationActivitySnapshot : NSObject

@property (readonly, copy, nonatomic) NSArray *activityItems; // ivar: _activityItems
@property (readonly, copy, nonatomic) NSArray *contactItems; // ivar: _contactItems


+(id)emptySnapshot;
-(CGFloat)_contentScaleForContactItemAtIndex:(NSInteger)arg0 withMessageContentScale:(CGFloat)arg1 ;
-(CGFloat)_contentScaleForMessage:(id)arg0 amongRecentMessagesInPinnedConversations:(id)arg1 ;
-(NSInteger)_contactItemAlignmentForItemAtIndex:(NSInteger)arg0 firstItemAlignment:(NSInteger)arg1 ;
-(NSInteger)_firstContactItemAlignmentForContactItem:(id)arg0 previousSnapshot:(id)arg1 totalNumberOfContactItemIdentifiersWithUnreadMessages:(NSInteger)arg2 ;
-(id)_contactItemMatchingIdentifier:(id)arg0 ;
-(id)initWithActivityItems:(id)arg0 contactItems:(id)arg1 ;
-(id)initWithConversation:(id)arg0 recentMessagesInPinnedConversations:(id)arg1 previousSnapshot:(id)arg2 ;


@end


#endif